#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int deci=0,bin,base=1,rem,num;
    cout<<"Enter the binary number:";
    cin>>bin;
    num = bin;
    while(bin != 0)
    {
        rem = bin % 10;
        deci = deci + rem*base;
        bin = bin / 10;
        base = base*2;
    }
    cout<<"Decimal eqivalent of the binary number "<<num<<" is: "<<deci;        
    return 0;
}