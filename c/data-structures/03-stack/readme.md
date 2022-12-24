# Stack Data Structure

- Stack is a linear data structure that follows a particular order in which the operations are performed. 
- The order may be LIFO(Last In First Out) or FILO(First In Last Out).

![](../../../assets/stack.png)

## Basic Operations on Stack
- `push()`: to insert an element into the stack
- `pop()`: to remove an element from the stack
- `top()`: Returns the top element of the stack.
- `isEmpty()`: returns true if stack is empty else false.
- `size()`: returns the size of stack.

## Implementing

### C program for array implementation of stack

```c
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack* stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
	printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
	struct Stack* stack = createStack(100);

	push(stack, 10);
	push(stack, 20);
	push(stack, 30);

	printf("%d popped from stack\n", pop(stack));

	return 0;
}

```

Advantages of array implementation:
- Easy to implement.
- Memory is saved as pointers are not involved.

Disadvantages of array implementation:
- It is not dynamic i.e., it doesn’t grow and shrink depending on needs at runtime. [But in case of dynamic sized arrays like vector in C++, list in Python, ArrayList in Java, stacks can grow and shrink with array implementation as well].
- The total size of the stack must be defined beforehand.

### Implementing Stack using Linked List

```c
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct StackNode {
	int data;
	struct StackNode* next;
};

struct StackNode* newNode(int data)
{
	struct StackNode* stackNode =
	(struct StackNode*)
	malloc(sizeof(struct StackNode));
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

int isEmpty(struct StackNode* root)
{
	return !root;
}

void push(struct StackNode** root, int data)
{
	struct StackNode* stackNode = newNode(data);
	stackNode->next = *root;
	*root = stackNode;
	printf("%d pushed to stack\n", data);
}

int pop(struct StackNode** root)
{
	if (isEmpty(*root))
		return INT_MIN;
	struct StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);

	return popped;
}

int peek(struct StackNode* root)
{
	if (isEmpty(root))
		return INT_MIN;
	return root->data;
}

int main()
{
	struct StackNode* root = NULL;

	push(&root, 10);
	push(&root, 20);
	push(&root, 30);

	printf("%d popped from stack\n", pop(&root));

	printf("Top element is %d\n", peek(root));

	return 0;
}

```


Advantages of Linked List implementation:
- The linked list implementation of a stack can grow and shrink according to the needs at runtime.
- It is used in many virtual machines like JVM.

Disadvantages of Linked List implementation:
- Requires extra memory due to the involvement of pointers.
- Random accessing is not possible in stack.

