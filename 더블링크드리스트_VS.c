#include <stdio.h>
#include <stdlib.h >


struct node {
	char* name;
	struct node* next;
	struct node* prev;

};

typedef struct node Node;
Node* head;
Node* tail;
int size = 0;



int main(){
	
	head = (Node*)malloc(sizeof(Node));
	head->name = "YCM";
	head->prev = NULL;
	
	Node* q = (Node*)malloc(sizeof(Node));
	q->name = "YTY";
	q->prev = head;
	head->next = q;


	Node* tail = (Node*)malloc(sizeof(Node));
	tail->name = "JIJ";
	tail->prev = q;
	q->next = tail;
	tail->next = NULL;


	//printf("%s\n%s\n%s\n", head->name, q->name, tail->name);

	Node* p = head;
	while(p!=NULL){
		printf("%s\n", p->name);
		p = p->next;
	}



	//2��°�� 3��° ���̿� �߰��� ����.
	Node* r = (Node*)malloc(sizeof(Node));
	r->name = "YM";
	r->prev = q;
	r->next = tail;
	q->next = r;
	tail->prev = r;

	//printf("%s\n%s\n%s\n%s\n", head->name, q->name, tail->name);
	printf("\n");
	
	p = head;
	while (p != NULL) {
		printf("%s\n", p->name);
		p = p->next;
	}


	//1��° ��带 ������ ����.
	printf("\n");
	
	Node* tmp;
	tmp = head;
	head = head->next;
	free(tmp);

	p = head;
	while (p != NULL) {
		printf("%s\n", p->name);
		p = p->next;
	}



	return 0;

}









/*
void add_first(char* item, Node* head) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = "Ann";
	tmp->next = head;
	head = tmp;

}
*/
