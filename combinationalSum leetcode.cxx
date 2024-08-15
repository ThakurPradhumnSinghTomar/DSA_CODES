//In the given question, we are only able to find all the combinations with the help of two elements from the array. The number of repetitions of any element from these two elements is not defined. You can repeat them as many times as possible, but you cannot take three elements from the array to make the combinations and get the targets.


#include <iostream>

using namespace std;

void combinationalSum(int array[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        int lim = array[i];
        int k = 0;

        while (lim <= target)
        {
            k++;

            if (lim == target)
            {
                cout << " target is " << k << " times "
                     << array[i] << endl;
            }

            lim = lim + array[i];
        }

        for (int s = k; s > 0; s--)
        {
            for (int l = 0; l < n; l++)
            {
                if (((array[i] * s) + array[l]) == target)
                {
                    cout << " target is sum of " << s << " times " << array[i] << "and " << array[l] << endl;
                }
            }
        }
    }
}

int main()
{
    int cand[] = {2,6,7,8,9,11};
    int target = 15;

    int n = sizeof(cand) / sizeof(cand[0]);
    cout << "Size of candidates array is : " << n << endl;

    combinationalSum(cand, target, n);

    return 0;
}
