#include <iostream>

using namespace std;


int sumOfdigits(int n,int sum){
      
     
      //base case
 if(n==0){
      
      
      return sum;
      
 } 
       sum=sum+(n%10);
 n=n/10;
      return sumOfdigits (n,sum);
      
      


 
}




int main()
{
	 int sum=0;
	int n;
	cin>>n;
	cout<<sumOfdigits (n,sum);
	
	
	return 0;
}
