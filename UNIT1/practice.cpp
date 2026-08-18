//WAP to create airline reservation system which includes the private data as passenger id, name, flight no., destination and ticket booking. Include function as pass, display detail, book ticket, cancel ticket.
#include <iostream>
using namespace std;

class Airline
{
    int passengerId;
    string name;
    string flightNo;
    string destination;
    bool ticketBooked;

public:
    Airline()
    {
        ticketBooked = false;
    }

    void pass()
    {
        cout << "Enter Passenger ID: ";
        cin >> passengerId;
         

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Flight No.: ";
        cin >> flightNo;
        cin.ignore();

        cout << "Enter Destination: ";
        getline(cin, destination);
    }

    void bookTicket()
    {
        if (!ticketBooked)
        {
            ticketBooked = true;
            cout << "Ticket booked successfully!\n";
        }
        else
        {
            cout << "Ticket is already booked.\n";
        }
    }

    void cancelTicket()
    {
        if (ticketBooked)
        {
            ticketBooked = false;
            cout << "Ticket cancelled successfully!\n";
        }
        else
        {
            cout << "No ticket is booked.\n";
        }
    }

    void displayDetail()
    {
        cout << "\nPassenger ID: " << passengerId << endl;
        cout << "Passenger Name: " << name << endl;
        cout << "Flight No.: " << flightNo << endl;
        cout << "Destination: " << destination << endl;
        cout << "Ticket Status: "
             << (ticketBooked ? "Booked" : "Not Booked") << endl;
    }
};

int main()
{
    Airline a;

    a.pass();
    a.bookTicket();
    a.displayDetail();
    a.cancelTicket();
    a.displayDetail();

    return 0;
}