//print the power set

#include<iostream>
#include<vector>

using namespace std;

void printSubset(vector<int>&v,int i,vector<int>&res)
{
    if(i>=v.size())
    {
        for(auto i:res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    res.push_back(v[i]);
    printSubset(v,i+1,res);
    res.pop_back();
    printSubset(v,i+1,res);
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>res;
    printSubset(v,0,res);

}