#include<iostream>
#include<string.h>
using namespace std;
int b[100];
int main(){
    int n,i;
    char a[100];
    cin>>a;
    for(i=1;i<strlen(a);i++)
        if(a[i]=a[i-1]){
            b[i]=1;
            b[i-1]=1;
        }
    for(i=0;i<strlen(a);i++)
        cout<<b[i];
}
