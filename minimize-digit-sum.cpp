#include</stdc++.h>
using namespace std;

int sum(n,i)
{
    temp = 0; 
    while(n>0)
    {
        temp+=n%i;
        n=n/i;
    }
    return temp;
}

int minbase(n, l, r)
{
    
}