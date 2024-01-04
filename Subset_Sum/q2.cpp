//to print the sum of all the subset
//Eg I/P: 1 2 2 2 3 3


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSum(vector<int>a,int index,vector<int>&v,vector<vector<int>>&res)
{   
    res.push_back(v);
    for(int i=index;i<a.size();i++)
    {
        if(i>index && a[i]==a[i-1])
        {
            continue;
        }
        v.push_back(a[i]);
        printSum(a,i+1,v,res);
        v.pop_back();
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    vector<int>v;
    vector<vector<int>>res;
    printSum(a,0,v,res);
    for(auto i:res)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}