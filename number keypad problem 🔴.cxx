#include <iostream>
#include <vector>

using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    //base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < (value.length()); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

int main()
{
    string digits;
    cout<<"enter the numbers on your keypad : ";
   
    cin >> digits;
    cout<<endl;
    int index = 0;
    vector<string> ans;
    string output = " ";
    string mapping[10] = {" ",    " ",    "abc",    "def",   "ghi",    "jkl",    "mno",    "pqrs",   "tuv",   "wxyz"};

    solve(digits, output, index, ans, mapping);
    
    cout<<"you can type following strings through your entereddigits :-"<<endl;
    cout<<endl;

    // print all subsets in sorted order
    for (const string &i : ans)
{
    cout << i << " ";
}
cout << endl;

    return 0;
}
