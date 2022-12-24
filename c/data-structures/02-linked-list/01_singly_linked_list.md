# Singly Linked List

It is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type. 

```c
// A Single linked list node
struct Node {
	int data;
	struct Node* next;
};
```

## Insertion

1. Add a node at the front
    ```c
    /* Given a reference (pointer to pointer) to the head of a list
    and an int, inserts a new node on the front of the list. */
    void push(struct Node** head_ref, int new_data)
    {
        /* 1. allocate node */
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

        /* 2. put in the data */
        new_node->data = new_data;

        /* 3. Make next of new node as head */
        new_node->next = (*head_ref);

        /* 4. move the head to point to the new node */
        (*head_ref) = new_node;
    }

    ```

    - Time Complexity: `O(1)`, We have a pointer to the head and we can directly attach a node and change the pointer. So the Time complexity of inserting a node at the head position is O(1) as it does a constant amount of work.
    - Auxiliary Space: `O(1)`

1. Add a node after a given node
    ```c
    /* Given a node prev_node, insert a new node after the given
    prev_node */
    void insertAfter(struct Node* prev_node, int new_data)
    {
        /*1. check if the given prev_node is NULL */
        if (prev_node == NULL) {
            printf("the given previous node cannot be NULL");
            return;
        }

        /* 2. allocate new node */
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        /* 3. put in the data */
        new_node->data = new_data;

        /* 4. Make next of new node as next of prev_node */
        new_node->next = prev_node->next;

        /* 5. move the next of prev_node as new_node */
        prev_node->next = new_node;
    }

    ```

    - Time complexity: `O(1)`, since prev_node is already given as argument in a method, no need to iterate over list to find prev_node
    - Auxiliary Space: `O(1)` since using constant space to modify pointers


1. Add a node at the end
    ```c
    /* Given a reference (pointer to pointer) to the head
    of a list and an int, appends a new node at the end */
    void append(struct Node** head_ref, int new_data)
    {
        /* 1. allocate node */
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

        struct Node *last = *head_ref; /* used in step 5*/

        /* 2. put in the data */
        new_node->data = new_data;

        /* 3. This new node is going to be the last node, so make next
            of it as NULL*/
        new_node->next = NULL;

        /* 4. If the Linked List is empty, then make the new node as head */
        if (*head_ref == NULL)
        {
        *head_ref = new_node;
        return;
        }
        
        /* 5. Else traverse till the last node */
        while (last->next != NULL)
            last = last->next;

        /* 6. Change the next of last node */
        last->next = new_node;
        return;
    }

    ```

    - Time complexity: `O(N)`, where N is the number of nodes in the linked list. Since there is a loop from head to end, the function does `O(n)` work. 
    - Auxiliary Space: `O(1)`

## Deletion

1. Delete from Beginning
    ```c
    /* Function to remove the first node
    of the linked list */
    struct Node* removeFirstNode(struct Node* head)
    {
        if (head == NULL)
            return NULL;
    
        // Move the head pointer to the next node
        Node* temp = head;
        head = head->next;
    
        free(temp);
    
        return head;
    }
    ```

1. Deletion from end
    ```c
    /* Function to remove the last node 
    of the linked list */
    struct Node* removeLastNode(struct Node* head)
    {
        if (head == NULL)
            return NULL;
    
        if (head->next == NULL) {
            free(head);
            return NULL;
        }
    
        // Find the second last node
        Node* second_last = head;
        while (second_last->next->next != NULL)
            second_last = second_last->next;
    
        // Delete last node
        delete (second_last->next);
    
        // Change next of second last
        second_last->next = NULL;
    
        return head;
    }
    ```

1. Deletion at a position
    ```c
    void deleteN(Node** head, int position)
    {
        Node* temp;
        Node* prev;
        temp = *head;
        prev = *head;
        for (int i = 0; i < position; i++) {
            if (i == 0 && position == 1) {
                *head = (*head)->next;
                free(temp);
            }
            else {
                if (i == position - 1 && temp) {
                    prev->next = temp->next;
                    free(temp);
                }
                else {
                    prev = temp;
    
                    // Position was greater than
                    // number of nodes in the list
                    if (prev == NULL)
                        break;
                    temp = temp->next;
                }
            }
        }
    }
    ```


