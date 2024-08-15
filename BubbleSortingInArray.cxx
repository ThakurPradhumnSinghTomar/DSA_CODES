#include <iostream>

using namespace std;

int main()
{
	//bubble sorting of array

int array[]={5,3,7,4,7,3,9,2,6,8,3,7,7,4};

for(int i=0;i<13;i++){
	bool swp=false;
	for(int j=0; j<13-i;j++){
	      if(array[j]>array[j+1]){
	            swap(array[j],array[j+1]);
	            swp =true;
	      }
	      
	}
if(swp==false){ break;}	
}
for(int i=0;i<14;i++){
	cout<<array[i]<<"  ";
}
	return 0;
}
