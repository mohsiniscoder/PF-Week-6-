#include<iostream>
using namespace std;
main()
{
int price1;
string brand;
cout<<"Enter Price = ";
cin>>price1;
cout<<"Enter Brand=";
cin>>brand;
if (price1 <=  1500 && brand == "outfitters") //multiple if structure 
{
    cout<<"Buy the Dress";
}
else
{
    cout<<"Do not buy this !!";
}




}