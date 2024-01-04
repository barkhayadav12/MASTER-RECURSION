//combination sum

//given arr[]={2,3,6,7},target=7
//op: {2,2,3},{7}

//same element can be picked multiple times

//leetcode Question

#include<iostream>
#include<vector>

using namespace std;

void printCombination(vector<int>&candidates,int i,int target,int sum,vector<vector<int>>&res,vector<int>&v)
{
       if(i>=candidates.size())
       {
           return;
       }
       if(sum==target)
       {
           res.push_back(v);
           return;
       }
       if(sum>target)
       {
           return;
       }
       v.push_back(candidates[i]);
       sum+=candidates[i];
       printCombination(candidates,i,target,sum,res,v);
       v.pop_back();
       sum-=candidates[i];
       printCombination(candidates,i+1,target,sum,res,v);   
}

int main()
{
    int n;
    cin>>n;
    vector<int>candidates;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        candidates.push_back(x);
    }
    int target;
    cin>>target;
    vector<int>v;
    vector<vector<int>>op;
    printCombination(candidates,0,target,0,op,v);
    for(auto it:op)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}