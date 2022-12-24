#include <iostream>
using namespace std;
main()
{
string name;
float subject_1;
float subject_2;
float subject_3;
float subject_4;
float subject_5;
float total_marks;
float obtained_marks;
float percentage;
cout << "Enter Your Name: ";
cin >> name;
cout << "Enter your subject 01 marks: ";
cin >> subject_1; 
cout << "Enter your subject 02 marks: ";
cin >> subject_2; 
cout << "Enter your subject 03 marks: ";
cin >> subject_3; 
cout << "Enter your subject 04 marks: ";
cin >> subject_4; 
cout << "Enter your subject 05 marks: ";
cin >> subject_5;
total_marks=500; 
obtained_marks=subject_1+subject_2+subject_3+subject_4+subject_5;
percentage=(obtained_marks/total_marks)*100;
cout << "Your percentage:  "<<percentage;


}