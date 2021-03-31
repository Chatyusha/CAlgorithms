#include <iostream>
#define int long long
// ax + by = gcd(a,b)の解
int extGCD(int a,int b,int &x,int &y)
{
    // 返り値はgcd(a,b)
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    else
    {
        int d = extGCD(b,a%b,y,x);
        y = y - a/b * x;
        return d;
    }
}