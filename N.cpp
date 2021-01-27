#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

typedef struct Fraction 
{
    int Tu;
    int Mau;
}PS;

PS Input ()
{
    PS Temp;
    int Tu;
    int Mau;
    cin>>Tu;
    cin>>Mau;
    if (Mau == 0)
    {
        Temp.Mau=0;
        Temp.Tu=Tu;
        return Temp;
    }
    else 
    {
        int GCD;
        if (Mau<0&&Tu<0)
        {
            GCD =__gcd(Tu,Mau); // Hàm lấy UCLN
        }
        else
             GCD =fabs(__gcd(Tu,Mau)); // Hàm lấy UCLN
        Tu=Tu/GCD;
        Mau=Mau/GCD;
        Temp.Mau=Mau;
        Temp.Tu=Tu;
        return Temp;
    }
}

void ConvertAndOutput (PS Array)
{
        if (Array.Mau==0)
            cout<<"\nKhong thoa yeu cau bai toan\n";
        else if (Array.Tu==0)
            cout<<Array.Tu;
        else 
        {
            if (Array.Mau==1)
                cout<<Array.Tu<<"\n";
            else if (Array.Mau==-1)
                cout<<-Array.Tu<<"\n";
            else 
                cout<<Array.Tu<<"/"<<Array.Mau<<"\n";
        }
}

int main()
{
    int n;
    cin>>n;
    PS *Array = new PS [n];
    for (int i = n-1; i>=0; i--)
    {
        Array[i]=Input();
    }
    cout<< "\nKet qua\n";
    for (int i = 0; i<n;i++)
    {
       ConvertAndOutput(Array[i]);
    }
}