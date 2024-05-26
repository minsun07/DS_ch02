#include <stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

int push(int data) {
	if (top == SIZE - 1) {
		printf("stack is full!\n");
		return -1;
	}
	stack[++top] = data;
	return 0;
}

int pop(void) {
	if (top == -1) {  //underflow√≥∏Æ
		printf("stack is empty!\n");
		return -1;
	}
	return stack[top--];
}

int main(void) { 
	push(10);
	push(20);
	push(30);
	printf("%d\n", pop());  //30
	printf("%d\n", pop());  //20
	printf("%d\n", pop());  //10
	printf("%d\n", pop());  //"stack is empty!" , -1
	return 0;
	
}