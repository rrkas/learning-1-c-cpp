# Queue Data Structure

- A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.

![](../../../assets/Queue.png)

## Characteristics of Queue:
- Queue can handle multiple data.
- We can access both ends.
- They are fast and flexible. 

## implementation

### Array Representation of Queue

```c
// Creating an empty queue

// A structure to represent a queue
struct Queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// function to create a queue of given capacity
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue
		= (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity - 1;
	queue->array
		= (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}
```

### Linked List Representation of Queue

```c
// A C program to demonstrate linked list based
// implementation of queue

// A linked list (LL) node to store a queue entry
struct QNode {
	int key;
	struct QNode* next;
};

// The queue, front stores the front node of LL and rear
// stores the last node of LL
struct Queue {
	struct QNode *front, *rear;
};

// A utility function to create a new linked list node.
struct QNode* newNode(int k)
{
	struct QNode* temp
		= (struct QNode*)malloc(sizeof(struct QNode));
	temp->key = k;
	temp->next = NULL;
	return temp;
}

// A utility function to create an empty queue
struct Queue* createQueue()
{
	struct Queue* q
		= (struct Queue*)malloc(sizeof(struct Queue));
	q->front = q->rear = NULL;
	return q;
}
```


## Types of Queue:
There are different types of queues:
- **Input Restricted Queue**: This is a simple queue. In this type of queue, the input can be taken from only one end but deletion can be done from any of the ends.
- **Output Restricted Queue**: This is also a simple queue. In this type of queue, the input can be taken from both ends but deletion can be done from only one end.
- **Circular Queue**: This is a special type of queue where the last position is connected back to the first position. Here also the operations are performed in FIFO order.
- **Double-Ended Queue (Dequeue)**: In a double-ended queue the insertion and deletion operations, both can be performed from both ends.
- **Priority Queue**: A priority queue is a special queue where the elements are accessed based on the priority assigned to them.


## Basic Operations for Queue in Data Structure:
- `Enqueue()` - Adds (or stores) an element to the end of the queue..
- `Dequeue()` - Removal of elements from the queue.
- `Peek()` or `front()` - Acquires the data element available at the front node of the queue without deleting it.
- `rear()` - This operation returns the element at the rear end without removing it.
- `isFull()` - Validates if the queue is full.
- `isNull()` - Checks if the queue is empty.

## Full program
```c
// C program for array implementation of queue
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
struct Queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue
		= (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;

	// This is important, see the enqueue
	queue->rear = capacity - 1;
	queue->array
		= (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFull(struct Queue* queue)
{
	return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty(struct Queue* queue)
{
	return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(struct Queue* queue, int item)
{
	if (isFull(queue))
		return;
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d enqueued to queue\n", item);
}

// Function to remove an item from queue.
// It changes front and size
int dequeue(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

// Function to get front of queue
int front(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

// Function to get rear of queue
int rear(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}

// Driver program to test above functions./
int main()
{
	struct Queue* queue = createQueue(1000);

	enqueue(queue, 10);
	enqueue(queue, 20);
	enqueue(queue, 30);
	enqueue(queue, 40);

	printf("%d dequeued from queue\n", dequeue(queue));
	printf("Front item is %d\n", front(queue));
	printf("Rear item is %d\n", rear(queue));

	return 0;
}
// This code is contributed by Susobhan Akhuli

```

## Applications of Queue:
- It has a single resource and multiple consumers.
- It synchronizes between slow and fast devices.
- In a network, a queue is used in devices such as a router/switch and mail queue.
- Variations: dequeue, priority queue and double-ended priority queue.
