#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int sort1(int arr[],int n)
{
    if(n==1 || n==0)
        return 1;
    if(arr[n-1] < arr[n-2])
        return 0;
    return sort1(arr,n-1);
}
int sort2(int arr[],int n)
{
    if(n==1 || n==0)
        return 1;
    if(arr[n-1] > arr[n-2])
        return 0;
    return sort2(arr,n-1);
}
int main()
{
    int n;
    int a[10];
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(int i=0;i<n;i++)
    {
        int f=0;
        int g=0;
        for(int j=0;j<10;j++)
            cin>>a[j];
        if(sort1(a,10))
            f=1;
        else if(sort2(a,10))
            g=1;
        if(f==0 && g==0)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }
    return 0;
}
