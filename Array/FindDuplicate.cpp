// Most effieicent method for finding duplicate in array
//  Time complexity:  O(N). Only one traversal
// Space complexity: O(1).

#include <bits/stdc++.h>

using namespace std;

// function for finding duplicate
int findDuplicate(vector<int> &nums)
{

    int slow = nums[0]; // take slow pointer
    int fast = nums[0]; // take fast pointer

    // iterate while slow is not equal to fast
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // now mark fast as firs integer and again iterate
    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    // return slow as we find the duplicate
    return slow;
}

int main()
{
    vector<int> arr; // example array
    arr = {1, 3, 4, 2, 3};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}