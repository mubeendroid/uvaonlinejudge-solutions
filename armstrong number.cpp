#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int a,b,mod,sum,c,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        b=a;
        c=a;
        d=0;
        sum=0;
        while(c>0)
        {
            d++;
            c=c/10;
        }
        while(b!=0)
        {
            mod=b%10;
            sum=sum+pow(mod,d);
            b=b/10;
        }
        if(sum==a)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }
    return 0;
}
