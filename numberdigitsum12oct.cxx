#include <iostream>

using namespace std;

int main()
{ int n1;
	cout<<"Enter your desired number"<<endl;
	cin>>n1;
int digit=0;
int ans;
ans = n1;
	while(ans>0){
		
	
	digit = digit+(ans%10);
	ans = ans/10;
			
		
		
		
	}
		
		cout<<digit;
	return 0;
}
