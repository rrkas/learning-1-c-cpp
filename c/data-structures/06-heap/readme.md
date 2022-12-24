# Heap data structure

A Heap is a special Tree-based data structure in which the tree is a complete binary tree.

![](../../../assets/Heap.png)

## Operations of Heap Data Structure

- **Heapify**: a process of creating a heap from an array.
- **Insertion**: process to insert an element in existing heap time complexity `O(log N)`.
- **Deletion**: deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity `O(log N)`.
- **Peek**: to check or find the most prior element in the heap, (max or min element for max and min heap).

## Types of Heap Data Structure
- **Max-Heap**: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children.<br> The same property must be recursively true for all sub-trees in that Binary Tree.
- **Min-Heap**: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children.<br> The same property must be recursively true for all sub-trees in that Binary Tree.

## Binary Heap

```c
// Max-Heap data structure in C

#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}
void heapify(int array[], int size, int i)
{
  if (size == 1)
  {
    printf("Single element in the heap");
  }
  else
  {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && array[l] > array[largest])
      largest = l;
    if (r < size && array[r] > array[largest])
      largest = r;
    if (largest != i)
    {
      swap(&array[i], &array[largest]);
      heapify(array, size, largest);
    }
  }
}
void insert(int array[], int newNum)
{
  if (size == 0)
  {
    array[0] = newNum;
    size += 1;
  }
  else
  {
    array[size] = newNum;
    size += 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
      heapify(array, size, i);
    }
  }
}
void deleteRoot(int array[], int num)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (num == array[i])
      break;
  }

  swap(&array[i], &array[size - 1]);
  size -= 1;
  for (int i = size / 2 - 1; i >= 0; i--)
  {
    heapify(array, size, i);
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
    printf("%d ", array[i]);
  printf("\n");
}
int main()
{
  int array[10];

  insert(array, 3);
  insert(array, 4);
  insert(array, 9);
  insert(array, 5);
  insert(array, 2);

  printf("Max-Heap array: ");
  printArray(array, size);

  deleteRoot(array, 4);

  printf("After deleting an element: ");

  printArray(array, size);
}
```

