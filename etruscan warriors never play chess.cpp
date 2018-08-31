#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        std::cout<<std::fixed;
        cout<<long(floor((sqrt(1+8*a)-1)/2))<<endl;
    }
    return 0;
}
