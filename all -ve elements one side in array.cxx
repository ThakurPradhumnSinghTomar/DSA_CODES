#include <iostream>

using namespace std;

int main()
{
 
 int arr[]={-3,4,6,-2,5,-2};
 int n=sizeof(arr)/sizeof(arr[0]);
 

 
 for(int i =0,j=n-1; i<j;){
       
       if(arr[i]>0&arr[j]<0){
             
             swap(arr[i],arr[j]);
             i++;
             j--;
             
       }
       
       else if (arr[i]<0&arr[j]>0){
             i++;
             j--;
             
       }
       
       else if(arr[i]<0&arr[j]<0){
             
             i++;
             
       }
       
       else if( arr[i]>0&arr[j]>0){
             
             j--;
       }
       
 
 
 }
 
 for(int i : arr){
       cout<<i<<"  ";
       
 }
 
 
 
	return 0;
}
