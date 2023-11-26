#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string s;
	int ans = -1;
	cin >> n >> s;
	for(int i = 0; i < n + 2; i ++)
	{
		if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
		{
			ans = i + 1;
			break;  
		}
	}
	cout << ans;
	return 0;
}

