#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        bool found = false;
        for (int i = 1 ; i < nums.size() && !found; i++) {
            if (nums[i] == nums[i-1])
                found = true;
        }

         return found;
    }
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        Solution solution;
        int s;
        cin >> s;

        vector<int> input;

        for (int j = 0; j < s; j++) {
            int temp;
            cin >> temp;
            input.push_back(temp);
        }

        bool ans = solution.containsDuplicate(input);

        cout << ans << endl;
    }

    return 0;
}