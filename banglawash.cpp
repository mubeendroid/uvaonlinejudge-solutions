#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,counter1,counter2,counter3,counter4;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        cin>>a;
        counter1=0;
        counter2=0;
        counter3=0;
        counter4=0;
        for(int j=0;j<a.length();j++)
        {
            if(a[j]=='B')
                counter1++;
            else if(a[j]=='W')
                counter2++;
            else if(a[j]=='A')
                counter3++;
            else if(a[j]=='T')
                counter4++;
        }
        if(counter3==t)
            cout<<"Case "<<i<<": "<<"ABANDONED"<<endl;
        else if(counter4>0 && counter1==0 && counter2==0)
            cout<<"Case "<<i<<": "<<"DRAW "<<counter1<<" "<<counter4<<endl;
        else if(counter1==0 && counter4==0)
            cout<<"Case "<<i<<": "<<"WHITEWASH"<<endl;
        else if(counter2==0 && counter4==0)
            cout<<"Case "<<i<<": "<<"BANGLAWASH"<<endl;
        else if(counter2>counter1)
            cout<<"Case "<<i<<": "<<"WWW "<<counter2<<" - "<<counter1<<endl;
        else if(counter1>counter2)
            cout<<"Case "<<i<<": "<<"BANGLADESH "<<counter1<<" - "<<counter2<<endl;
        else if(counter1==counter2)
            cout<<"Case "<<i<<": "<<"DRAW "<<counter1<<" "<<counter4<<endl;
    }
    return 0;
}
