#include <iostream>

using namespace std;

class A {
      public:
      
    void  virtual show(){
      cout<<"base class"<<endl;
    }
      
};
class B : public A {
      public:
      
    void  show(){
      cout<<"derived B class"<<endl;
    }
      
};

class C : public B {
      public:
      
    void  show(){
      cout<<"derived C class"<<endl;
    }
      
};

int main()
{
	A *ptr;
	C c;
	ptr = &c;
	ptr->show();
	
	// calling base class function 😡
	
	
	//to solve this, just made base class show function as virtual function
	
	
	return 0;
}
