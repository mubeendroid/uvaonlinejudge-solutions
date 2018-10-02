#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    float a,b,c,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
        if(((a+b+c)<=125.0 && d<=7.0) || (a<=56.0 && b<=45.0 && c<=25.0 && d<=7.0))
        {
            cout<<"1"<<endl;
            counter++;
        }
        else
            cout<<"0"<<endl;
    }
    cout<<counter<<endl;
    return 0;
}
