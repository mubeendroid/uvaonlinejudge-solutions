#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=0;
        cin>>a;
        cin>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
               sum=sum+i;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
