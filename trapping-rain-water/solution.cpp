#include <iostream> 
#include <vector> 
#include <bits/stdc++.h>

using namespace std; 

class Solution {
    
    public:
    
    int trap(vector<int>& height) {
        int i = 0, 
        a = 0, 
        left = height[i],
        right = *std::max_element(height.begin() + i, height.end());

        while (i < height.size()) {
            if (left >= height[i] && height[i] <= right) {
                a += min(left, right) - height[i];
            }
            i++;
            left = *std::max_element(height.begin(), height.begin() + i);
            right = *std::max_element(height.begin() + i, height.end());
        }
        
        return a;
    }
};

int main() {
    Solution s;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    // dispay the result concated with the string
    cout << "The result is: " << s.trap(height) << endl;

    // pause the console by pressing enter
    cout << "Press enter key to continue..." << endl;
    cin.get();
    return 0;
}