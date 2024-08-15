#include <iostream>

using namespace std;


//Agressive Cows

bool isPossible(int array[],int k, int mid,int n){
      int last = array[0];
      int student = 1;
      int store;
for(int i = 0; i<n;i++){
      if(array[i]-last>=mid){
      student++;
      if(k==student){ return true; }
      last=array[i];
      
      }
     
}


return false;

}
int agressiveCows(int array[],int k,int n){
int s =0;
int max = -1; 
for(int i = 0; i<n;i++){
      if(array[i]>=max){
      max =array[i]; }
}
int e = max;
int mid = s+(e-s)/2;
int ans =-1;
while(s<=e){
      if(isPossible(array,k,mid,n)){
            ans=mid;
            s = mid+1;
      }
      else{
                 e=mid-1;   
                  }
mid = s+(e-s)/2;
}
return ans;
}

int main()
{
int array [] = {1,2,3,4,6,8};
cout<<agressiveCows(array,3,6);

	return 0;
}
