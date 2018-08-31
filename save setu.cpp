#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,sum=0;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a.compare("donate")==0)
        {
            cin>>b;
            sum=sum+b;
        }
        else if(a.compare("report")==0)
            cout<<sum<<endl;
    }
    return 0;
}
