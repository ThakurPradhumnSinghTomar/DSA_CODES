#include<iostream>
using namespace std;
int main(){
      int age;
      cout<<"Enter Your Age :"<<endl;
      cin>>age;

if(age>=18){
		cout<<"Congratulations !!, You Can Vote Now..";}
		else{
			cout<<"Sorry, You are not eligible for voting, wait for "<<18-age<<" years";
		}
}