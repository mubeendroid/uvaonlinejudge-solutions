#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,b,c;
    float k,maximum,minimum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        k=sqrt((a*a)+(b*b));
        if(k<=c)
            minimum=c-k;
        else
            minimum=c;
        maximum=c+k;
        cout<<setprecision(2)<<fixed<<minimum<<" "<<setprecision(2)<<fixed<<maximum<<endl;
    }
    return 0;
}
