//count number of zeroes in a given number

#include<iostream>

using namespace std;

int count_0=0;
void count_zeroes(int n)
{
    if(n==0)
    {
        return;
    }
    int rem=n%10;
    if(rem==0)
    {
        count_0++;
    }
    count_zeroes(n/10);
}

int main()
{
    int n;
    cin>>n;
    count_zeroes(n);
    cout<<count_0<<endl;
}