#include <iostream>

using namespace std;

void reverseArr(int arr[],int s,int e){
      
      while(s<e){
            
         swap(arr[s],arr[e]);
         s++;
         e--;
            
      }
      
}

void rotateArray(int arr[],int k,int n){
      
      reverseArr(arr,0,n-1);
      reverseArr(arr, 0,k-1);
      reverseArr(arr,k,n-1);
      
      
}

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


    rotateArray (arr,k,n);


	for(int i : arr){
	      
	      cout<<i<<"  ";
	}
	
	
	return 0;
}
