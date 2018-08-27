#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    while(true)
    {
        cin>>n;
        f=0;
        if(n==0)
            break;
        for(int i=1;i<=sqrt(n);i++)
        {
            for(int j=0;j<=i-1;j++)
                if((i*i*i-j*j*j)==n)
                {
                    cout<<i<<" "<<j<<endl;
                    f=1;
                    break;
                }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"No solution"<<endl;
    }
    return 0;
}
