#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        bool found=false;
        int x0,y0,r;
        cin>>x0>>y0>>r;
        for(int x=-r;x<=r && !found;x++)
        {
            for(int y=-r;y<=r;y++)
            {
                if(x*x+y*y==r*r)
                {
                    cout<<x0+x<<" "<<y0+y<<endl; found=true; break;
                }
            }
        }
    }
    return 0;
}