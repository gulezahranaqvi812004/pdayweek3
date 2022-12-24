#include <iostream> 
using namespace std; 
main()
{
float vegetable_price_per_kg;
float fruit_price_per_kg;
int vegetable_kilogram;
int fruit_kilogram;
float vegetable_cost;
float fruit_cost;
float total_cost;
float cost_in_rupees;
float price_in_rupees;
cout << "Enter vegetable price per kg: ";
cin >>  vegetable_price_per_kg;
cout << "Enter fruit price per kg: ";
cin >> fruit_price_per_kg;
cout << "Enter total kilo-grams of vegetables: ";
cin >> vegetable_kilogram;
cout << "Enter total kilo-grams of fruits: ";
cin >> fruit_kilogram;
vegetable_cost=vegetable_price_per_kg*vegetable_kilogram;
fruit_cost=fruit_price_per_kg*fruit_kilogram;
total_cost=vegetable_cost+fruit_cost;
price_in_rupees=total_cost/1.94;
cout << "Total earning of fruits and vegetables in rupees: "<<price_in_rupees;



}