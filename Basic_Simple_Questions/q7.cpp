//reverse a number 

#include<iostream>

using namespace std;


int sum=0;
void reverse_num(int n)
{
    if(n==0)
    {
        return;
    }
    int rem=n%10;
    sum=sum*10+rem;
    reverse_num(n/10);
     
}

int main()
{
    int n;
    cin>>n;
    reverse_num(n);
    cout<<sum<<endl;
}