#include <iostream>
using namespace std;
main()
{
int bag_size;
float cost_of_bag;
float area;
float fertilizer_per_pound;
float fertilizer_per_area;
cout << "Enter Bag size in pounds: ";
cin >> bag_size;
cout << "Enter cost of the bag: ";
cin >> cost_of_bag;
cout << "Enter area covered by each bag in square feet: ";
cin >> area;
fertilizer_per_pound=cost_of_bag/bag_size;
cout << "Cost of fertilizer per pound: "<<fertilizer_per_pound<<endl;
fertilizer_per_area=cost_of_bag/area;
cout << "Cost of fertilizing the area per square feet: "<<fertilizer_per_area;



}