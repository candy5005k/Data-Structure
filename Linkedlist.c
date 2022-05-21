#include<stdio.h>

struct node
{
	int data;
	struct node *next;
};

void Display(struct node* head)
{
	while(head != NULL)
	{
		printf("| %d | -> ",head->data);
		head =head-> next;
	}
	printf("NULL\n");
}

int Count(struct node * head)
{
	int iCnt = 0;
	while(head !=NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}
 
void InsertFirst(struct node ** head,int no)
{
	struct node *newn = NULL;

	newn=(struct node *)malloc(sizeof(struct node)); 

	newn->data = no;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next =*head;
		*head = newn;
	}

}

void InsertLast(struct node ** head ,int no)
{
	struct node *newn = NULL;
	struct node *temp = NULL;
	
	newn=(struct node *)malloc(sizeof(struct node)); 

	newn->data = no;
	newn->next = NULL;

	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while(temp->next !=NULL)
		{
			temp =temp->next;	
		}
			temp->next = newn;


	}


}
void DeleteFirst(struct node ** head)
{
	struct node *temp = NULL;

	if(*head ==NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head =temp ->next;
		free(temp);
		
		
			
	}
}
void DeleteLast(struct node ** head)
{
	struct node *temp = NULL;

	if(*head ==NULL)
	{
		return;
	}
	else if((*head)->next ==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		temp = *head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next = NULL;
		
	}

}
void InsertAtPos(struct node **head ,int no,int pos)
{
	int size = 0;
	int iCnt = 0;
	struct node *newn = NULL;
	struct node *temp =NULL;

	size = Count(*head);

	if((pos<1)||(pos>(size+1)))
	{
		printf("Invalid	position\n");
		return;
	}
 
	if(pos==1)
	{
		InsertFirst(head,no);
	}	
	else if(pos==size+1)
	{
		InsertLast(head,no);
	}
	else
	{

	newn=(struct node *)malloc(sizeof(struct node)); 

	newn->data = no;
	newn->next = NULL;

	temp =*head;

	for(iCnt = 1;iCnt<pos-1;iCnt++)
	{
		temp=temp->next;
	}
	newn->next=temp->next;
	temp->next =newn;

	}


}
void DeleteAtPos(struct node **head,int pos)
{
	int size = 0;

 	int iCnt = 0;

	struct node *temp =NULL;
	struct node *tempdelete = NULL;

	size = Count(*head);

	if((pos<1)||(pos>(size)))
	{
		printf("Invalid	position\n");
		return;
	}
 
	if(pos==1)
	{
		DeleteFirst(head);
	}	
	else if(pos==size)
	{
		DeleteLast(head);
	}
	else
	{

		temp =*head;

		for(iCnt =1;iCnt< pos-1;iCnt++)
		{
			temp=temp->next;
		}
		tempdelete = temp->next;
		temp->next=temp->next->next;  
		free(tempdelete);

	}

}
int main()
{
	int iRet = 0;
	struct node * first = NULL;

//////////////////////////////////////////////////////

	InsertFirst(&first,1);
	InsertFirst(&first,2);
	InsertFirst(&first,3);
	InsertFirst(&first,4);
	
	Display(first);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

//////////////////////////////////////////////////////
	
	InsertLast(&first,5);

	Display(first);		//Display(100);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

//////////////////////////////////////////////////////
	
	InsertAtPos(&first,75,3);
	 	
	Display(first);		//Display(100);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

///////////////////////////////////////////////////////	
	
	DeleteFirst(&first);

	Display(first);		//Display(100);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

/////////////////////////////////////////////////////////

	DeleteLast(&first);
	Display(first);		//Display(100);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

//////////////////////////////////////////////////////////

	DeleteAtPos(&first,2);
	Display(first);		//Display(100);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);

///////////////////////////////////////////////////////////////
	InsertFirst(&first,4);
	
	Display(first);
	
	iRet = Count(first);
	printf("The Number of Node is: %d\n",iRet);
	
/////////////////////////////////////////////////////////////
	return 0;
}