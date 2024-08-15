#include <iostream>

using namespace std;

class human{
      public :
      void print1(){
          cout<<"Base class"  <<endl;
      }
      
};

class youtuber : public virtual human {
      public:
      void print2(){
          
            cout <<"youtuber class"<<endl;
      }
      
};

class eng : public virtual human {
      public:
      void print3(){
          
            cout <<"engineer class"<<endl;
      }
      
};

class rupesh : public youtuber, public eng{
      public:
      void print4(){
      cout<<"rupesh class"<<endl;
      }
};



int main()
{
	
	rupesh r;
	r. print1();
	
	return 0;
}
