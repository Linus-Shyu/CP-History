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
    int n;
    int ans,ans_two = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        if(a > 10)  continue;
        if(ans < b)
        {
            ans = b;
            ans_two = i + 1; 
        }
    }
    cout << ans_two << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}