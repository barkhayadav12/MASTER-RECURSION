//combination sum

//given arr[]={1,1,1,2,3},target=4
//op: {1,1,2},{2,2}

//no duplicate subset

//leetcode Question

#include<iostream>
#include<vector>

using namespace std;

void printCombination(vector<int>&a,int index,int target,vector<vector<int>>&res,vector<int>&v)
{
       if(target==0)
       {
        res.push_back(v);
        return;
       }
       for(int i=index;i<a.size();i++)
       {
        if(i>index && a[i]==a[i-1])
        {
            continue;
        }
        if(a[i]>target)
        {
            break;
        }
        v.push_back(a[i]);
        printCombination(a,i+1,target-a[i],res,v);
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
    int target;
    cin>>target;
    vector<int>v;
    vector<vector<int>>op;
    printCombination(a,0,target,op,v);
    for(auto it:op)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}