#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct Node {
	int age;
	struct Node* next;
};

Node* head;

void add1(Node *root, int age)
{
	Node* node= (Node*)malloc(sizeof(Node));
	node->age = age;
	node->next = root->next;
	root->next = node;
}

void add2(Node* root, int age) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->age = age;
	
	if (root->next == NULL) {
		
		add1(root, age);

	}
	else {
		Node* cur = root->next;
		while (cur->next  != NULL) {
			cur = cur->next;
		}
		node->next = NULL;
		cur->next = node;
	
	}
}

int main(void)
{
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	printf("위=종료   아래=추가\n");
	int stop = 1;
	while (stop) {
		int key = 0;
		key = _getch();
		if (key == 80)
		{
			int a = 0;
			scanf_s("%d", &a);
			add2(head, a);
		}
		else if (key == 72)
		{
			stop = 0;
		}
	}
	Node* cur = head->next;
	printf("-------------------");
	while (cur != NULL) {
		printf("%d\t", cur->age);
		cur = cur->next;
	}

	return 0;
}

