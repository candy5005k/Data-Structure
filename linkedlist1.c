#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;

int main()
{
	NODE obj;

	NODE *ptr = (NODE *)malloc(sizeof(NODE));

	obj.data = 11;
	obj.next = NULL;


	ptr -> data = 11;
	ptr -> next = NULL;



	return 0;
}
