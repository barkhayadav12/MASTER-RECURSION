
//Finding and returning multiple occurrences of an element in the array (Linear Search)


#include<iostream>
#include<vector>

using namespace std;

void isPresent(int a[],int i,int n,int key,vector<int>&v)
{
    if(i==n)
    {
        return;
    }
    if(a[i]==key)
    {
        v.push_back(a[i]);
    }
    return isPresent(a,i+1,n,key,v);
}

int main()
{
    int a[]={1,2,2,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    isPresent(a,0,n-1,2,v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}