#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,sum1,c,k;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum1=1;
        k=2;
        for(int i=0;i<3;i++)
        {
            b=((int)a[i]-65)*pow(26,k);
            sum1=sum1+b;
            k--;
        }
        int q=0;
        char b[4];
        for(int i=4;i<=7;i++)
        {
            b[q]=a[i];
            q++;
        }
        c=atoi(b);
        if(abs(c-sum1)<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}
