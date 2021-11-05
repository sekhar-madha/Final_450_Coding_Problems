#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j,temp;
    cin>>n;
    int arr[n];
    while(i<n)
    {
        cin>>arr[i];
        i+=1;
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=1;
        j-=1;
    }
    i=0;
    while(i<n)
    {
        cout<<arr[i]<<" ";
        i+=1;
    }
}
