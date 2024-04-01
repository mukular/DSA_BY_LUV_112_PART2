// Let's start

// pairs and vectors
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout<<"size: "<<v.size()<<endl; // time complexity of v.size() = O(1)
    for(int i = 0; i < v.size(); ++i) // v.size() gives vector's current size
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    pair<int, string> p; /// int ya string ki jagah aur bhi data types ya container likh sakte h
    p = make_pair(2, "abc");
    // or
    //  p = {2, "abc"};
    cout<<p.first<<" "<<p.second<<endl;
    cin>>p.first;
    cout<<p.first<<endl;
    pair<int, string> p1 = p; // copy p into p1
    p1.first = 3;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string> &p2 = p;
    p2.first = 11;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> p_array[3]; // pair ka array
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    for (int i = 0; i < 3; ++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; ++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    vector<int> v; // vector of integer data type // int ki jagah koi aur data type ya container bhi daal sakte h
    // vector size can be changed
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x); // time complexity of push_back() = O(1)
    }
    printVec(v);

    vector<int> v1(5); // 5 size ka vector
    printVec(v1);
    v1.push_back(100);
    v1.push_back(100);
    printVec(v1);

    vector<int> v2(10, 3); // 10 size ka vector jisme saari values 3 h
    printVec(v2);
    return 0;
}


/*
// vector member functions
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

Returns an iterator to the theoretical element after the last element.

O(1)

3.

size()

Returns the number of elements present.

O(1)

4.

empty()

Returns true if the vector is empty, false otherwise.

O(1)

5.

at()

Return the element at a particular position.

O(1)

6.

assign()

Assign a new value to the vector elements.

O(n)

7.

push_back()

Adds an element to the back of the vector.

O(1)

8.

pop_back()

Removes an element from the end.

O(1)

9.

insert()

Insert an element at the specified position.

O(n)

10.

erase()

Delete the elements at a specified position or range.

O(n)

11.

clear()

Removes all elements.

O(n)
*/