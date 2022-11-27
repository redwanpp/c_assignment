/*Implementation of doubly linked list with
 insert a data at the first of list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node d_node;

struct node {
    char data;
    d_node *next;
    d_node *prev;
};

d_node *create_node(char data);
d_node *add_node(d_node *head, char data);
d_node *prepend(d_node *head, char data);
void display(d_node *head);

int main() {
    int choice;
    char data;
    
    d_node *head = NULL, *temp = NULL;

    while(1) {
        system("cls");
        printf("Enter a character for insert in the linked list: ");
        fflush(stdin);
        scanf("%c", &data);
        fflush(stdin);

        if(head == NULL) {
            head = temp = add_node(head, data);
        }
        else {
            temp = add_node(head, data);
        }

        printf("Do you want to continue?\n(press zero(0) for exit) ");
        scanf("%d", &choice);
        if(choice == 0) {
            break;
        }
    }

    system("cls");
    printf("\n\n\t\t**********Your doubly Linked list is**********\n\n");
    display(head);
    getchar();

    printf("\n\nNow enter a character to add at first of the list:");
    fflush(stdin);
    scanf("%c", &data);
    fflush(stdin);

     head = prepend(head, data);

    printf("\n\n\t\t*****After insert your doubly Linked list is******\n\n");
    display(head);

    return 0;
}


d_node *create_node(char data) {
    d_node *new_node = (d_node*)malloc(sizeof(d_node));

    if(new_node == NULL) {
        printf("An error occured!\n");
        exit(0);
    }

    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}

d_node *add_node(d_node *head, char data) {
    d_node *new_node = create_node(data);

    if(head == NULL) {
        return new_node;
    }

    d_node *current_node = head;

    while(current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node->next = new_node;
    new_node->prev = current_node;

    return head;
}

d_node *prepend(d_node *head, char data) {
    d_node *new_node = create_node(data);

    new_node->next = head;
    head->prev = new_node; 

    return new_node;
}

void display(d_node *head) {
    d_node *temp = head;

    while(temp != NULL) {
        printf("[%x][%c][%x]---->", temp->prev, temp->data, temp->next);
        temp = temp->next; 
    }
}