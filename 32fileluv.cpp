// Let's start

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // range based loop
    for(int value : v) // yaha copy banti h value mein
    {
        
        cout<<value<<" ";
    }
    cout<<endl;
    for(int &value : v) // yaha actual value aayi h
    {
        value++;
    }
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    vector<pair<int, int> > v_p = {{1,2},{2,3}};
    for(pair<int,int> &value : v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    // auto keyword 
    // automatically data type le leta h
    auto a = 1.0;
    cout<<a<<endl;
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(auto &value : v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    
    return 0;
}