#include <iostream>

using namespace std;


int productOfDigits(int n){
      
      if(n==0){
            return 1;
      }
      
      return productOfDigits (n/10)*(n%10);
      
      
      
      
}

int main()
{
	int n;
	cin>>n;
	cout<<productOfDigits (n);
	
	return 0;
}
