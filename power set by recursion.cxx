#include <iostream>
#include<vector>


using namespace std;

//power sort question

void solve(vector<int> arr, vector<int> output, vector<vector<int>> &ans, int index )
{
    //base case
    if (index > 2)
    {
        ans.push_back(output);
        return ;
    }
  
    //exclude
    
    solve(arr, output,ans,index+1);
    
    //include
   int elmnt = arr[index];
   output.push_back(elmnt);
   solve(arr, output,ans,index+1);
    
    return ;
}

int main()
{
    //input array
    vector <int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(arr, output,ans, index);
   // print all subsets in sorted order
    for (const vector<int>& subset : ans)
    {
        for (int i : subset)
        {
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}
