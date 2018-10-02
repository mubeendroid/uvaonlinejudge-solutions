//accepted
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
        if(a<=20 && b<=20 && c<=20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
    }
    return 0;
}
