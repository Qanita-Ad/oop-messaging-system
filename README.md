# oop-messaging-system
“This project simulates a basic messaging system using C++ classes. Users can send messages to multiple people, choose to pin or delete messages, and view detailed message statistics. It demonstrates key OOP concepts like encapsulation, constructors, and dynamic memory management.”
**Message Management System in C++**


**Overview** 

This C++ program simulates a simple message management system. It allows users to send messages to multiple recipients, with options to pin or delete messages. The program keeps track of the number of messages sent, pinned, and deleted for each recipient.

The system is designed using a message class that encapsulates all message-related functionalities, including creation, pinning, deletion, and displaying message details.

**Features**

Create Messages: Send messages to multiple recipients.

Pin Messages: Mark important messages as pinned.

Delete Messages: Option to delete any message after sending.

Message Tracking: Keep count of total messages sent, pinned, and deleted per recipient.

Interactive Interface: User-friendly prompts guide the user through sending, pinning, and deleting messages.

**Class: message**
Private Members:

string receiver – Name of the recipient.

string sender – Name of the sender.

string msg – Message content.

int c_msg – Counter for messages sent.

int d_msg – Counter for messages deleted.

int pin_msg – Counter for messages pinned.

Public Methods:

message() – Default constructor that initializes member variables.

createmessage() – Handles message creation for a single recipient. Allows sending multiple messages to the same person.

priority(string message) – Option to pin a message.

deletemessage(string message) – Option to delete a message.

display() – Shows message statistics for the recipient (number of messages sent, pinned, and deleted).

**How to Use**

Compile the program using a C++ compiler:

g++ -o MessageSystem MessageSystem.cpp

**Run the program:**

./MessageSystem

Enter the number of recipients you want to send messages to.

For each recipient:

Enter the sender and receiver names.

Type your message.

Choose whether to pin or delete each message.

Optionally send more messages to the same recipient by typing messages until you enter Exit.

After finishing, the program displays message statistics for each recipient.

Example Interaction
How many people you wanna send message to? 1
Enter Sender's name: Alice
Enter Receiver's name: Bob
Enter the message: Hello Bob!
Do you want to pin this message? (Yes/No): Yes
Do you want to delete this message? (Yes/No): No
Want to send the same person more messages right now? (Yes/No): No
--------MESSAGE DETAILS-------
Sender Name: Alice
Receiver Name: Bob
Number of messages send: 1
Number of messages pinned: 1
Number of messages deleted: 0
-------------------------------
**Notes**

Input for Yes/No is case-insensitive (Yes, yes, Y, y are all valid).

To stop sending additional messages to the same recipient, type Exit.


