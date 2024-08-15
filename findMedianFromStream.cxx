//#include <iostream>

//using namespace std;

#include <queue>
class MedianFinder
{
  public:
    int singnum(int a, int b)
    {
        if (a == b)
        {
            return 0;
        }
        else if (a > b)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    double median = -1;

    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    MedianFinder()
    {
    }
    void addNum(int num)
    {
        switch (singnum(minheap.size(), maxheap.size()))
        {
              //both size are n
        case 0:
            if (num > median)
            {
                minheap.push(num);
                median = minheap.top();
                break;
            }
            else
            {
               maxheap.push(num);
               median = maxheap.top();
               break;
                  
            }
            
              // left n-1 right n
            case 1 :
            
             if (num > median)
            {
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(num);
                 double sum = maxheap.top()+          minheap.top();
               
               median = sum/2.0;
               break;
            
            }
            else
            {
               maxheap.push(num);
               double sum = maxheap.top()+minheap.top();
               
               median = sum/2.0;
               break;
                  
            }
            
            //left n right n-1
            case -1 : 
            
             if (num > median)
            {    
                 minheap.push(num);
               double sum = maxheap.top()+          minheap.top();
               
               median = sum/2.0;
            
            break;
                
            }
            else
            {
                 minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(num);
                double sum = maxheap.top()+          minheap.top();
               
               median = sum/2.0;
               break;
            
            }
            
        }
    }

    double findMedian()
    {
          return median;
    }
};

//int main()
//{
//    return 0;
//}
