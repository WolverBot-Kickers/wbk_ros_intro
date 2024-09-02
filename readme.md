# Project 1 

### Intended usage

This is an optional, introductory project as an introduction to ROS2 and C++. If you already have knowledge on ROS and/or C++, feel free to skip this and dive right into other projects!


### Background

You are a software engineer at a large Concert Ticket Trading Platform. 

You are tasked with developing a synchrnous, reponsive application that responds to price updates and execute orders.

Given the following intended results, create the application using ROS2.

### Prerequisite

If you don't have ROS2 Jazzy installed (lower verisons are fine, but we will be using Jazzy for our robots so this is a good chance to upgrade them), please install them [here](https://docs.ros.org/en/jazzy/Installation.html).

Alternatively, if you wish to use a Docker container, you can get them [here](https://github.com/shinlee03/ros2_base).

### Resources

The project will involve multiple ROS2 concepts, such as nodes, topics, services, etc. If you have any questions, [Official Documentation](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools.html) is a great resource, or you can ask any of the leads for more info!


## Desired Functionalities

Your application should have a **price 'publisher'**, which publishes (or send service requests of) price updates.

The **price update executor** should take those requests/listen to price updates and apply the changes to the respective concerts.

Similarly, the **order publisher** should publish (or send service requests of) purchase or sell orders.

The **order executor** should then receive and execute those orders.

You should have a separate node that keeps track of the account balances for each customer. Assume each customers' account balance starts at **1000**. 


## Architecture

- [Nodes](#nodes)
- [Interfaces](#interfaces)

### Nodes

You may use any number of nodes as you want, but the following set of nodes may be helpful:

- Price Update Publisher/Input Node
- Price Update Execution Node
- Order Publisher/Input Node
- Order Execution Node
- Account Balance Node

You can either use a publisher/subscriber model or a service model to connect the nodes.

Additionally, you will want to keep a separate set of node(s) to create an Account Balance Update [action](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Actions/Understanding-ROS2-Actions.html).

### Interfaces

The **Price Update** interface should contain the following:
```
uint id
uint concertId
int delta
```

The **Transaction** interface should contain the following:
```
uint id
uint accountId
uint concertId
uint quantity
bool sell
```

The **Balance** interface should contain the following:

```
uint id
uint accountId
```

Refer [here](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Single-Package-Define-And-Use-Interface.html) about creating custom interfaces.