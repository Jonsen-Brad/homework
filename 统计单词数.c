//统计单词数
#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,n=0;
    char article[1000001]={0};
    char word[11]={0};
    int s,ss;
    int rec  = 0;
    //input data
    gets(word);
    gets(article);

    strcat(word," ");
    strcat(article," ");
    // change lower
    for(i=0;word[i]!='\0';i++){
        if(word[i] >= 'a'){
            word[i] -= 'a'-'A';//a\Userss
            
        }
    }
    for(i=0;article[i]!='\0';i++){
        if(article[i] >= 'a'){
            article[i] -= 'a'-'A';
        }
    }
    for(i=0;article[i]!='\0';i++){
        if(article[i]==' '){
            s = 1;
            for(j = n,k = 0;word[k]!='\0';j++,k++){
                if(word[j]==article[k]){
                    s *= 1;
            
                }
                else{
                    s *= 0;
                }
            }
                if(1==s){
                    ss ++;
                }
                if(ss ==1 && s == 1)
                    rec = n;
                n = i;
                n++;
        
        }

    }
    if (ss == 0){
        ss  = -1;
        printf("%d",ss);
    }
    else if(ss>=1){
        printf("%d %d",ss,rec);
    }
    return 0;
}