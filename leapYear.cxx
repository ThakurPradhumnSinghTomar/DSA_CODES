//leap year finder

#include<iostream>
using namespace std;
int main(){
      
     //question 2 is to find wether entered number is leap year or not
int year;
cout<<"Enter the year you want to check :"<<endl;
cin>>year;

if((year%4==0&&year%4 !=0 )|| (year%400==0)){ cout<<"Yes, Your Entered Year Is A leap year ";}
else{cout<<"Your entered year is not a leap year";}


      
      
      
}