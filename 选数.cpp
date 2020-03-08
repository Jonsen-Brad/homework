#include<iostream>
using namespace std;

int n,k;
long long ans = 0;
    int numbers[21]={0};
bool Isprimenumber(int n){
    int i;
    for( i=n/2;i>1;i --)
        if(n%i==0 )
            return false;
    
    return true;
    
}

void f(int j,int sum,int newsta){
    if(j == k){
        if(Isprimenumber(sum))
            ans ++;
        return ;
    }
    for(int i = newsta;i < n;i++)
        f(j+1,sum+numbers[i],i+1);
    return ;
}
int main(){
    
    //输入数据
    cin >> n >> k;
    
    for(int i = 0;i < n; i++)
    	cin>>numbers[i];
    
    f(0,0,0);
    printf("%d\n",ans);
    return 0 ;

}