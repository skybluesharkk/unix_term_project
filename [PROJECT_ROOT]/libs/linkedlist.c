#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

static Node* _head = NULL;

static Node* _tail = NULL;

static Node* _cur_node = NULL;

void insert(Node* prev, char* data){
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = (char*)malloc(sizeof(char) * (strlen(data) + 1));
	strcpy(new_node->data,data);
}

void delete(Node* head, Node* removed){
	if (removed == head) return;
	else{
		removed->prev->next = removed->next;
		removed->next->prev = removed->prev;
		if(removed == current) current = current->next;
		free(removed);
	}
}


