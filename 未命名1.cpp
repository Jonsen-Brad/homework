#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef struct NODE{
		int data;
		struct NODE* next;
	}node;
node *create(int n){
	node*head;
	node*pf,*pb;
	int i;
	for(i=0;i<=n;i++){
		pb=(node*)malloc(sizeof(node));
		pb->data=rand()%100;
		if(i==0)
		pf=head=pb;
		else
		pf->next=pb;
		pb->next=NULL;
		pf=pb;
	}
	return head;
}	
int  fastsearch(node*head){
	node*search,*mid;
	search=mid=head;
	/*while(search->next!=NULL){
		if(search->next->next==NULL)
		search=search->next;
		else{
			search=search->next->next;
			mid=mid->next;
			printf("%d %d\n", search->data, mid->data);
		}
	}*/
	while (search->next!=NULL) {
  	search=search->next;
  	if (search->next!=NULL) {
    	search=search->next;
 	 }
 	 mid=mid->next;

	}
	printf("mid_is %d",mid->data);
}
int main(){
	int a,b,i;
	node *head,*p;
	head=create(N);
	p=head->next;
	for(i=1;i<N+1;i++){
		printf("%5d",p->data);
		if(i%5==0)
		printf("\n");
		p=p->next; 
	} fastsearch(head);
	//printf("%d",);
	return 0;
}
