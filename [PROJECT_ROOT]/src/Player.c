#include <stdio.h>
#include <stdlib.h>
//#include <node.h>
struct Node {
	char* data;
	struct Node* prev;
	struct Node* next;
};
typedef struct Node Node;

void addFirst(struct Node* target, char* data)
{
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode-> prev = target->prev;
	newNode-> next = target->next;
	newNode-> data = data;
	target-> next = newNode;
}
int main() {
	
	struct Node *head = malloc(sizeof(struct Node));
	head->next = NULL;

	int a,b;
	scanf("%d", &a);
	printf("%d\n",a);

	for(int i=0;i<a;i++){
		addFirst(head, NULL);
	}
	struct Node *curr = head->next;
	
	scanf("%d", &b);
	for(int j=0; j<b;j++){

		char ch;
		char title;
		int c;
		scanf("%c", &ch);
		switch(ch){
			case 'add':
				gets(title);
				addFirst(head, title);
				break;
			case 'del':
				gets(title);
				adelete(head, title);
				break;
			case 'list':
				printf("LinkedList [");
				while (curr != NULL)
				{

					printf("%c\n", curr->data);
					curr=curr->next;
				}
				printf("]");
				break;
			case 'next':	
				curr = curr->next;
				break;
			case 'prev':
				curr = curr->prev;
				break;
			case 'move':
				scanf("%d",&c);
				for(int k=0;k<c;k++){
					curr = curr->next;
				}
				break;
			case 'play':
				printf("%c", curr->data);
				printf("is now playing!");
				break;
			case 'clear':
				for (int l=0; l<a; l++){
					curr->data = NULL;
				}
				printf("LinkedList is cleared!");
				break;
			case 'quit':
				curr = head->next;
				while (curr != NULL)
				{
					struct Node* next = curr->next;
					free(curr);
					curr=next;
				}
				free(head);
				printf("LinkedLIst is cleared!\nquit!");
				break;
			case 'load':
			case 'save':
		}
	}
}





