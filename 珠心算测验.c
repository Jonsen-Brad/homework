#include<stdio.h>
int main(){ 
    int n;
    int num[105];
    int i,j,k,t;
    int out = 0;
    int tmp = 0;
    scanf("%d",&n);
    for(i = 0;i < n;i++){ 
        scanf("%d",&num[i]);
    }
    
    for(i= 0;i<n;i++){ 
    	if(i != 0){
	
        	t = num[i];
        	num[i] = num[0];
        	num[0] = t;
		}
	    for(j = 1;j<n;j++){
		
            for(k = j+1;k<n;k++){ 
                if(num[0] == num[j] + num[k]){
                    out ++;	
                    tmp = 1;
				}
                
            }
            if(tmp == 1){
        			tmp = 0;
        			break;
				}
        }
        
        
            
    }
    printf("%d",out);
    
}
