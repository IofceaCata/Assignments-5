#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i;
    char daysOfWeek[32];
    cin>>daysOfWeek;
    for(i=0;i<3;i++){
        cout<<daysOfWeek[i];
    }
    cout<<'\n';



    for(i=24;i<34;i++)
        cout<<daysOfWeek[i];
    cout<<'\n';


    for(i=6;i<10;i++)
        cout<<daysOfWeek[i];
    for(i=29;i<32;i++)
        cout<<daysOfWeek[i];
    cout<<'\n';

    cout<<strlen(daysOfWeek)-1;
}
