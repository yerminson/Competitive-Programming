#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        char last = s[0];
        int ans = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1]) {
                count = max(ans, count);
                ans = 1;
                last = s[i];
            }
            else {
                ans++;
            }
        }

        count = max(count, ans);

        return count;
    }
};

int main() {
    int t;
    cin >> t;

    Solution solution;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int ans = solution.maxPower(s);
        cout << ans << endl;
    }
}

