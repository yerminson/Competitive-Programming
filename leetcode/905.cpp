#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size() ; i++) {
            if (nums[i] % 2 == 0)
                ans.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size() ; i++) {
            if (nums[i] % 2 == 1)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};

int main () {
    Solution solution;

    vector<int> nums{ 3, 1, 2, 4};
    vector<int> ans = solution.sortArrayByParity(nums);

    for (int i = 0 ; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    cout << ans.size() << endl;

    return 0;
}