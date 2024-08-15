#include <iostream>

using namespace std;

//return the pair of two numbers from an array which give sum we want






int main()
{
int Array[]={0,4,6,2,8,1,5,3,8, 3, 7, 7, 8, 9, 11, 12, 15,8};
int target =12;
for(int i =0;i<17;i++){

for(int j=i;j<17;j++){
      if(i==j){
            continue;
      }
      
      if(Array [i]+Array[j]==target){
            cout<<Array[i]<<"   "<<Array[j]<<endl;
            
      }
      
}

}
	return 0;
}
