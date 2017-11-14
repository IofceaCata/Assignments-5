#include<iostream>
using namespace std;

int main(){
    int a,b,n,ok=1,r,c,d,i;
    cin>>n>>a>>b>>c;
    r=b-a;

    for(i=0;i<n-3;i++){
        cin>>d;
        if(d-c!=r)
            ok=0;
        c=d;
    }
    if(ok==1)
        cout<<"da";
    else
        cout<<"nu";
}
