#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,h,m;
    while(true)
    {
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)
            break;
        h=c-a;
        m=d-b;
        if(m<0)
        {
            m=m+60;
            h--;
        }
        if(h<0)
            h=h+24;
        cout<<(h*60)+m<<endl;
    }
    return 0;
}
