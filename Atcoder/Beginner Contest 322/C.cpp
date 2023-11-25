#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int last = 0;
	while(m--)
	{
		int a;
		cin >> a;
		for(int day = last + 1; day <= a; day++)
		{
			cout << a - day << endl;
		}
		last = a;
	}
	
}
