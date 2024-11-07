/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <stdio.h>
#include <string.h> 
int romanCharToInt(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int result = 0;
    int length = strlen(s);

    for (int i=0; i < length; i++ ){
        int current = romanCharToInt(s[i]);
        int next = (i + 1 < length) ? romanCharToInt(s[i + 1]) : 0;
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }
    return result; 
}
// @lc code=end

