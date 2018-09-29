#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,y,flag;
    cin>>n;
    string b;
    for(int k=1;k<=n;k++)
    {
        flag=0;
        cin>>t;
        string a[t];
        int m[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            cin>>m[i];
        }
        cin>>y;
        cin>>b;
        for(int i=0;i<t;i++)
        {
            if(a[i]==b)
            {
                if(m[i]<=y)
                    cout<<"Case "<<k<<": Yesss"<<endl;
                else if(m[i]>y && m[i]<=y+5)
                    cout<<"Case "<<k<<": Late"<<endl;
                else if(m[i]>y+5)
                    cout<<"Case "<<k<<": Do your own homework!"<<endl;
                flag=1;
            }
        }
        if(flag==0)
            cout<<"Case "<<k<<": Do your own homework!"<<endl;
    }
    return 0;
}
