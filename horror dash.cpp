#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,maxnum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        maxnum=0;
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            cin>>b;
            if(b>maxnum)
                maxnum=b;
        }
        cout<<"Case "<<i<<": "<<maxnum<<endl;
    }
    return 0;
}
