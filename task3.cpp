#include<iostream>
using namespace std;
string check_title(int,char);
main()
{
int age;
char gender;
cout<<"Enter Age=";
cin>>age;
cout<<"Enter Gender=";
cin>>gender;
string result = check_title(age,gender);
cout<<result;

}
string check_title(int age,char gender)
{
string title = "Invalid_Input";
if (gender == 'm' && age >= 16){
    title = "Mr";
    return title;
}
else if(gender == 'm' && age < 16)
{
    title = "Master";
    return title;
}
else if (gender == 'f' && age >= 16){
    title = "Ms";
    return title;
}
else if ( gender == 'f' && age < 16){
title = "Miss";
return title;
}
return title;
}