#include<bits/stdc++.h>
using namespace std;
string s;
int check_leap_year(int x)
{
    int a=0;
    for(int i=0;i<s.length();i++)
        a=((s[i]-'0')+a*10)%x;
    if(a==0)
        return 0;
    return 1;
}
int main()
{
    int f,g,counter=0;
    while(cin>>s)
    {
        f=0,g=0;
        if(counter>0)
            cout<<endl;
        counter++;
        if((check_leap_year(4)==0 && check_leap_year(100)!=0) || check_leap_year(400)==0)
        {
            cout<<"This is leap year."<<endl;
            f=1;
            g=1;
        }
        if(check_leap_year(15)==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            f=1;
        }
        if(check_leap_year(55)==0 && g==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            f=1;
        }
        if(f==0)
            cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
