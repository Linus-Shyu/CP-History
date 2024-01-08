#include <iostream>
using namespace std;
 
int T;
int a,b,c;
 
int main()
{
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        if(a == b)  cout << c << endl;
        if(a == c)  cout << b << endl;
        if(b == c)  cout << a << endl;
    }
    return 0;
}