#include <iostream>
#include <cstdio>

#define ll long long
#define ld long double
#define ull unsigned long long

using namespace std;
string s;
void solve()
{
	cin >> s;
	int ans = 0;
	for(int i = 1; i <= 15; i += 2)
	{
		if(s[i] % 2 == 0) ans ++;
	}
	if(ans == 8) cout << "Yes";
	else cout << "No";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}