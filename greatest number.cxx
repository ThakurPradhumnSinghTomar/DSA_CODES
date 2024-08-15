#include<iostream>
using namespace std;
int main(){
      int n1,n2,n3;
      cout<<"Enter your all the numbers:";
      cin>>n1;
      cin>>n2;
      cin>>n3;
      if(n1>n2&& n1>n3){
		cout<<"Largest Number is "<<n1<<endl;
	}
	if(n2>n1&& n2>n3){
		cout<<"Largest Number is "<<n2<<endl;
	}
	if(n3>n2&& n3>n1){
		cout<<"Largest Number is "<<n3<<endl;
	}
	if(n1==n2||n2==n3||n3==n1){cout<<"Don't enter equal numbers";}
	
}
