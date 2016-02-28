#include<iostream>
#include<string>
#include"Scan.h"
#include"Print.h"
#include<stdlib.h>
using namespace std;
int main ()
{
    Scan in;
    string input;
    cin>>input;
    in.ToStringQueue(input);
    if(in.m_iFlag <= 10)
    {
        Print out;
        out.printQueue(in.q, in.m_iLength);
    }
    system("pause");
    return 0;
}