//accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        int maximum=0,result=0;;
        for(int j=a;j<=b;j++)
        {
            int counter=0;
            for(int k=1;k<=sqrt(j);k++)
            {
                if(j%k==0)
                {
                    counter++;
                    if(j/k!=k)
                        counter++;
                }
                if(maximum<counter)
                {
                    maximum=counter;
                    result=j;
                }
            }
        }
        cout<<"Between "<<a<<" and "<<b<<", "<<result<<" has a maximum of "<<maximum<<" divisors."<<endl;
    }
    return 0;
}
