#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct node {
		char data;
		struct node* link;
	};

	char input = ' ';
	struct node* head, * p; 
	head = (struct node*)malloc(sizeof(struct node));
	p = head;
	p->data = input;
	p->link = NULL;
	printf("�������Է� : ");
	scanf_s("%c", &input, 1);  //_s�� ���� �������� ���̸� ����Ѵ�. => 1
	getchar(); //���� 1���� �Է¹ޱ����� ����ϴ� �Լ� // c������ �����͸� �ް� enter���� ���� �޴´�. �׷��� enter���� �����־���Ѵ�.

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("�������Է� : ");
		scanf_s("%c", &input, 1);
		getchar();
	}
	p = head->link; //��1

	while (p != NULL) {
		printf("%c", p->data);
		if (p->link != NULL)
			printf("-");
		p = p->link;
	}
	printf("\n");
}
