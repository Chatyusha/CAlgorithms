/*
Copyright (c) 2021 Chatyusha
Released under the MIT license
https://opensource.org/licenses/mit-license.php
*/

#include <iostream>
using namespace std;

int gcm (int a, int b)
{
    while (true)
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
            int c=a;
            a=b;
            b=c%b;
        }
        /* code */
    }
    
}
