#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,age;
    char ch1,ch2,ch3,ch4;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>ch1>>b>>ch2>>c>>d>>ch3>>e>>ch4>>f;
        if(d>a)
        {
            a=a+30;
            e=e+1;
        }
        if(e>b)
        {
            b=b+12;
            f=f+1;
        }
        age=c-f;
        if(age<0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if(age>130)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<i<<": "<<age<<endl;
    }
    return 0;
}
