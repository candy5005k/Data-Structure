#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn ->next = NULL;	

	if(*head ==NULL) //LL is empty 
	{
	  *head = newn;
	}
	else		//LL contain atleat one node
	{
	   newn->next = *head;
	   *head = newn;
	}
}
void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn ->next = NULL;	

	if(*head == NULL) //LL is empty 
	{
	  *head = newn;
	}
	else		//LL contain atleat one node
	{
	    //code;
	}
}

void Display( PNODE head)
{
	printf("Elements from lined list are:\n");
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head -> next;
	}
	
	printf("NULL\n");
	
}

int Count( PNODE head)
{
	int iCnt =0;
	printf("Elements from lined list are:\n");
	while(head != NULL)
	{
		 iCnt++;
		head = head -> next;
	}
	
	 return iCnt;
}
int main()
{
	int iRet = 0;
	PNODE first = NULL;	
		//techers minds First student name;
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Node are :%d\n",iRet	);
	
	InsertFirst(&first,1);
	
	iRet = Count(first);
	printf("Number of Node are :%d\n",iRet	);
	
	return 0;
}


