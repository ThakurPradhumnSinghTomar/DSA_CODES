#include <iostream>

using namespace std;


//Sorting Of Array
int main()
{

int array[]={3,6,3,2,8,4,9,5};
int n= 7;

for(int i =0; i<n-1;i++){
	
			int min = i;
	for(int j=i+1; j<n;j++){	
	if(array[j]<array[min]){  min = j; }
	
	
	}
		
	swap(array[min],array[i]);	
}
for (int i = 0; i<7;i++){
					
		cout<<array[i]<<"  ";						
											}			
					
	return 0;
}
