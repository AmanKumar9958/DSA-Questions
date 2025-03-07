// Problem Statement: 13. Roman to Integer
// Link: https://leetcode.com/submissions/detail/1555610499/
// Example:

// Example 1:
// Input: s = "III"
// Output: 3
// Explanation: III = 3.

// Example 2:
// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.

// Example 3:
// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

// Solution:
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let romanMap = {
        'I': 1, 'V': 5, 'X': 10, 'L': 50, 
        'C': 100, 'D': 500, 'M': 1000
    }
    let total = 0;
    for(let i = 0; i < s.length; i++){
        let current = romanMap[s[i]];
        let next = romanMap[s[i + 1]];

        if (current < next){
            total -= current;
        } else{
            total += current;
        }
    }
    return total;
};