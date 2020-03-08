#include<stdio.h>
#define N 13 
int main(){ 
    char num[15];
    int i,j = 0,s = 0;
    char temp;
    scanf("%s",num);
    for(i = 0;i < 11;i++){ 
        if(num[i] != '-'){ 
            j ++;
            s = s + (num[i]-'0') * j;
        }

    }
    if(s % 11 == 10)
      temp  = 'X';
    else 
        temp = (s % 11 + '0');

    if( temp == num[12] )
            printf("Right\n");
    else{ 
        for(i = 0;i< 12;i++)
            printf("%c",num[i]);
                
            printf("%c\n",temp);
    }
        
}
