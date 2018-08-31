#include<bits/stdc++.h>
using namespace std;
int gcd(int i,int j)
{
    int gcd;
    for(int k=1;k<=i && k<=j;k++)
        if(i%k==0 && j%k==0)
            gcd=k;
    return gcd;
}
int main()
{
    int n,sum;
    while(true)
    {
        cin>>n;
        sum=0;
        if(n==0)
            break;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
                sum=sum+gcd(i,j);
        cout<<sum<<endl;
    }
    return 0;
}
