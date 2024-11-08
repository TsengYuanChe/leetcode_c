/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    if ( numsSize == 0) { return 0; }

    int k = 0;
    for ( int i = 1; i < numsSize; i++) {
        if ( nums[i] != nums[k] ) {
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
}
// @lc code=end

