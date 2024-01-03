//Variations- Variation 3
//count the number of subset whose sum==k

#include<iostream>
#include<vector>

using namespace std;

int printSubset(vector<int>&v,int i,int k,int sum)
{
    if(i>=v.size())
    {
        if(sum==k)
        {
            return 1;
        }
        return 0;
    }
    sum+=v[i];
    int l=printSubset(v,i+1,k,sum);
    sum-=v[i];
    int r=printSubset(v,i+1,k,sum);
    return l+r;
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
    cout<<printSubset(v,0,k,0)<<endl;

}