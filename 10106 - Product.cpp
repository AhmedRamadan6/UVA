#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    while(cin >> s1)
    {
        cin >> s2;
            int product[700]={0};

        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s1.size();i++)
            for(int j=0;j<s2.size();j++)
            product[i+j] += (s1[i]-'0')*(s2[j]-'0');
            int x=0;
        for(int i=0;i<699;i++)
        {
            if(product[i]>10)
            {
                x= product[i]/10;
                product[i]%=10;
                product[i+1]+=x;
            }
        }
        int i=700;
        while(--i)
        {
            if(product[i]>0)
                break;
        }

        while(i>=0)
        {
            cout << product[i];
            i--;
        }
            cout << endl;

    }
    return 0;
}
