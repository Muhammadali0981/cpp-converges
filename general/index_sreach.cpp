#include <iostream>
#include <vector>

using namespace std;



int searchInsert(vector<int>& nums, int target) {
        int i = 0;

        if (target <= nums[0]) {
            return 0;
        }
        while (i < nums.size() - 1) {
            if (nums[i] == target) {
                return i; 
            }
            if (nums[i] < target && nums[i+1] >= target) {
                return i + 1; 
            }
            i++;
        }

        if (target > nums[nums.size() - 1]) {
            return nums.size();
        }

        return -1;
    }


int main(){
    vector<int> a{1,3,6,7};

    cout << searchInsert(a, 3) << endl;

    return 0;
}
