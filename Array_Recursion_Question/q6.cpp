//delete middle element of a stack

#include<iostream>
#include<stack>

using namespace std;


void midDel(stack<int>&s,int k)
{
    if(s.size()==k)
    {
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    midDel(s,k);
    s.push(temp);
    return;
}

int main()
{
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    int k=(s.size()/2)+1;
    midDel(s,k);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}