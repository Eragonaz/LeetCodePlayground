#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nmap;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];

            auto it = nmap.find(target-num);
            if (it != nmap.end())
                return vector<int>({i, it->second});
            
            nmap[num] = i;
        }
        return vector<int>({0, 0});
    }
};