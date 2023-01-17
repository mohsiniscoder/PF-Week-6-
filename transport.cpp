#include<iostream>
using namespace std;
float cheapest_price(int ,string );
main()
{
int km;
string time_of_day;
cout<<"Enter The Kilometers you want to travel=";
cin>>km;
cout<<"What Time of the Day it is. i.e day/night =";
cin>>time_of_day;
float result = cheapest_price(km,time_of_day);
cout<<result<<" Euro";
}
    float cheapest_price(int km ,string time_of_day ){
    float price;
if ( km >= 20 && km <  100 ) 
{
  price = 0.09*km;
  return price;
}
else if( km >= 100 )
{
  price = 0.06*km;
  return price;
}
else if ( time_of_day =="day" && km <20 )
{
  price = (0.79*km)+0.70;
  return price;
}
else if ( time_of_day =="night" && km <20 )
{
  price = (0.90*km)+0.70;
  return price;
}
}