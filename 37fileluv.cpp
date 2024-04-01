// Let's start

// Nesting in map and set
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<int,int>, int> m1;
    pair<int,int> p1, p2, p3;
    p1 = {1,2};
    p2 = {2,3};
    p3 = {2,4};
    cout<<(p1 > p2); // prints 0 because 1 in p1 is less than 2 in p2
    cout<<(p3 > p2); // prints 1 because 3 in p2 is less than 4 in p3

    map<set<int>,int> m2;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout<<(s1 < s2);

    /*
    Input:-
    4
    a b 4
    1 2 3 4
    d f 3
    2 3 4
    c d 2
    1 2
    b d 1
    2
    */

    map<pair<string, string>, vector<int> > m;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        string fn, ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j = 0; j < ct; ++j)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    cout<<"printing begins....."<<endl;

    for(auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element : list)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}