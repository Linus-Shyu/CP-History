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
    int a,b,c,d,m;
    cin >> a >> b >> c >> d >> m;
    int ans = 0;
    int easy = c * 5;
    int hard = d * 20;
    if(easy > m)
    {
        ans = easy + (20 * d) - ((b - d) * 20);
        if(ans > 0) cout << ans;
        if(ans < 0 || ans == 0) cout << "0";
    }       
    if(easy <= m)
    {
        ans = easy - (b - d) * 20;
        if(ans > 0) cout << ans;
        if(ans < 0 || ans == 0) cout << "0";
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