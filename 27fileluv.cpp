// Let's start

// selection sort
// Time Complexity = O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // input:-
    // 4
    // 3 1 4 2
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    for(int i = 0; i < n; ++i)
    {
        int minIndex = i;
        for(int j = i+1; j < n; ++j)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }

    for(int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
}