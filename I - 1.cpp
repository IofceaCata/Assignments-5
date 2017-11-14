#include<iostream>
using namespace std;

int main(){
    int a[100],n,i;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=1;i<n-1;i++){
        if((a[i-1]+a[i+1])/2==a[i])
            cout<<a[i];
    }


}
