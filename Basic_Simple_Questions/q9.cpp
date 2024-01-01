//no of steps to reduce a number to zero

//leetcode question no. 1342

#include<iostream>

using namespace std;

int cnt_steps(int n,int cnt)
{
    if(n==0)
    {
        return cnt;
    }
    if(n%2==0)
    {
        return cnt_steps(n/2,cnt+1);
    }
    return cnt_steps(n-1,cnt+1);
}


int main()
{
    int n;
    cin>>n;
    cout<<cnt_steps(n,0);
}