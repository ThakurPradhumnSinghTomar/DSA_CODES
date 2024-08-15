#include <iostream>
#include <vector>
using namespace std;
//max heap

class Solution
{
  private:
    int *arr;
    int size = 0;

    void insert(int val)
    {
        //  size = size + 1;
        arr[size] = val;

        int index = size;
        size++;
        while (index > 0)
        {
            int parent = (index - 1) / 2;

            if (arr[index] < arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }

            else
            {
                return;
            }
        }
    }

    void printHeap(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }

    void deletionFromHeap()
    {
        if (size <= 1)
        {
            size = 0;
            return; // Nothing to delete
        }

        int lastElement = arr[size - 1]; // Store the last element

        arr[0] = lastElement; // Replace root with last element
        size--;               // Reduce heap size

        // Heapify down from root
        int index = 0;
        while (true)
        {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            // Compare with left child
            if (left < size && arr[left] < arr[largest])
            {
                largest = left;
            }

            // Compare with right child
            if (right < size && arr[right] < arr[largest])
            {
                largest = right;
            }

            // If largest is not root
            if (largest != index)
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
            else
            {
                break;
            }
        }
    }

  public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int p = nums.size();
        arr = new int[p];

        for (int i = 0; i < k; i++)
        {
            insert(nums[i]);
        }
        int s = nums.size();
        for (int i = k; i < s; i++)
        {
            if (nums[i] > arr[0])
            {
                deletionFromHeap();
                insert(nums[i]);
            }
        }
        int ans = arr[0];
        cout << ans << endl;
        return ans;
    }
};

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    Solution s1;
    s1.findKthLargest(nums, k);

    return 0;
}
