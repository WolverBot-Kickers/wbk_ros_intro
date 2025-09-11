# Project 1 
### Table of Contents
 - [Background](#background)
 - [Desired Functionality](#desired-functionality)
 - [Architecture](#architecture)
 - [Implementation Tips](#implementation-tips)

## Background

### Intended usage

This is an optional, introductory project as an introduction to ROS2. If you already have knowledge on implementing ROS2 nodes and interfaces, feel free to skip this and dive right into other projects!

### Problem Statement

You are a software engineer at the company Concert Ticket Sale Platform Enterprises Incorporated Ltd & Co. 

You are tasked with developing a synchronous application that allows music artists to host ticket sales for their concerts, while allowing customers to buy tickets.

Given the following intended results, create the application using ROS2.

### Prerequisite

It's recommended for Wolverbot members to use the team docker container, which you can install [here](https://github.com/WolverBot-Kickers/ros2_base)).

Alternatively, you can use your own installation of [ROS2 Jazzy](https://docs.ros.org/en/jazzy/Installation.html).

It is recommended that you complete this project using C++, as this is the most common language which will be used in the team. However, if you are not comfortable with it or know that Python will be more useful to you, use Python instead.

### Resources

The project will involve multiple ROS2 concepts, such as nodes, topics, services, etc. If you have any questions, [Official Documentation](https://docs.ros.org/en/jazzy/Tutorials/Beginner-CLI-Tools.html) is a great resource, or you can ask the leads for more info!

## Desired Functionality

Your application should have a central **'Server'**, which makes the existing concert information public to customers, handles requests from customers to buy tickets, and handles requests from musicians to hold a ticket sale for an upcoming concert, giving them updates on the sale as it occurs.

The **Customer** 'client' should be able to receive concert information from the server and display it to the customer, and also allow an interface for the customer to submit a purchase request for a concert ticket.

Similarly, the **Musician** 'client' should be able to provide concert information and desired ticket information to call on the server to host a ticket sale. When the ticket sale completes, they should be informed of the final sale revenue and statistics. Additionally, they should be able to receive updates on the ticket sale when it is ongoing.

## Architecture

- [Nodes](#nodes)
- [Interfaces](#interfaces)

### Nodes

It is highly recommended that you use the following configuration of nodes:

- Server node
- Customer node
- Musician node

### Interfaces

This project requires you to create custom interfaces for Topics, Services, and Actions. Refer [here](https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Single-Package-Define-And-Use-Interface.html) about creating custom interfaces.

The **ConcertInfo** Topic will be published by the Server, with Customer as a subscriber. It should contain the following:
```
uint concert_count
string[] concert_names
string[] musn_names
string[] concert_dates
uint[] prices
uint[] remng_durations
```
In this interface, the information for a single concert will correspond to the same index in every array/vector. For instance, the information for some concert named `Concert0` would be at `concert_names[0], musn_names[0], concert_dates[0], etc`.

The **BuyTicket** Service interface will be called by Customer to the Server in order to buy a ticket. It should contain the following:
```
uint id
uint customer_id
uint concert_id
uint quantity
uint price
---
bool success
string message
```

The **TicketSale** Action interface will be called by Musician as a client to a Server in order to begin a ticket sale. It should contain the following:
```
uint id
uint musn_id
string musn_name
string concert_name
string concert_date
uint quantity
uint price
uint duration
---
uint sale_count
uint revenue
---
uint sale_count
uint revenue
uint remng_duration
```
If you haven't learned actions yet, please implement TicketSale as 2 services: one for Musician to request a ticket sale from Server, and one from Server to Musician to signal the end of a ticket sale.


## Implementation Tips

### User/Testing interface
You can use the standard input/output of C++ or Python to create a rudimentary user interface, such as submitting a BuyTicket request from Client with a keypress, or displaying the received ConcertInfo at some interval. Alternatives are to use ROS2 services or a GUI library, but implementing those is a lot of extra work, and not recommended.

### Approach
In my opinion, this is the order of the easiest to hardest parts of this project:
 - Skeleton/dummy nodes
 - Implement ConcertInfo topic and relevant functionality in Server and Customer (use dummy concert data)
 - Implement BuyTicket service and relevant functionality in Server and Customer
 - Implement TicketSale as services and relevant functionality in Server and Musician
 - Implement TicketSale as an action and relevant functionality in Server and Musician

Please prioritize an order of learning/implementation that allows you to make the most out of this project! After all, this is an onboarding project to help you learn. Good luck!
