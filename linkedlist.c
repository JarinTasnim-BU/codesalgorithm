#include <stdio.h>

struct node
{
    int value;
    struct node *link;
};



void main()
{

    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->value = 45;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->value = 46;
    current->link = NULL;
    head->link = current;

    int optionChoice;
    int scannedvalue_forTheEnd;
    int scannedvalue_forThebegin;
    int after_element;
    int new_el1;
    int search_elem;

    while (1)
    {

        printf("\n-------Choose an Option-------\nEnter adjacent number of selected operation:\n1. Enter at the end of Linked List.\n2. Enter the the Head\n3. Enter after element\n4. Search element \n5. View the List\n6. Print in Reverse\n-----------------------------\n");
        scanf("%d", &optionChoice);
        switch(optionChoice)
        {
        case 1:
        {
            printf("Please insert value you want to add at end\n");
            scanf("%d", &scannedvalue_forTheEnd);
            struct node *current = malloc(sizeof(struct node));
            current->value = scannedvalue_forTheEnd;
            current->link = NULL;
            insertIntoSecondLast(head, current);
            printf("Element Inserted:\n");
            break;
        }
        case 2:
        {
            printf("Please insert value you want to add at head\n");
            scanf("%d", &scannedvalue_forThebegin);
            struct node *current = malloc(sizeof(struct node));
            current->value = scannedvalue_forThebegin;
            current->link = NULL;
            InsertAtHead(head, current);
            printf("Element Inserted:\n");
            break;
        }

        case 3:
        {
            printDetailsOFNodes(head);
            printf("\nPlease specify after what element you want to add new elemt\n");
            scanf("%d", &after_element);
            printf("Enter new element:\n");
            scanf("%d", &new_el1);
            struct node *current = malloc(sizeof(struct node));
            current->value=new_el1;
            current->link = NULL;
            insertAfterElement(head, after_element, current);
            printf("Element Inserted:\n");
            break;
        }

        case 4:
        {
            printf("\nEnter your search element\n");
            scanf("%d", &search_elem);
            int index = 0;
            findElem(head, search_elem, index);
            break;
        }

        case 5:
        {
            printDetailsOFNodes(head);
            printf("\n");
            break;
        }
        case 6:
        {
            printinRreverse(head);
            printf("\n");
            break;
        }
        default:
        {
            break;
        }
        }



    }
}


void findElem(struct node *node, int number, int index)
{

    if(node->value != number)
    {
        findElem(node->link, number, index+1);
    }
    else if(node->value == number)
    {
        printf("    ..................................\n");
        printf("    .                                .\n");
        printf("    .                                .\n");
        printf("    .                                .\n");
        printf("    .       Found at index: %d        .\n", index);
        printf("    .                                .\n");
        printf("    .                                .\n");
        printf("    .                                .\n");
        printf("    ..................................\n");

    }
    else
    {
        printf("Could not find the element");
    }

}


int insertAfterElement(struct node *node, int number, struct node *current)
{

    if(node->value != number)
    {
        insertAfterElement(node->link, number, current);
    }
    else
    {
        struct node *temp = malloc(sizeof(struct node));
        temp->value=current->value;
        temp->link= node->link;
        node->link = temp;
    }

    return 0;
}



int InsertAtHead(struct node *node, struct node *current)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->value = node->value;
    temp->link = node->link;

    node->value = current->value;
    node->link = temp;
}

int insertIntoSecondLast(struct node *node, struct node *node2)
{

    if(node->link != NULL)
    {
        insertIntoSecondLast(node->link, node2);
    }
    else if(node->link == NULL)
    {
        node->link = node2;
    }

    return 0;

}

int printDetailsOFNodes(struct node *node)
{

    printf("%d ", node->value);

    if (node->link != NULL)
    {
        printDetailsOFNodes(node->link);
    }

    return 0;
}





void printinRreverse(struct node *node)
{


    if(node->link != NULL){
        printinRreverse(node->link);
    }

    printf("%d ", node->value);


}
