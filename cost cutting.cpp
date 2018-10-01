#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b && a>c)
        {
            if(b>c)
                cout<<"Case "<<i<<": "<<b<<endl;
            else if(b<c)
                cout<<"Case "<<i<<": "<<c<<endl;
        }
        else if(b>a && b>c)
        {
            if(a>c)
                cout<<"Case "<<i<<": "<<a<<endl;
            else if(a<c)
                cout<<"Case "<<i<<": "<<c<<endl;
        }
        else if(c>a && c>b)
        {
            if(a>b)
                cout<<"Case "<<i<<": "<<a<<endl;
            else if(a<b)
                cout<<"Case "<<i<<": "<<b<<endl;
        }
        else if(a==b && b==c)
            cout<<"Case "<<i<<": "<<b<<endl;
    }
    return 0;
}
