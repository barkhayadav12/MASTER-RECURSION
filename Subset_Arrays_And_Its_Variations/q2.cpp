
//Variations- Variation 1
//print the subset whose sum==k

#include<iostream>
#include<vector>

using namespace std;

void printSubset(vector<int>&v,int i,int k,vector<int>&res,int sum)
{
    if(i>=v.size())
    {
        if(sum==k)
        {
            for(auto i:res)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    res.push_back(v[i]);
    sum+=v[i];
    printSubset(v,i+1,k,res,sum);
    res.pop_back();
    sum-=v[i];
    printSubset(v,i+1,k,res,sum);
    return;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements: "<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter the nos: "<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter the target sum: "<<endl;
    cin>>k;
    vector<int>res;
    printSubset(v,0,k,res,0);

}