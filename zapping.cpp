#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(true)
    {
        cin>>a;
        cin>>b;
        if(a==-1 && b==-1)
            break;
        else
        {
            if(a==0 && b==99)
                cout<<"1"<<endl;
            else if(a==99 && b==0)
                cout<<"1"<<endl;
            else if(a==b)
                cout<<"0"<<endl;
            else if(a>b)
            {
                if(((99-a)+b)<(a-b))
                    cout<<((99-a)+b)+1<<endl;
                else
                    cout<<a-b<<endl;
            }
            else if(b>a)
            {
                if(((99-b)+a)<(b-a))
                    cout<<((99-b)+a)+1<<endl;
                else
                    cout<<b-a<<endl;
            }
            }
    }
    return 0;
}
