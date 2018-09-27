#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=3,c=5,d=1,e=0,f=0,g=0;
    int ugly[1500];
    ugly[0]=1;
    for(int i=1;i<1500;i++)
    {
       d=min(a,min(b,c));
       ugly[i]=d;
       if(d==a)
       {
           e++;
           a=ugly[e]*2;
       }
       if(d==b)
       {
           f++;
           b=ugly[f]*3;
       }
       if(d==c)
       {
           g++;
           c=ugly[g]*5;
       }
    }
    cout<<"The 1500'th ugly number is "<<d<<"."<<endl;
    return 0;
}
