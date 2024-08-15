
#include<iostream>
using namespace std;
int main(){

int n1;
	cout<<"Enter The First Subject Number You Want To check";      cout<<endl;
	cin>>n1;
	
	
		int n2;
	cout<<"Enter The second Subject Number You Want To check";      cout<<endl;
	cin>>n2;
	
		int n3;
	cout<<"Enter The third Subject Number You Want To check";      cout<<endl;
	cin>>n3;
	
		int n4;
	cout<<"Enter The Fourth subject Number You Want To check";      cout<<endl;
	cin>>n4;
	
	
		int n5;
	cout<<"Enter The fifth subject number You Want To check";      cout<<endl;
	cin>>n5;
	
	if(n1>100||n2>100||n3>100||n4>100||n5>100){
		cout<<"Enter Valid Marks, Not Greater Than 100"<<endl;
		
	}

int per= ((n1+n2+n3+n4+n5)/5);
cout<<"Your Percentage is"<<per<<endl;
if(per>=90){cout<<"A+";}
else if(per>=80){cout<<"Grade A";}
else if(per>=70){cout<<"Grade B";}
else if(per>=60){cout<<"Grade C";}
else if(per>=50){cout<<"Grade D";}
else if(per>=40){cout<<"Grade E";}
else if(per>=30){cout<<"You Failed !!";}
}

