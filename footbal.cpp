#include<iostream>
using namespace std;
float budget_calculater(int,int,string);
float on_transportation(int,int);
main()
{
    int budget,number_of_people;
    string category;
    cout<<"Enter your budget=";
    cin>>budget;
    cout<<"Enter number of People=";
    cin>>number_of_people;
    cout<<"Enter the category of Ticket=";
    cin>>category;later(budget,number_of_people,category);
    cout<<result;
    float result = budget_calculater(budget,)
}
float budget_calculater(int budget,int number_of_people,string category){
float in_budget;
float out_budget;
float out_budget1;
budget = on_transportation(number_of_people,budget);    
if (category == "vip"){
    in_budget =  499.99*number_of_people;
if ( in_budget < budget  ){
    out_budget = budget - in_budget;
    return out_budget;
    }
}
if (category == "normal"){
   in_budget =  249.99*number_of_people;
if ( in_budget > budget  ){
    out_budget1 = in_budget - budget;
    return out_budget;
    }   
}
}
float on_transportation(int number_of_people,int budget)
{
float transportation;
if ( number_of_people >= 1 && number_of_people <=4){
  transportation = budget * 0.75;
  return transportation;
}
if ( number_of_people >= 5 && number_of_people <=11){
  transportation = budget - (budget*0.5);
  return transportation;
}
if ( number_of_people >= 12 && number_of_people <=22){
   transportation = budget - (budget*0.4);
   return transportation;
}
if ( number_of_people >= 23 && number_of_people <=31){
   transportation = budget - (budget*0.25);
   return transportation;
}
}