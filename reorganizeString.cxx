#include <queue>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        int count[26] = {0};

        for (char c : s) {
            count[c - 'a']++;
            if (count[c - 'a'] > (s.size() + 1) / 2) {
                return "";
            }
        }

        priority_queue<pair<int, char>> pq;
        
        // Making priority queue
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                pq.push({count[i], i + 'a'});
            }
        }

        while (pq.size() > 1) {
            // Making our ans string
            auto P1 = pq.top();
            pq.pop();
            auto P2 = pq.top();
            pq.pop();

            ans.push_back(P1.second);
            ans.push_back(P2.second);

            if (--P1.first > 0) {
                pq.push(P1);
            }
            if (--P2.first > 0) {
                pq.push(P2);
            }
        }

        if (!pq.empty()) {
            ans.push_back(pq.top().second);
        }

        return ans;
    }
};