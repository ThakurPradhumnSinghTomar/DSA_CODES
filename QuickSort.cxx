#include <iostream>

using namespace std;
int partition(int arr[], int l, int h){
    int  i=l;
    int  j=h;
      int pivot=arr[l];
      while(i<j){
            
            do{
                  
                  i++;
            }while(arr[i]<pivot);
                do{
                  
                  j--;
            }while(arr[j]>pivot);
            if(i<j){swap(arr[i],arr[j]);}
      }
      swap(arr[l],arr[j]);
      return j;
      
            
}

void quickSort(int arr[],int l,int h){
      if(l<h){
      int j = partition(arr,l,h);
      quickSort(arr,l,j);
      quickSort (arr,j+1,h);
      }
      
}

int main()
{
	int arr[]={5,3,7,4,7,3,9,2,6,8,3,7,7,4};
	int n = 14;
	 quickSort(arr,0,n);
	 
	 for(int i=0;i<14;i++){
	cout<<arr[i]<<"  ";
}
	
	return 0;
}
