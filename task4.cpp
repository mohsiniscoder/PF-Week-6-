#include<iostream>
using namespace std;
string check_speed(float);
main()
{
float speed;
cout<<"Enter Speed = ";
cin>>speed;
string result = check_speed(speed);
cout<<result; 
}
string check_speed(float speed){
    string for_result= "Invalid Value";
if (speed <=10)
{
  for_result = "slow";
  return for_result;
}
else if(speed > 10 && speed <=50)
{
  for_result = "average";
    return for_result;
}
else if(speed > 50 && speed <=150)
{
  for_result = "fast";
    return for_result;
}
else if(speed > 150 && speed <=1000)
{
  for_result = "Very Fast ";
    return for_result;
}
return for_result;
}