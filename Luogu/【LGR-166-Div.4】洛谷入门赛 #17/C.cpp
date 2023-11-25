#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <vector>
#include <stack>
#include <algorithm>

typedef long l;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

template<class T> void read(T &x) {
    x = 0; T f = 1; char c = getchar();
    for (; !isdigit(c); c = getchar()) if (c == '-') f = -1;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - 48; x *= f;
}

template<class T> void write(T x) {
    if (x > 9) write(x / 10); putchar(x % 10 + 48);
}

template<class T> void print(T x,char ed = '\n') {
    if(x < 0) putchar('-'), x = -x; write(x), putchar(ed);
}

void solve()
{
    int ansa = 0;
    int ansb = 0;
    int ansc = 0;
    int a;
    for(int i = 1; i <= 8; i++)
    {
        cin >> a;
        if(a >= 41)
        {
            ansa ++; 
            if(ansa >= 4)
            {
                cout << "3";
                return ;
            }    
        }  
        if(a >= 63)
        {
            ansb ++;
            if(ansb >= 4)
            {
                cout << "8";
                return ;
            }
        }  
        if(a >= 118)
        {
            ansc ++;
            if(ansc >= 1)
            {
                cout << "10";
                return ;
            }
        } 
        if(a < 61 && a < 41 && a < 118)
        {
            cout << "1";
            return;
        }
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    while(T--)
    {
        solve();
    }
    return 0;
}