#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
    int a[6]={0,1,2,3,4,5};
    for (int t = 0; t < 6; t++)
    {
        cout<<a[++t];
    }
    return 0;
}