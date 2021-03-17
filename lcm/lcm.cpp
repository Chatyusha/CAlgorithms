/*
Copyright (c) 2021 Chatyusha
Released under the MIT license
https://opensource.org/licenses/mit-license.php
*/

#include <iostream>
using namespace std;

int gcm (int a, int b)
{
    if(a<b){
        int c=a;
        a=b;
        b=c;
    }
    if(a%b == 0)
    {
        return b;
    }else
    {
        return gcm(b,a%b);
    }
}

int lcm (int a, int b)
{
    return (a / gcm(a,b))*b;
}
int main(int argc, char const *argv[])
{
    printf("%d\n",lcm(18,24));
    return 0;
}
