#include <iostream>

using namespace std;


class Time{
      public:
      int hh;
      int mm;
      int ss;
      
      //constructor
      Time(int a, int b, int c){
            
            hh=a;
            mm=b;
            ss=c;
           
            
      }
       Time(){
            
            hh=0;
            mm=0;
            ss=0;
           
            
      }
      
      //read function
      void read (){
            
            cout<<"time is "<<hh<<":"<<mm<<":"<<ss<<endl;
      }
      
      //Copy Constructor 
      Time (Time t1,Time t2, Time& t3){
            t3.ss=t1.ss+t2.ss;
            t3.mm=t1.mm+t2.mm;
            t3.hh=t1.hh+t2.hh;
            if(t3.ss>=60){
                  t3.mm++;
                  t3.ss=t3.ss%60;
            }
              if(t3.mm>=60){
                  t3.hh++;
                  t3.mm=t3.mm%60;
            }
             if(t3.hh>=24){
                  t3.hh=t3.hh%24;
                 
            }
             
          
      }
      
      
      
      
};

int main()
{
	Time t1(24,30,59);
	Time t2(6,40,01);
	Time t3(t1,t2,t3);
	//t3.add(t1,t2,t3);
	t3.read();
	
	
	return 0;
}
