#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n>>a>>b;
   int conta=0,contb=0;
   while(n%a!=0)
   {
       contb++;
       n=n-b;
   }
   conta=n/a;
   for(i=1;i<=conta;i++)
    cout<<a<<" ";
   for(i=1;i<=contb;i++)
    cout<<b<<" ";
}
