#include <stdio.h>
#include <stdlib.h>

int main() {

	int a;
	scanf("%d", &a);
	printf("%d\n",a);

	char pl[100];

	for(int i=0;i<10;i++){
		scanf("%s",pl[i]);
	}

	char ch;
	scanf("%c", &ch);
	switch(ch){
		case 'add':
			gets(title);
			ainsert(head, title);
			break;
		case 'del':
			gets(title);
			adelete(head, title);
			break;
		case 'list':
			printf("LinkedList [");
			for(int i=0;i<sizeof(pl)/sizeof(pl[0]);i++){
				printf("%s", pl[i]);
				break;
			}
			printf("]");
	}
}






