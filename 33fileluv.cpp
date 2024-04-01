// Let's start

// maps
// n is map size jahan bhi n likha h time complexity mein
#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl; // gives current size of map
    // map ke element ko access karne ki time complexity bhi log(n) h
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    // map ka har ek element ek pair hota h
    // map contiguous nhi hota
    map<int, string > m;  // int ya string ki jagah koi container bhi ho sakta h
    m[1] = "abc"; // time complexity = O(log(n)) keval m[6] likh diya aur kuch value nhi daali tabh bhi yahi time complexity hogi
    m[5] = "cdc"; // agar yaha 5 ki jagah koi string hoti toh time complexity s.size()*log(n) hoti where s.size() is string size kyoki string ko compare bhi toh karega na baki key se
    m[3] = "acd";
    m[6]; // by default empty string insert hogi // string ki jagah int hota toh 0 insert hota by default
    m.insert({4, "afg"});
    // map me keys sorted order me hoti h aur unique hoti h
    m[5] = "cde";
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    // or
    print(m);
    cout<<"Hello"<<endl;
    auto it1 = m.find(3); // 3 ka iterator return karega // agar nhi h toh m.end() return karega
    // time complexity of m.find() = O(log(n))
    if(it1 == m.end())
    {
        cout<<"NO value";
    }
    else
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }

    m.erase(3); // 3 wali key delete ho jayegi
    // time complexity of m.erase() = O(log(n))
    print(m);

    cout<<"YO"<<endl;
    auto it2 = m.find(5);
    if(it2 != m.end())
    {
        m.erase(it2); // delete 5
    }
    print(m);
    m.clear(); // clear map
    print(m);

    // solution of below Q.1.
    map<string,int> m2;
    int n2;
    cin>>n2;
    for(int i = 0; i < n2; ++i)
    {
        string s;
        cin>>s;
        m2[s]++;
    }
    for(auto pr : m2)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
}

/*
Q.1. Given N strings, print unique strings in lexiographical order with their frequency
N <= 10^5
|s| <= 100

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
// map member functions
// gfg website se copy kia h maine
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

Returns the number of elements in the map

O(1)

4.

insert()

Adds a new element to the map.

O(logn)

5.

erase(iterator)

Removes the element at the position pointed by the iterator.

O(logn)

6.

erase(key)

Removes the key and its value from the map.

O(logn)

7.

clear()

Removes all the elements from the map.

O(n)
*/