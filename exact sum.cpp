//accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,f,min1,sub;
    while(cin>>a)
    {
        int b[a];
        int min2[2]={0,INT_MAX};
        for(int i=0;i<a;i++)
            cin>>b[i];
        cin>>c;
        for(int i=0;i<a;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(b[i]+b[j]==c && (abs(b[i]-b[j])<abs(min2[0]-min2[1])))
                {
                    min2[0]=b[i];
                    min2[1]=b[j];
                }
            }
        }
        if(min2[0]<min2[1])
            cout<<"Peter should buy books whose prices are "<<min2[0]<<" and "<<min2[1]<<"."<<endl<<endl;
        else
            cout<<"Peter should buy books whose prices are "<<min2[1]<<" and "<<min2[0]<<"."<<endl<<endl;
    }
    return 0;
}
