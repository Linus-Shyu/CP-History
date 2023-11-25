#include <iostream>
#include <cmath>
using namespace std;
int a,b;
long long ans;
int main()
{
    cin >> a >> b;
    ans = pow(a,b) + pow(b,a);
    cout << ans;

}