#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int points = 0;
        string s[10];
        for (int i = 0; i < 10; i++) cin >> s[i];
        for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        if (s[i][j] == 'X') points =points+min({i,j,9-i,9-j})+1;
        cout<<points<<endl;
    }
    return 0;
}
