#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int digits[]={1,2,3};
    int n=3;
    int digit=0;
    for(int i=0;i<n;i++)
    {
        digit=digit+(digits[i]*pow(10,n-i-1));
    }
    digit++;
    cout<<digit<<endl;
    int naya[n+1];
    for(int i=0;i<n;i++)
    {
        naya[i]=digit % 10*pow(10,n-i-2);
    }
    for(int i=0;i<n;i++) cout<<naya[i];
    return 0;
}