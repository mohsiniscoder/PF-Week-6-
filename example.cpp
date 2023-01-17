#include<iostream>
using namespace std;
int greater_num(int,int,int);
main()
{
  int a,b,c;
  cout<<"Enter Number one ";
  cin>>a;
  cout<<"Enter Number two ";
  cin>>b;
  cout<<"Enter Number Three ";
  cin>>c;
  int result = greater_num(a,b,c);
  cout<<result<<" is the biggest Number";
}
int greater_num(int a,int b,int c){
    int number;
if (a > b && a > c)
{
  number = a;
}
else if (b > a && b > c )
{
  number = b;
}
else {
    number = c;
}
return number;
}