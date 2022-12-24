#include <iostream>
using namespace std;
main()
{
int number_by_user;
int first_digit;
int for_second;
int second_digit;
int for_third;
int third_digit;
int for_last;
int final;
cout << "Enter any 4-digit number: ";
cin >> number_by_user;
first_digit=number_by_user%10;
for_second=number_by_user/10;
second_digit=for_second%10;
for_third=for_second/10;
third_digit=for_third%10;
for_last=for_third/10;
final=first_digit+second_digit+third_digit+for_last;
cout << "Sum= "<<final;


}