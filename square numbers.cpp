#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,counter;
    while(true)
    {
        cin>>a;
        cin>>b;
        counter=0;
        if(a==0 && b==0)
            break;
        for(int i=a;i<=b;i++)
        {
            c=(int)sqrt(i);
            if(sqrt(i)-c==0)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
