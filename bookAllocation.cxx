//Lecture15 

#include<iostream>
using namespace std;

//QUESTION1 IS TO SOLVE BOOK ALLOCATION PROBLEM






bool pageAllocation(int array [], int s,int mid,int n){

int sum = 0;
int student=1;
for(int i =0; i<n;i++){
if(sum+array[i]<=mid){
sum =sum+array[i];
}
else{ student++; 
if(student>s||array[i]>mid){
 return false;
}
else{ sum=array[i];}
}

}
return true;
}

 int bookAllocation(int array[],int s,int n){
 int sum=0;
 for(int i=0; i<n;i++){
  sum=sum+array[i];
 }
 cout<<"Total pages are  "<<sum<<endl ;
 int start =0; int end = sum; int mid = (start+end)/2;int ans=-1;
 while(start<=end){
 if(pageAllocation(array,s,mid,n)){
  ans=mid;
  end = mid-1;
   }
   else{ start = mid+1; }
 
 mid =( start+end)/2;
 }
 
cout<<"Ans is :- "<<ans;
return ans;
}

int main(){
		int array1[]={10,20,30,40,50,60,70};
		int s =2;
		int n=7;
		//if you are updating the array then kindly update int n as well to ARRAY size
		
		
		bookAllocation(array1,s,n);
		
		
		return 0;
	
}