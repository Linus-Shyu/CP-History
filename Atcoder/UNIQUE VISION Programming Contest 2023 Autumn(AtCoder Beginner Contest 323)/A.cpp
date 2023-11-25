#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	cin >> s;
	if(s[1] % 2 == 0 && s[3] % 2 == 0 && s[5] % 2 == 0 && s[7] % 2 == 0 && s[9] % 2 == 0 && s[11] % 2 == 0 && s[13] % 2 == 0 && s[15] % 2 == 0) cout << "Yes";
	else cout << "No";
	return 0;
}
