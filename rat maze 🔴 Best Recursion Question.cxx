#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int i, int j, int visited[4][4], int arr[4][4], int n)
{
    if ((i >= 0 && i < n) && (j >= 0 && j < n) && (visited[i][j] == 0 && arr[i][j] == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(int arr[4][4], int n, vector<string> &ans, string output, int i, int j, int visited[4][4])
{
    //base case
    if (i == 3 && j == 3)
    {
        ans.push_back(output);
        return;
    }

    visited[i][j] = 1;

    //code

    //down
    int newi = i + 1;
    int newj = j;
    if (isSafe(newi, newj, visited, arr, n))
    {
        output.push_back('D');
        solve(arr, n, ans, output, newi, newj, visited);
        output.pop_back();
    }

    //up
    newi = i - 1;
    newj = j;
    if (isSafe(newi, newj, visited, arr, n))
    {
        output.push_back('U');
        solve(arr, n, ans, output, newi, newj, visited);
        output.pop_back();
    }

    //right
    newi = i;
    newj = j + 1;
    if (isSafe(newi, newj, visited, arr, n))
    {
        output.push_back('R');
        solve(arr, n, ans, output, newi, newj, visited);
        output.pop_back();
    }

    //left
    newi = i;
    newj = j - 1;
    if (isSafe(newi, newj, visited, arr, n))
    {
        output.push_back('L');
        solve(arr, n, ans, output, newi, newj, visited);
        output.pop_back();
    }

    visited[i][j] = 0;
}

int main()
{
    int n = 4;
    int arr[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    int i = 0;
    int j = 0;

    vector<string> ans;
    string output = "";
    int visited[4][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    solve(arr, n, ans, output, i, j, visited);
    for (const auto &path : ans)
    {
        cout << path << " ";
    }

    return 0;
}
