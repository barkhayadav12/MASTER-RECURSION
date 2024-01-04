// permutation
// i/p: 1 2 3
//o/p: 1 2 3
//     1 3 2
//etc

#include<iostream>
#include<vector>

using namespace std;

void permut(vector<int>&a,int index)
{
    if(index==a.size())
    {
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=index;i<a.size();i++)
    {
        swap(a[i],a[index]);
        permut(a,index+1);
        swap(a[i],a[index]);
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
    permut(a,0);
}