#include <iostream>
using namespace std;
main()
{
float initial_velocity;
float final_velocity;
float acceleration;
int  time;
float result;
cout << "Enter Initial Velocity: ";
cin >> initial_velocity;
cout << "Enter acceleration: ";
cin>> acceleration;
cout << "Enter Time: ";
cin >> time;
result=acceleration*time;
final_velocity=result+initial_velocity;
cout << "Final Velocity= "<<final_velocity;


}