#include <iostream>

using namespace std;

int main()
{
	int* ptr;
	int n;
	cout<<"Enter the maximum value of index Of array you want to create : "<<endl;
	cin>>n;
	
	ptr = (int *) calloc(n*sizeof(int),n);
	
	for(int i=0;i<n;i++){
	      
	      cout<<"Value at index "<<i<<" "<<ptr[i]<<endl;
	          
	}
	
		for(int i=0;i<n;i++){
	      
	      cout<<"Enter Value at index "<<i<<" "<<endl;
	      cin>>ptr[i];
	          
	}
	
	
		for(int i=0;i<n;i++){
	      
	      cout<<"Value at index "<<i<<" "<<ptr[i]<<endl;
	          
	}
	
	
	return 0;
}
