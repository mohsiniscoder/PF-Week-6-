#include<iostream>
using namespace std;
float bill(float amount,string day,string month);
main(){
    float amount;
    string day,month;
cout<<"Enter the amount=";
cin>>amount;
cout<<"What Day is Today?.";
cin>>day;
cout<<"What is the month=";
cin>>month;
float result = bill(amount,day,month);
cout<<"Bill is = "<<result;
}
float bill(float amount,string day,string month){
float discount= amount;
if (day == "sunday" && (month == "october" || month == "march" || month =="august"  )){
discount = amount-(amount*0.1);
return discount;
} 
else if (day == "monday" && (month == "november" || month == "december"))
{
discount = amount-(amount*0.05);
return discount;
}
return discount;
}