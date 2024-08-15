#include <iostream>

using namespace std;

class recursion
{
  public:
    //question 1 is to find square root using recursion

    int sqrRoot(int n, int arr[], int s, int e, int m)
    {
        //base case

        if (!(s < e))
        {
            if ((arr[m] * arr[m]) == n)
            {
                return arr[m];
            }

            else
            {
                return -1;
            }
        }

        //recursive relation

        if ((arr[m] * arr[m]) == n)
        {
            return arr[m];
        }
        else
        {
            if ((arr[m] * arr[m]) < n)
            {
                s = m + 1;
                m = (s + e) / 2;

                return sqrRoot(n, arr, s, e, m);
            }

            else if ((arr[m] * arr[m]) > n)
            {
                e = m - 1;
                m = (s + e) / 2;

                return sqrRoot(n, arr, s, e, m);
            }
        }
    }
    
    
    int mntnElmnt(int arr[],int s,int e,int m){
        
        
        //base case 
        if(!(s<e)){
            
            
          return -1; 
            
            
            
        }
        
        //recursive relation
        
        if(arr[m]>arr[m+1]&&arr[m]>arr[m-1]){
            
            
            return arr[m];
            
            
            
        }
        else if(arr[m]<arr[m+1]){
            
            s=m+1;
         m=(e+s)/2;
         return mntnElmnt( arr,s,e, m);
            
            
        }
        
        else if(arr[m]>arr[m+1]){
            
            e=m-1;
         m=(e+s)/2;
         return mntnElmnt( arr,s,e, m);
            
            
        }
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
};
    int main()
    {
        int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        
        int s=0;
        int e=19;
        int m=(e+s)/2;
        
        int n;
        cin>>n;
        
        
        
         recursion obj; // Create an object of the recursion class
    int result = obj.sqrRoot(n, arr, s, e, m);

    if (result != -1)
    {
        cout << "Square root found: " << result << endl;
    }
    else
    {
        cout << "Square root not found in the array." << endl;
    }
        
        
        
        int arr2[]={1,3,5,7,9,6,4,2,0};
        int s1=0;
        int e1=8;
        int m1=(s1+e1)/2;
        
        int result1 = obj.mntnElmnt(arr2,s1, e1, m1);
        
       cout<<"mountain element in given second array : "<<result1;
        
        
        return 0;
    }
