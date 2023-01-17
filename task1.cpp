#include<iostream>
using namespace std;
char calculate_grade(int);
main()
{
int marks;
cout<<"Enter Marks=";
cin>>marks;
char final_grade = calculate_grade(marks);
cout<<"Your Grade is "<<final_grade;
}
char calculate_grade(int marks){
char grade;
if (marks > 85 && marks <=100 ){
grade = 'A';
}
else if( marks >= 81 && marks  <= 85)
{
    grade = 'B';
}
else if( marks >= 71 && marks  <= 80)
{
    grade = 'C';
}
else if( marks >= 61 && marks  <= 70)
{
    grade = 'D';
}
else if( marks >= 50 && marks  <= 60)
{
    grade = 'E';
}
else if (marks < 50) {
    grade = 'F';
}
else {
    cout<<"Invalid Value !!!!!"
}
return grade;
}