#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a1,b1,c1,sum1,a2,b2,c2,sum2;
    while(true)
    {
        cin>>n;
        a1=0;
        a2=0;
        b1=1;
        b2=1;
        sum1=0;
        sum2=0;
        if(n==-1)
            break;
        if(n==0)
        {
            cout<<"0 1"<<endl;
            continue;
        }
        else if(n==1)
        {
            cout<<"1 2"<<endl;
            continue;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                c1=a1+b1;
                a1=b1;
                b1=c1;
                sum1=sum1+c1;
            }
            for(int i=1;i<=n-1;i++)
            {
                c2=a2+b2;
                a2=b2;
                b2=c2;
                sum2=sum2+c2;
            }
        }
        cout<<sum2+1<<" "<<sum1+1<<endl;
    }
    return 0;
}
