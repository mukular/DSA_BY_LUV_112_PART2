// Let's start

// iterators
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // iterators container ke elements ko point karte h
    // .end() last element ke next ko point karta h
    // .begin() first index ko point karta h
    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    cout<<(*it)<<endl;
    cout<<(*(it+1))<<endl;
    for(it = v.begin(); it != v.end(); ++it)
    {
        // it++ next iterator par jayega
        // it + 1 next location par jayega
        // maps and set contiguous nhi hote
        // isliye it + 1 error dega
        // lekin it++ next iterator par le jayega isliye it++ hi istemal kare
        cout<<(*it)<<endl;
    }

    vector<pair<int, int> > v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int> > :: iterator it1;
    for(it1 = v_p.begin(); it1 != v_p.end(); ++it1)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    // or
    for(it1 = v_p.begin(); it1 != v_p.end(); ++it1)
    {
        cout<<(it1->first)<<" "<<(it1->second)<<endl;
    }

    return 0;
}