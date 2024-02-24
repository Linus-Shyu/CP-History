#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    string a;
    char ans_A = 'A',ans_B = 'B';
    cin >> t;
    for(int i = 1; i < t + 1; i++)
    {
        cin >> a;
        int A = std::count(a.begin(), a.end(),ans_A);
        int B = std::count(a.begin(), a.end(),ans_B);
        if(A > B)   cout << "A" << endl;
        if(B > A)   cout << "B" << endl;
    }
    return 0;
}