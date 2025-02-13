// the problem statement is : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

//learnings : applied knowledge of sets as a datatype, iterating through a container using modified for loops.

//note : the code is set to test the array [1,2,3,4] in the driver code, if you want to pass another vector, kindly update the driver code itself.




#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {// iterating through the container all at once
        if (seen.count(num)){
            return true;
        }
        else{
        seen.insert(num);
        }
    }
    return false;
}


//driver code for above function
int main() {
    vector<int> nums = {1, 2, 3, 1};
    if (containsDuplicate(nums)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "All elements in the array are distinct." << endl;
    }

    vector<int> nums2 = {1, 2, 3, 4};
    if (containsDuplicate(nums2)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "All elements in the array are distinct." << endl;
    }

   
}
