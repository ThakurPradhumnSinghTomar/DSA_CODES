#include <iostream>

using namespace std;

class Try
{
  private:
    int real, img;

  public:
    Try(int r, int i)
    {
        real = r;
        img = i;
    }

    Try()
    {
        real = 0;
        img = 0;
    }

    void print()
    {
        cout << real << "+" << img << "i" << endl;
    }
    
    Try operator+ (Try t2){
          
          Try temp;
          temp.real=real+t2.real;
          temp.img=img+t2.img;
          
          return temp;
          
    }
    
    
};

int main()
{
      
      Try t1(5,6);
      Try t2(8,6);
      Try t3(100,50);
      Try t4;
      
      t4=t1+t2+t3;
      
      t4.print();
      
      
      
}
