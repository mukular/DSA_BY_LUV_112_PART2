// Let's start

// Nesting of pairs and vectors
#include<bits/stdc++.h>
using namespace std;

void printVeC(vector<int> &v)
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
    // input me daalna
    // 3 3 1 2 3 3 3 4 5 2 1 2
    int N;
    cin>>N;
    vector<vector<int> >v3;
    for(int i = 0; i < N; ++i)
    {
        int f;
        cin>>f;
        vector<int> temp;
        // v3[i] abhi exist nhi karta
        // toh v3[i].push_back mat karna
        // pahle khali vector insert karna uske baad kar sakte h
        for(int j = 0; j < f; ++j)
        {
            int m;
            cin>>m;
            temp.push_back(m);
        }
        v3.push_back(temp);
    }
    v3[0].push_back(10);
    v3.push_back(vector<int> ()); // khali vector daal diya
    for(int i = 0; i < v3.size(); ++i)
    {
        printVeC(v3[i]);
    }
    cout<<v3[0][1];
    return 0;
}