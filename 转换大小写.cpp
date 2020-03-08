#include<iostream>
using namespace std;
int main(int argc,char*argv[]){
    char origin[100];
    for(int i=0;origin[i]!='\n';i++){
        cin>>origin[i];
        
        if(origin[i]>='A'&&origin[i]<='Z')origin[i]+=('a'-'A');
        if(origin[i]>='a'&&origin[i]<='z')origin[i]-=('a'-'A');
    }
    for(int i=0;origin[i]!='\n';i++)
        cout<<origin[i];

}
