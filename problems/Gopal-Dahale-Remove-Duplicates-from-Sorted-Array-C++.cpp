/**
 * Solution to Remove Duplicates from Sorted Array at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        // base case if size of nums is zero
        if (!nums.size())
            return 0;

        int c = 0; // counts the size of new array

        for (int i = 0; i < nums.size();)
        {

            // skip the duplicate elements
            while (i < nums.size() and nums[c] == nums[i])
            {
                i++;
            }

            if (i >= nums.size())
                break;
            // update the size and the element of the array
            nums[++c] = nums[i];
        }
        return c + 1;
    }
};