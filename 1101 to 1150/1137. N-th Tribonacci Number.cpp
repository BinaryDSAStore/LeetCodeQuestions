#include <bits/stdc++.h>
using namespace std;

int tribonaccimemo(int n, vector<int> &dp)
{
    if (n < 1)
        return 0;

    if (n == 1 || n == 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = tribonaccimemo(n - 1, dp) + tribonaccimemo(n - 2, dp) + tribonaccimemo(n - 3, dp);
}

int tribonacci(int n)
{
    vector<int> dp(n + 1, -1);
    return tribonaccimemo(n, dp);
}