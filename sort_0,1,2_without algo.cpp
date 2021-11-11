#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=0,r=n-1,mid=0;
    vector<int>ve(n);
    for(int i=0;i<n;i++)
    {
        cin>>ve[i];
    }
    while(mid<=r)
    {
        if(ve[mid]==2)
        {
            swap(ve[r],ve[mid]);
            r-=1;
        }
        else if(ve[mid]==0)
        {
            swap(ve[mid],ve[l]);
            l+=1;
            mid+=1;
        }
        else
            mid+=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ve[i]<<" ";
    }
}
