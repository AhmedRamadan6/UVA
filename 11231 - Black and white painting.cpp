#include <iostream>

using namespace std;

int main()
{
    int n,m,c;
    while(cin >> n >> m >> c,n)
    {
        if(c==1)
        {
            cout << ((n-7)*(m-7)+1)/2<< "\n";
        }
        else
            cout << (n-7)*(m-7)/2 << "\n";
    }
    return 0;
}
