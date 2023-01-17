#include<iostream>
using namespace std;
float income_of_cinema (string,int,int);
main()
{
    string screening;
    int rows,columns;
    cout<<"Enter Number of Rows = ";
    cin>>rows;
    cout<<"Enter Number of columns = ";
    cin>>columns;
    cout<<"Enter THe Type of Screen = ";
    cin>>screening;
    float result = income_of_cinema(screening,rows,columns);
    cout<<"Net Income ="<<result;
}
    float income_of_cinema (string screening,int rows,int columns){
    float net_income;
if ( screening == "premiere")
{
    net_income = rows*columns*12;
    return net_income;
}
else if ( screening == "normal")
{
    net_income = rows*columns*7.5;
    return net_income;
}
else if (screening == "discount")
{
    net_income = rows*columns*5;
    return net_income;
}
    return 0;

}