// Let's start

/*
Q.1. Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the
warlords of the sea Doflamingo.But now he is getting bored and wants do a fun activity.
He is very much obsessed with palindromes.Given a string s of lowercase English alphabet 
of length N and two integers L and R, he wants to know whether all the letters of the substring 
from index L to R(L and R included) can be rearranged to form a palindrome or not.He wants 
to know this for Q values of L and R and needs your help in finding the answer.
Palindrome is a string of characters which when reversed reads same as the original String.

Constraints:-
1 <= t <= 10
1 <= N, Q <= 100000
1 <= L <= R <= N
'a' <= s[i] <= 'z' for 1 <= i <= N

Input:-
First line contains an integer t denoting the number of test cases.
First line of each test case contains two space separated integers N and Q,
the length of the string and number of queries respectively.
Next line contains the string s.
Each of the Next Q lines contain 2 space separated integers L and R.

Input:-
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
*/

// solution of question 1:-
// Method 1:-
/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int l, r;
            cin>>l>>r;
            int hsh[26];
            for(int i = 0; i < 26; ++i)
            {
                hsh[i] = 0;
            }
            l--;
            r--;
            for(int i = l; i <= r; ++i)
            {
                hsh[s[i] - 'a']++;
            }
            int oddCt = 0;
            for(int i = 0; i < 26; ++i)
            {
                if(hsh[i] % 2 != 0)
                {
                    oddCt++;
                }
            }
            if(oddCt > 1)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
    }
}
// Time Complexity = O(t * (n + q * (26 + n + 26))) = O(t*q*n) which is 10 * 10^5 * 10^5
*/

// Method 2:-
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N][26];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < 26; ++j)
            {
                hsh[i][j] = 0;
            }
        }
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i = 0; i < n; ++i)
        {
            hsh[i+1][s[i] - 'a']++;
        }
        for(int i = 0; i < 26; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                hsh[j][i] += hsh[j-1][i];
            }
        }
        while (q--)
        {
            int l, r;
            cin>>l>>r;
            int oddCt = 0;
            for(int i = 0; i < 26; ++i)
            {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt % 2 != 0)
                {
                    oddCt++;
                }
            }
            if(oddCt > 1)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        
    }
}

// Time Complexity = O(t * (n + n * 26 + q * 26)) = O(t * n * 26) which is 10 * 10^5 * 26