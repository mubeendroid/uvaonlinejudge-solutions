#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,counter,maxcounter;
    while(cin>>a>>b)
    {
        cout<<a<<" "<<b;
        if(a>b)
            swap(a,b);
        maxcounter=0;
        for(int i=a;i<=b;i++)
        {
            c=i;
            counter=1;
            while(c!=1)
            {
                if(c%2!=0)
                    c=(3*c)+1;
                else
                    c=c/2;
                counter++;
            }
            if(counter>maxcounter)
                maxcounter=counter;
        }
        cout<<" "<<maxcounter<<endl;
    }
    return 0;
}
