#include<iostream>
#include<string>
using namespace std;
class message
{
private:
	string receiver;
	string sender;
	string msg;
	int c_msg;
	int d_msg;
	int pin_msg;
public:
	message()
	{
		receiver = "Unknown";
		sender = "Unknown";
		msg = "Unknown";
		c_msg = 0;
		d_msg = 0;
		pin_msg = 0;
	}
	void createmessage()
	{
		string choice;
		cin.ignore();
		cout << "Enter Sender's name:";
		getline(cin, sender);
		cout << "Enter Reciever's name:";
		getline(cin, receiver);
		cout << "Enter the message:";
		getline(cin, msg);
		c_msg++;
		priority(msg);
		deletemessage(msg);
		cout << "Want to send the same person more messages right now? (Yes/No): ";
		cin >> choice;
		while (choice != "YES" && choice != "Yes" && choice != "yes" &&
			choice != "Y" && choice != "y" &&
			choice != "NO" && choice != "No" && choice != "no" &&
			choice != "N" && choice != "n")
		{
			cout << "Wrong Input! Enter again:";
			cin >> choice;
		}
		if (choice == "YES" || choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
		{
			while (msg != "Exit" && msg != "EXIT")
			{
				cout << "To stop sending message. Enter Exit or EXIT." << endl;
				cin >> msg;
				if (msg == "EXIT" || msg== "Exit")
				{
					break;
				}
				priority(msg);
				deletemessage(msg);
				c_msg++;
			}
		}
	}
	void priority(string message)
	{
		string choice;
		cout << "Do yo want to pin this message? (Yes/No): ";
		cin >> choice;
		while (choice != "YES" && choice != "Yes" && choice != "yes" &&
			choice != "Y" && choice != "y" &&
			choice != "NO" && choice != "No" && choice != "no" &&
			choice != "N" && choice != "n")
		{
			cout << "Wrong Input! Enter again:";
			cin >> choice;
		}
		if (choice == "YES" || choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
		{
			cout << "The message \" " << message << "\" is pinned" << endl;
			pin_msg++;
		}
	}
	void deletemessage(string message)
	{
		string choice;
		cout << "Do yo want to delete this message? (Yes/No): ";
		cin >> choice;
		while (choice != "YES" && choice != "Yes" && choice != "yes" &&
			choice != "Y" && choice != "y" &&
			choice != "NO" && choice != "No" && choice != "no" &&
			choice != "N" && choice != "n")
		{
			cout << "Wrong Input! Enter again:";
			cin >> choice;
		}
		if (choice == "YES" || choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
		{
			cout << "The message \"" << message << "\" is deleted" << endl;
			d_msg++;
		}
	}
	void display()
	{
		cout << "--------MESSAGE DETAILS-------" << endl;
		cout << "Sender Name:" << sender << endl;
		cout << "Receiver Name:" << receiver << endl;
		cout << "Number of messages send:" << c_msg << endl;
		cout << "Number of messages pinned:" << pin_msg<<endl;
		cout << "Number of messages deleted:" << d_msg<<endl;
		cout << "-------------------------------" << endl;
	}

};
int main()
{
	int n;
	cout << "How many people you wanna send message to? ";
	cin >> n;
	message *obj= new message[n];
	for (int i = 0; i < n; i++)
	{
		obj[i].createmessage();
		obj[i].display();
	}
}