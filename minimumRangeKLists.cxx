#include <limits.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
    int val;
    int row;
    int col;

    Node(int data, int r, int c) {
        val = data;
        row = r;
        col = c;
    }
};

class compare {
public:
    bool operator()(Node *a, Node *b) {
        return (a->val > b->val);
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Node*, vector<Node*>, compare> minHeap;

        int k = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < k; i++) {
            maxi = max(maxi, nums[i][0]);
            mini = min(mini, nums[i][0]);
            minHeap.push(new Node(nums[i][0], i, 0));
        }

        int ansS = mini;
        int ansE = maxi;

        while (!minHeap.empty()) {
            mini = minHeap.top()->val;
            Node *temp = minHeap.top();
            minHeap.pop();

            if (temp->col + 1 < nums[temp->row].size()) {
                Node* nextNode = new Node(nums[temp->row][temp->col + 1], temp->row, temp->col + 1);
                minHeap.push(nextNode);
                maxi = max(maxi, nextNode->val);
                mini = minHeap.top()->val;

                if (maxi - mini < ansE - ansS) {
                    ansE = maxi;
                    ansS = mini;
                }
            } else {
                break;
            }

            delete temp; // Free the memory of the popped node
        }

        vector<int> ans;
        ans.push_back(ansS);
        ans.push_back(ansE);

        return ans;
    }
};