#include <iostream>
using namespace std;
main()
{
string movie_name;
int adult_ticket_price;
int child_ticket_price;
int sold_adult_tickets;
int sold_child_tickets;
float percentage;
float donation;
int total_adult_ticket_price;
int total_child_ticket_price;
int total_amount;
int remaining_amount;
cout << "Enter Movie name: ";
cin >> movie_name;
cout << "Enter Adult Ticket Price: ";
cin >>adult_ticket_price;
cout << "Enter Child Ticket Price: ";
cin >> child_ticket_price;
cout << "Enter Number of Child Tickets sold: ";
cin >>sold_child_tickets;
cout << "Enter Number of Adult Tickets sold: ";
cin >> sold_adult_tickets;
cout << "Enter percentge to donate: ";
cin >> percentage;
total_adult_ticket_price= adult_ticket_price*sold_adult_tickets;
total_child_ticket_price=child_ticket_price*sold_child_tickets;
total_amount=total_adult_ticket_price+total_child_ticket_price;
cout << "Total Amount Generated: "<<total_amount<<endl;
donation=total_amount/percentage;
remaining_amount=total_amount-donation;
cout << "Amount after donation: "<<remaining_amount;





}