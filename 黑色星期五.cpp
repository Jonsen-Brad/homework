#include<iostream>
using namespace std;
bool isrun(int year){
    if(year%100==0)
        if(year%400==0)
            return true;
        else
            return false;
    else
    {
        if(year%4==0)
            return true;
        else
            return false;
    }
}
int day(int month,int year ){
    int i=0;
    int days;
    if(isrun(year))
        i=1;
    switch (month){
    case 1:days = 31;break;
    case 2:days = 28+i;break;
    case 3:days = 31;break;
    case 4:days = 30;break;
    case 5:days = 31;break;
    case 6:days = 30;break;
    case 7:days = 31;break;
    case 8:days = 31;break;
    case 9:days = 30;break;
    case 10:days = 31;break;
    case 11:days = 30;break;
    case 12:days = 31;break;
    }
    return days;
}
int main(){
    int n;
    int i=0;
    cin>>n;
    int year=1900;
    int week=1;
    int month =1;
    int ans[8]={0};
    while (i!=n)
    {
        
        if(month == 13)
            month = 1;
        if(week==8)
            week = 1;
        ans[(week+5)%7]++;
        week=(week+day(month,i+year))%7;
        month++;
        if(month==13)
            i++;
    }
    cout<<ans[6]<<' ';
    cout<<ans[0]<<' ';
    for(int j=1;j<6;j++)
        cout<<ans[j]<<' ';
    
    

}