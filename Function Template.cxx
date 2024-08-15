#include <iostream>

using namespace std;

//Function Template

template <typename T> T maxi(T x,T y){
      cout<<((x>y)?x:y);
     return ((x>y)?x:y);
      
      
}

int main()
{
	
	int a = 5;
	int b= 4;
	maxi(a,b);
	
	return 0;
}
