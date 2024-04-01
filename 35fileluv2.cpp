// Let's start

// unordered set
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // unordered set (only question)
    // complex data type nhi rakh sakte jaise pair<int,int> or set<int> waghera
    // Time complexity = O(1) for s.insert(), s.find()
    // solution of below Q.1
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        if(s.find(str) == s.end())
        {
            cout<<"no\n";
        }
        else
        {
            cout<<"yes\n";
        }
    }
    return 0;
}

/*
Q.1. Given N strings and Q queries
In each query you are given a string
print yes if string is present
else print no.
N <= 10^6
|s| <= 100
Q <= 10^6

Input:-
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc
ghj
abcdef
*/

/*
// unordered set member functions
// gfg website se copy kiya h maine
S. No.

Functions

Description

Time Complexity

1.

begin()

Returns an iterator to the first element.

O(1)

2.

end()

Returns an iterator to the theoretical element that follows the last element

O(1)

3.

size()

Returns the number of elements.

O(1)

4.

empty()

Returns true if the unordered_set is empty, otherwise false.

O(1)

5.

insert()

Insert an item in the container.

O(1)

6.

erase()

Removes an element from the container.

O(1)

7.

find()

Returns the pointer to the given element if present, otherwise, a pointer to the end.

O(1)
*/