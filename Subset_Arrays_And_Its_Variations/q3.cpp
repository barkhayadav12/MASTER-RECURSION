//Variations- Variation 2
//print only one  subset whose sum==k (there can be multiple subset whose sum==k)

#include<iostream>
#include<vector>

using namespace std;

bool printSubset(vector<int>&v,int i,int k,vector<int>&res,int sum)
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
            return true;
        }
        return false;
    }
    res.push_back(v[i]);
    sum+=v[i];
    if(printSubset(v,i+1,k,res,sum)==true)
    {
        return true;
    }
    res.pop_back();
    sum-=v[i];
    if(printSubset(v,i+1,k,res,sum)==true)
    {
        return true;
    }
    return false;
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