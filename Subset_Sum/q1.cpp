//to print the sum of all the subset
//Eg I/P: 3 1 2


#include<iostream>
#include<vector>
using namespace std;

void printSum(vector<int>a,int i,vector<int>&v)
{
    if(i >=a.size())
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        cout<<sum<<" ";
        return;
    }
    v.push_back(a[i]);
    printSum(a,i+1,v);
    v.pop_back();
    printSum(a,i+1,v);
    return;
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
    vector<int>v;
    printSum(a,0,v);
}