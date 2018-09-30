#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    while(cin>>n)
    {
        a=n;
        if(n==2)
            a=3;
        while(n>=3)
        {
            a=a+n/3;
            n=(n/3)+(n%3);
            if(n==2)
                a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
