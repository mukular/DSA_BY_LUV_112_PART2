// Let's start

// set
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s)
    {
        cout<<value<<endl;
    }
    // or
    // for(auto it = s.begin(); it != s.end(); ++it)
    // {
    //     cout<<(*it)<<endl;
    // }
}

int main()
{
    set<string> s; // string ki jagah kuch bhi rakh sakte h koi container ya aur koi data type
    // set stores unique elements in sorted order
    s.insert("abc"); // time complexity of s.insert = O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    print(s);
    cout<<"Wow"<<endl;

    auto it = s.find("abc"); // s.find() returns iterator   
    // time complexity of s.find() = O(log(n))
    if(it != s.end())
    {
        cout<<(*it)<<endl;
    }
    cout<<"mmmm..."<<endl;
    auto it2 = s.find("bcd");
    // time complexity of s.find() = O(log(n))
    if(it2 != s.end())
    {
        s.erase(it2); // deletes bcd
    }
    print(s);
    cout<<"meow"<<endl;
    s.erase("abc");
    print(s);

    // solution of below Q.1
    set<string> s2;
    int n2;
    cin>>n2;
    for (int i = 0; i < n2; ++i)
    {
        string str;
        cin>>str;
        s2.insert(str);
    }
    cout<<"Now printing ........"<<endl;
    for(auto value : s2)
    {
        cout<<value<<endl;
    }
    return 0;
}

/*
Q.1. Given N strings, print unique strings in lexiographical order
N <= 10^5
|s| <= 100000

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
*/


/*
// set member functions
// gfg website se copy kiya h maine
S. No.

Function

Description

Time Complexity

1.

begin()

Returns an iterator to the first element.

O(1)

2.

end()

Return an iterator to the last element.   // galat h shayad yeh

O(1)

3.

size()

Returns the number of elements.

O(1)

4.

empty()

Checks if the container is empty.

O(1)

5.

insert()

Inserts a single element.

O(logn)

6.

erase()

Removes the given element.

O(logn)

7.

clear()

Removes all elements.

O(n)

8.

find()

Returns the pointer to the given element if present, otherwise, a pointer to the end.

O(logn)
*/