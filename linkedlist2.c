#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
// juna nav   		  navin nav
//
//struct node 			NODE
//struct node*			PNODE
//



struct node
{
	int data;
	NODE *next;

};



int main()
{
	NODE obj;

	PNODE ptr = (PNODE)malloc(sizeof(NODE));

	obj.data = 11;
	obj.next = NULL;


	ptr -> data = 11;
	ptr -> next = NULL;



	return 0;
}
