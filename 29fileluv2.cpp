// Let's start

// pairs and vectors
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i) 
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}

void printVeC(vector<string> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i) 
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    printVec(v);
    v.pop_back(); // last element nikal jayega // time complexity of pop_back = O(1)
    printVec(v);

    vector<int> v2 = v; // copy v into v2 // time complexity = O(n)
    // toh copy banana ek expensive operation h isliye ho sake toh reference pass karo
    v2.push_back(5);
    printVec(v2);
    printVec(v);
    printVec(v);

    cout<<"HEllo "<<endl;
    vector<int> &v1 = v; 
    v1.push_back(5);
    printVec(v1);
    printVec(v);
    printVec(v);
    cout<<"yo"<<endl;

    vector<string> v4;
    // input me daalna
    // 5
    // abc def gdsg sdgdsg dsgf
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        v4.push_back(s);
    }
    printVeC(v4);
    return 0;
}