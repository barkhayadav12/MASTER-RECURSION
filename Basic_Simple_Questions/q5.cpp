//sum of digits

#include<iostream>

using namespace std;

int sum_digits(int n)
{
   while(n!=0)
   {
     return (n%10)+sum_digits(n/10);
   }
   
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_digits(n)<<endl;
}