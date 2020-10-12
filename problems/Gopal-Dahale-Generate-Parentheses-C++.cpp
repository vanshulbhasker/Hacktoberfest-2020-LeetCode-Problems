/**
 * Solution to Generate Parentheses at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/generate-parentheses/
 */
class Solution
{
public:
    vector<string> res; // holds the results

    // function to generate all parentheses
    void generate(vector<char> &a, int open, int closed, int i, int n)
    {

        // append a result to res
        if (i == 2 * n)
        {
            string s;
            for_each(a.begin(), a.end(), [&](char x) { s.push_back(x); });
            res.push_back(s);
        }

        // if number of opening parentheses is less than n
        // then append '(' and increase count of open by 1
        // increment current position 'i'
        if (open < n)
        {
            a[i] = '(';
            generate(a, open + 1, closed, i + 1, n);
        }

        // if number of opening parentheses is less than that of closed
        // then append ')' and increase the count of closed by 1
        // increment the current position 'i'
        if (open > closed)
        {
            a[i] = ')';
            generate(a, open, closed + 1, i + 1, n);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<char> a(2 * n); // holds a result of possible parentheses
        generate(a, 0, 0, 0, n);
        return res;
    }
};