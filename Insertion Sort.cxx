#include <iostream>

using namespace std;

void insertionSort(int arr[],int n){
      
      //pass
      for(int i=1;i<=n-1;i++){
            
            //each pass
            int j,key;
            j=i-1;
            key=arr[i];
            while(i>0&&key>arr[j]){
           
           arr[j+1]=arr[j];
           j--;
           
            }
            arr[j+1]=key;
            
            
      }
      
      
}

int main()
{
     int arr[] = {5,3,7,4,7,3,9,2,6,8,3,7,7,4};
     for(int i=0;i<14;i++){
	cout<<arr[i]<<"  ";
}
cout<<endl;
     int n=14;
     insertionSort(arr,n);
     
       for(int i=0;i<14;i++){
	cout<<arr[i]<<"  ";
}
	return 0;
}
