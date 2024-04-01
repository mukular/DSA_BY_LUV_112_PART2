// Let's start

// Nesting of pairs and vectors
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int> > &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i) 
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

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
    vector<pair<int, int> > v = {{1,26}, {2,3}, {4,5}};
    printVec(v);
    vector<pair<int, int> > v1;
    // input me daalna
    // 3
    // 1 2 2 3 4 5
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) 
    {
        int x, y;
        cin>>x>>y;
        v1.push_back({x,y});
        // or 
        // v1.push_back(make_pair(x,y));
    }
    printVec(v1);
    cout<<"Oh yes"<<endl;

    // input me daalna
    // 3 3 1 2 3 3 3 4 5 2 1 2
    int N;
    cin>>N;
    vector<int> v3[N]; // N vector ban gaye // number of rows fix h
    for(int i = 0; i < N; ++i)
    {
        int f;
        cin>>f;
        for(int j = 0; j < f; ++j)
        {
            int m;
            cin>>m;
            v3[i].push_back(m);
        }
    }
    for(int i = 0; i < N; ++i)
    {
        printVeC(v3[i]);
    }
    cout<<v3[0][1];
    return 0;
}