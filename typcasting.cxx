#include <iostream>
#include<typeinfo>

using namespace std;

int main()
{
	int x = 500;
	double y = 900.06;
	float z = 7.66;
	
	//explicit typcasting
      
      float x1 = float(y);
      cout<<x1<<endl;
      cout<<typeid(x1).name()<<endl;
      
      int x2 = int(z);
      cout<<x2<<endl;
      cout<<typeid(x2).name();
      
      //implicit typcasting





	return 0;
}
