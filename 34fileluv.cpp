// Let's start

// unordered map 
// n is map size jahan bhi n likha h time complexity mein
#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    unordered_map<int, string > m;  // data type me complex data type jaise pair<int, int> waghera use nhi kar sakte
    m[1] = "abc"; // Average time complexity = O(1) almost cases me yahi h
    m[5] = "cdc";
    m[3] = "acd";
    m[6]; 
    m.insert({4, "afg"});
    m[5] = "cde";
    print(m);
    // time complexity of m.find() = O(1)
    // time complexity of m.erase() = O(1)

    // solution of below Q.1.
    unordered_map<string,int> m2;
    int n2;
    cin>>n2;
    for(int i = 0; i < n2; ++i)
    {
        string s;
        cin>>s;
        m2[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m2[s]<<endl;
    }
    
    return 0;
}

/*
Q.1. Given N strings and Q queries.
In each query you are given a string
print frequency of that string
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
2
abc
ghj
*/

// multimap khud padh lena waise kuch kaam nhi aayega


/*
// unordered map member functions
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

Returns an iterator to the theoretical element that follows the last element

O(1)

3.

size()

Returns the number of elements.

O(1)

4.

empty()

Returns true if the unordered_map is empty, otherwise false.

O(1)

5.

find()

Returns the pointer to the given element if present, otherwise, a pointer to the end.

O(1)

6.

bucket()

Returns the bucket number where the data is stored.

O(1)

7.

insert()

Insert an item in the container.

O(1)

8.

erase()

Removes an element from the container.

O(1)
*/