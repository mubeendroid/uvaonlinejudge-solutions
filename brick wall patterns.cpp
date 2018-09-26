#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a[51];
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        a[0]=0;
        a[1]=1;
        for(int i=2;i<=n+1;i++)
            a[i]=a[i-1]+a[i-2];
        cout<<a[n+1]<<endl;
    }
    return 0;
}
