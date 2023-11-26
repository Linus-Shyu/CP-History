#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	string s,t;
	cin >> n >> m >> s >> t;
	bool prefix = (t.substr(0,n) == s);
	bool suffix = (t.substr(m - n,n) == s);
	if (prefix && suffix) cout << 0 << endl;
    else if (prefix) cout << 1 << endl;
    else if (suffix) cout << 2 << endl;
    else cout << 3 << endl;  
	return 0; 
}
