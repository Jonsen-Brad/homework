#include<iostream>
using namespace std;
int temp(int num){
    int s;
    switch(num){
        case 0:s=6;break;
        case 1:s=2;break;
        case 2:s=5;break;
        case 3:s=5;break;
        case 4:s=4;break;
        case 5:s=5;break;
        case 6:s=6;break;
        case 7:s=3;break;
        case 8:s=7;break;
        case 9:s=6;break;

    }
    return s;
}
int main(){
    int n;
    int ans=0;
    cin>>n;
    int total = n-4;
    int i,j,k;
    for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
            for(k=i+1;k<=9;k++){
                if(i+j==k)
                    if(temp(i)+temp(j)+temp(k)==total)
                        ans++;

            }
        }
    }
    cout<<ans<<endl;

    return 0;
}