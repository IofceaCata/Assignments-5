#include<iostream>
using namespace std;
int main(){
    int k,i,j;
    cin>>k;
    for(i=1;i<=k;i++)
        for(j=1;j<=i;j++)
            cout<<j<<" , ";
}
