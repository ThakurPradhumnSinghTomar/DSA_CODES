#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//function for finding union of two sorted arrays

vector<int> unionFinder(int arr1[], int arr2[], int n1, int n2)
{
    
    vector<int> result(arr1, arr1 + n1);
    
    for(int i=0;i<n2;i++){
    
     
    
    if(! binary_search(result.begin(), result.end(),arr2[i])){
        
        
            result.push_back(arr2[i]);
        }
    
    }
    return result;
}

int main()
{
    int array1[] = {3, 5, 7, 9, 12, 18};
    int array2[] = {2, 5, 6, 8, 18};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    vector<int> unionOfarr = unionFinder(array1, array2, n1, n2);

    for (int i : unionOfarr)
    {
        cout << i << "  ";
    }

    return 0;
}
