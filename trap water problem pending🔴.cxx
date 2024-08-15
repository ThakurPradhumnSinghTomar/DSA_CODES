#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  private:
    int prev = 0;
    int sum = 0;
    int temp;
    
    

  public:
    int trap(vector<int> &height, int s)
    {
        cout<<"Starting Sum Is : "<<sum<<endl;
        
        for (int i = 0; i < s - 1; i++)
        {
            cout<<"Currently Prev Is : "<<prev<<endl;
            cout<<"Currently Sum Is : "<<sum<<"\n"<<endl;
            cout<<" Current Iteration Is : "<<i<<endl;
            temp = height[i];
            cout<<"temp for this Iteration is :"<<temp<<endl;
            if (prev == 0)
            {
                if (height[i] == 0)
                {
                    prev = 0;
                }
                else
                {
                    prev = -1;
                }
            }

             if(prev !=0)
            {
                
                if (temp > height[i + 1])
                {
                    
                    if (prev > height[i + 1])
                    {
                        sum = sum + (prev - height[i + 1]);
                         cout<<"2New Sum is : "<<sum<<endl;
                    }
                   else if (prev <= height[i + 1])
                    {
                   
                        sum = sum + (temp - height[i + 1]);
                         cout<<"1New Sum is : "<<sum<<endl;
                    }
                }
                if (temp < height[i + 1] && prev > height[i + 1])
                {
                    sum = sum + (prev - height[i + 1]);
                    cout<<"3New Sum is : "<<sum<<endl;
                }
                  int o;
                if (height[i] > prev)
                {
                    prev = height [i];
                    cout<<"New Prev is : "<<prev<<endl;
                    int max=0;
                    int k;
                  for(k =i;k<s; k++){
                   o=0;
                    
                    if(max<height [k]){
                          
                          max=height [k];
                    }
                    
                    if(prev>height [k]){
                          o=0;
                    }
                    else{
                         o=1; 
                         break; 
                    }
                    
                    
                    
                  }
                  
                  if(o==0){
                    prev=max;
                    cout<<"1New Prev Is : "<<prev<<"\n"<<endl;
                  }
                  else{
                    prev=height [i];
                    cout<<"2New Prev Is : "<<prev<<"\n"<<endl;
                  }
                    
                    
                }
            }
        }
    
  cout<<"Final Sum Is : "<<sum<<endl;  
    }
};

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int n = 12;
    
    Solution s;
    s.trap(height,n);

    return 0;
}
