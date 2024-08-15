#include <iostream>

using namespace std;

int main()
{
	int a[3]={2,5,6};
	int c,d;
	cout<<" Enter Array Index : "<<endl;
	cin>>c;
	try{
	      
	      if(c>3)
	      {
	            
	           throw c; 
	            
	            
	      }
	d=a[c];
	
	
	}
	catch (int e){
	      cout<<"Exception : Enter Index Less than 4"<<endl;
	      
	}
	cout<<"Value at Given index "<<c<<" is : "<<d<<endl;
	
	

	
	return 0;
}
