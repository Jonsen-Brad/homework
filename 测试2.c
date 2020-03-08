#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef struct NUDE{
		int data;
		struct NUDE* next;
	}nude;
nude *create(int n){
	nude*head;
	nude*pf,*pb;
	int i;
	for(i=0;i<n;i++){
		pb=(nude*)malloc(sizeof(nude));
		pb->data=rand()%100;
		if(i==0)
		pf=head=pb;
		else
		pf->next=pb;
		pb->next==NULL;
		pf=pb;
	}
	return head;
}	
int fastsearch(nude*head){
	nude*search,*mid;
	search=mid=head;
	while(search->next!=NULL){
		if(search->next->next!=NULL){
		search=search->next->next;
		mid=mid->next;
		}
		else
		search=search->next;
	}
	return mid->data;
}
int main(){
	int a,b,i;
	nude *head,*p;
	head=create(N);
	p=head->next;
	for(i=0;i<N;i++){
		printf("%5d",p->data);
		p=p->next; 
	} 
	a=fastsearch(head);
	printf("mid is %d",a);
	return 0;
}
