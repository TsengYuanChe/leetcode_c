/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len);
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                return false;
            }
            char topchar = stack[top--];
            if ((c == ')' && topchar != '(') ||
                (c == ']' && topchar != '[') ||
                (c == '}' && topchar != '{')) {
                return false;
            }
        }
    }
    bool result = (top == -1);
    return result;
}
// @lc code=end

