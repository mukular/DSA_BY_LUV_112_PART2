// Let's start

#include<bits/stdc++.h>
using namespace std;

// sum of array
int sum(int n, int a[]) // time complexity = O(n)
{
    if(n < 0)
    {
        return 0;
    }
    return sum(n-1, a) + a[n];
}

// sum of digits
int digit_sum(int n) // time complexity = O(log(n) base10)
{
    if(n == 0)
    {
        return 0;
    }
    return digit_sum(n/10) + (n % 10);
}

int main()
{
    /*
    input:-
    6
    1 2 3 4 5 6
    */
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cout<<sum(n-1, a)<<endl;
    cout<<sum(2, a)<<endl;

    /*
    input:-
    1234
    */
    int n1;
    cin>>n1;
    cout<<digit_sum(n1)<<endl;
}