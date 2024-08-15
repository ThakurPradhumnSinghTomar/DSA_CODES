#include <iostream>

using namespace std;

int main()
{
	
	int arr[]={3,5,2,1,6,8,5,4,6,9,4,5,8,0,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	for(int i : arr){
	      
	      cout<<i<<"  ";
	}
	cout<<" "<<endl;
	
	int k;
	cout<<"Enter the value of positions of array to be rotated : ";
	cin>>k;
	
if(k>n){
	k=k%n;
}
	for(int j=0;j<k;j++){
	
	for(int i=n-1;i>0;i--){
	      
	     swap(arr[i],arr[i-1]);
	    
	     
	      
	}
	}
	
	
	for(int i : arr){
	      
	      cout<<i<<"  ";
	}
	
	
	return 0;
}
