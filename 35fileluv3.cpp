// Let's start

// multiset
#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    // multiset allows multiple values
    multiset<string> s;
    s.insert("abc"); // time complexity of s.insert = O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("bcd");
    s.insert("abc");
    print(s);
    cout<<"hello"<<endl;

    // priority queue ki jagah multiset use kar sakte h
    // s.find() returns first value iterator
    auto it = s.find("abc"); // time complexity of s.find = O(log(n))
    if(it != s.end())
    {
        s.erase(it);
    }
    s.erase("bcd"); // saare bcd delete ho jayenge
    print(s);

    return 0;
}