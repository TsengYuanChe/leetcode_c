/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    for (int j = 0; j < strsSize; j++) {
        if (strs[j] == NULL || strs[j][0] == '\0') {
            return "";
        }
    }
    int i = 0;
    int isPrefix = 1;
    while (isPrefix) {
        char currentChar = strs[0][i];
        for (int j = 0; j < strsSize; j++) {
            if (strs[j] == NULL || strs[j][i] != currentChar || strs[j][i] == '\0') {
                isPrefix = 0; 
                break;
            }
        }
        if (isPrefix) i++;
    }
    char* result = (char*)malloc(i + 1);
    if (result == NULL) return "";
    strncpy(result, strs[0], i);
    result[i] = '\0';
    return result;
}
// @lc code=end

