#include <iostream>

using namespace std;

class a {
      public:
      void show(){
            cout<<"Yoo..!! class a"<<endl;
      }
};

class b {
      public:
      void show(){
            cout<<"Yoo..!! class b"<<endl;
      }
};

class c : public a, public b{
      
      public:
      void show(){
            
           a::show();
           b::show(); 
            
      }
};


int main(){
	
	c c1;
	c1.show();
	//c1.a::show();
//	c1.b::show();
	return 0;
}
