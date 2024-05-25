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
	printf("데이터입력 : ");
	scanf_s("%c", &input, 1);  //_s를 쓰면 데이터의 길이를 써야한다. => 1
	getchar(); //문자 1개를 입력받기위해 사용하는 함수 // c에서는 데이터를 받고 enter값도 같이 받는다. 그래서 enter값을 없애주어야한다.

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("데이터입력 : ");
		scanf_s("%c", &input, 1);
		getchar();
	}
	p = head->link; //별1

	while (p != NULL) {
		printf("%c", p->data);
		if (p->link != NULL)
			printf("-");
		p = p->link;
	}
	printf("\n");
}
