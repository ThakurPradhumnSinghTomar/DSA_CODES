#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve(vector<string> arr, vector<string> output, vector<vector<string>> &ans, int index ){
    //base case
    if (index > 2)
    {
        ans.push_back(output);
        return ;
    }
  
    //exclude
    
    solve(arr, output,ans,index+1);
    
    //include
   string elmnt = arr[index];
   output.push_back(elmnt);
   solve(arr, output,ans,index+1);
    
    return ;
}



int main (){

vector<string> arr = {"a", "b", "c"};



  vector<vector<string>> ans;
    vector<string> output;
    int index=0;
    solve(arr, output,ans, index);
   // print all subsets in sorted order
    for (const vector<string>& subset : ans)
    {
        for (const string& i: subset)
        {
            cout << i << " ";
        }
        cout << endl;
    }


return 0;
}