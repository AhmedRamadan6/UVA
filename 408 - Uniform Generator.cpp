#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int step , mod;
    int z=0;
    while (cin >> step >> mod)
    {
        int x=0,y=0;
        bool flag=0;
    y=(z+step)%mod;
        for(int i=0;i<mod;i++)
        {
            x = (z+step)%mod;
            if(x==y && i!=0)
            {
                flag=1;
                break;
            }
            z=x;
        }
        cout << setw(10) << step << setw(10) << mod << "    ";
        if(!flag)
            cout << "Good Choice\n\n";
        else
            cout << "Bad Choice\n\n";
    }


    return 0;
}
