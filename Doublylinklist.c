#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;			//*
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{
	printf("Data from limked list :\n");
	while(head !=NULL)
	{
		printf("|%d|<=>",head -> data);
		head = head -> next;
	}

	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt=0;

	while(head !=NULL)
	{
		iCnt++;
		head = head->next;
	}

	return iCnt;
}

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));		//20byte size

	newn-> data = no;
	newn->next = NULL;
	newn->prev = NULL;		//*

	if(*head ==NULL)	//LL is empty
	{
		*head = newn;
	}
	else				//LL contain atleat one node
	{
		newn->next = newn;
		(*head) = prev->newn;
		*head =newn;
	}

}
void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));		//20byte size

	newn-> data = no;
	newn->next = NULL;
	newn->prev = NULL;		//*

	if(*head ==NULL)	//LL is empty
	{
		*head = newn;
	}
	else				//LL contain atleat one node
	{
		temp =  *head;

		while(temp->next != NULL)
		{
			temp->next =temp;///////

		}
			temp->next = newn;
			newn->prev=temp;
		
	}
}

void DeleteFirst(PPNODE head)
{

}

void DeleteLast(PPNODE head)
{

}

void InsertAtPos(PPNODE head ,int no ,int pos)
{

}

void InsertAtPos(PPNODE head ,int pos)
{
	
}

int main()
{

	PNODE first = NULL;
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	InsertLast(&first,51);
	InsertLast(&first,111);
		
	Display(first);
	iRet = Count(first);	

	printf("The Number of Nodes:%d\n",iRet);


	return 0;
}