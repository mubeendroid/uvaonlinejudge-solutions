#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,mod,f,sum,k,t,g;
    int m[100],p[200]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b=0;
        f=0;
        c=a;
        t=1;
        g=0;
        p[0]=a;
        while(true)
        {
            sum=0;
            k=0;
            while(c!=0)
            {
                mod=c%10;
                m[k]=mod;
                k++;
                c=c/10;
            }
            for(int i=0;i<k;i++)
                sum=sum+(m[i]*m[i]);
            b=sum;
            c=sum;
            for(int i=1;i<t;i++)
            {
                if(p[i]==c)
                {
                    g=1;
                    break;
                }
            }
            if(g==1)
                break;
            p[t]=sum;
            t++;
            if(sum==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Case #"<<i+1<<": "<<a<<" is a Happy number."<<endl;
        else if(f==0)
            cout<<"Case #"<<i+1<<": "<<a<<" is an Unhappy number."<<endl;
    }
    return 0;
}
