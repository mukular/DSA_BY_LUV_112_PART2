// Let's start

// Recursion
#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
    if(n == 0)
    {
        return;
    }
    cout<<n<<endl;
    func(n-1);
}

void func1(int n)
{
    if(n == 0)
    {
        return;
    }
    func1(n-1);
    cout<<n<<endl;
}

// factorial of N
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return fact(n-1) * n;
}

int main()
{
    func(5);
    func1(3);
    int n;
    cin>>n;
    cout<<fact(n);
}

// Time complexity of recursive function:-
// Ex. Factorial of n
// 1. Number of function calls -> n
// 2. What is complexity of each function -> O(1)
// so time complexity is their product which is O(n)