#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int age;
	struct Node* next;
};

Node* head;

int main(void)
{
	head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));
	node1->age = 300;
	Node* node2 = (Node*)malloc(sizeof(Node));
	node2->age = 500;
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printf("%d\n\n",head);
	printf("%d\n\n", node1);
	printf("%d\n\n", node2);

	
	Node*  cur = head->next;
	
	while (cur != NULL) {
		printf("%d\n\n", cur);
		printf("%d",cur->age);
		cur = cur->next;
	}

	return 0;
}
