#include<stdio.h>
#include<math.h>
fun(int n){

    int i,j;
	float t=0;		//t=sqrt(i)
	float s=0;    //s->sum
	for(i=3;i<=n;i++){

        for(j=sqrt(i);j>1;j--){

            if(i%j==0)	//if i is not prime number
			break;
		}
		if(j==1){		//if i is prime number

            t=sqrt(i);	//sum square root of i
			s+=t;    //sum
		}
		
	}
	printf("%f",s);
}
main(){
	int n;
	scanf("%d",&n);

    fun(n);
}
