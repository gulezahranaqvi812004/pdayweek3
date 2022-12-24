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
int for_fourth;
int fourth_digit;
int for_fifth;
int fifth_digit;
int for_sixth;
int sixth_digit;
int for_seventh;
int seventh_digit;
int for_eight;
int eight_digit;
int final;
cout << "Enter any 8-digit number: ";
cin >> number_by_user;
first_digit=number_by_user%10;
for_second=number_by_user/10;
second_digit=for_second%10;
for_third=for_second/10;
third_digit=for_third%10;
for_fourth=for_third/10;
fourth_digit=for_fourth%10;
for_fifth=for_fourth/10;
fifth_digit=for_fifth%10;
for_sixth=for_fifth/10;
sixth_digit=for_sixth%10;
for_seventh=for_sixth/10;
seventh_digit=for_seventh%10;
for_eight=for_seventh/10;
eight_digit=for_eight%10;
final=first_digit+second_digit+third_digit+fourth_digit+fifth_digit+sixth_digit+seventh_digit+eight_digit;
cout << "Sum= "<<final;


}