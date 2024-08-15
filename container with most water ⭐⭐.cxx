#include <iostream>
using namespace std;
int main()
{
    int array[]={ 1,1};
  //  int array[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    
    int max = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
          int h = min(array[i],array[j]);
       int    width=j-i;
        int  temp=h*width;

            if (temp > max)
            {
                max = temp;
                // cout<<temp<<endl;
            }
        }
    }

    cout << max << endl;
      //cout <<temp<< endl;

    return 0;
}