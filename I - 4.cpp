#include<iostream>
using namespace std;
int main(){
    int n,b,m=0,p=1,c;
    char d[100] = "0123456789ABCDEF",res;
    cin>>n;
    while(n!=0){
        c=n%10;
        m=m+c*p;
        p=p*2;
        n=n/10;
    }

    while(m > 0)
    {
        res = d[m % 16] + res;
        m /= 16;
    }
    cout<<res;
}
