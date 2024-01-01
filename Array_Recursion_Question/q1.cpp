//Find if the array is sorted or not

#include<iostream>
using namespace std;

bool isSorted(int a[],int i,int n)
{
    if(i==n)
    {
        return true;
    }
    if(a[i]>a[i+1])
    {
        return false;
    }
    return isSorted(a,i+1,n);
}

int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    isSorted(a,0,n-1)? cout<<"Sorted\n" : cout<<"Not Sorted\n";
}