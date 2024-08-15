#include<iostream>
using namespace std;

int main(){
      
      int arr[]={5,4,7,9,2,3,1,2,1,6};
      
      int n = sizeof(arr)/sizeof(arr[0]);
      
            for(int i : arr){
            
            cout<<i<<" ";
            
            
      }
       
       cout<<" "<<endl;
      
      for(int i=0;i<n/2;i++){
            
            swap(arr[i],arr[n-1-i]);
            
      }
      
      cout<<"Reverse of Above Array"<<endl;
      for(int i : arr){
            
            cout<<i<<" ";
            
            
      }
      
      
      
      return 0;
      
}