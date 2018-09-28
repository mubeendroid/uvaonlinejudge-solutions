#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum;
    string a;
    while(true)
    {
        cin>>a;
        if(a=="0")
            break;
        sum=0;
        int b=a.length();
        for(int i=0;i<=a.length()-1;i++)
        {
            m=(int)a.at(i)-48;
            n=m*(pow(2,b)-1);
            sum=sum+n;
            b--;
        }
        cout<<sum<<endl;
    }
    return 0;
}
