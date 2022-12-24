# Array Data Structure

- It is a group of variables of similar data types referred to by a single element.
- Its elements are stored in a contiguous memory location.
- The size of the array should be mentioned while declaring it.
- Array elements are always counted from zero (0) onward.
- Array elements can be accessed using the position of the element in the array.
- The array can have one or more dimensions.

## Advantages:-
- **Code Optimization**:  we can retrieve or sort the data efficiently.
- **Random access**: We can get any data located at an index position.

## Disadvantages:-
- **Size Limit**: We can store only the fixed size of elements in the array. It doesn’t grow its size at runtime. 

## examples

```c
// Array declaration by initializing elements
#include <stdio.h>

int main(void)
{
	int arr[] = { 10, 20, 30, 40};
	// Compiler creates an array of size 4.
	// above is same as "int arr[4] = {10, 20, 30, 40}"
	
	return (0);
}
```

```c
#include <stdio.h>

int main(void)
{
	// Array declaration by specifying size and initializing
	// elements
	int arr[6] = { 10, 20, 30, 40 };

	// Compiler creates an array of size 6, initializes first
	// 4 elements as specified by user and rest two elements as
	// 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"
	
	return (0);
}
```

```c
#include <stdio.h>

int main()
{
	int arr[5];
	arr[0] = 5;
	arr[2] = -10;
	arr[3 / 2] = 2; // this is same as arr[1] = 2
	arr[3] = arr[0];

	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

	return 0;
}
```

output:
```
5 2 -10 5
```


## Operations

### Linear Search Algorithm

```c
// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <stdio.h>

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver's code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}

```

```
Time complexity: O(N)
Auxiliary Space: O(1)
```
### sort an array

```c
// C program to sort the array in an
// ascending order using selection sort

#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[] = { 0, 23, 14, 12, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: \n");
	printArray(arr, n);

	selectionSort(arr, n);
	printf("\nSorted array in Ascending order: \n");
	printArray(arr, n);

	return 0;
}

```

### Insert Operation

1. Insert at the end:
    ```c
    // C program to implement insert
    // operation in an unsorted array.
    #include <stdio.h>

    // Inserts a key in arr[] of given capacity.
    // n is current size of arr[]. This
    // function returns n + 1 if insertion
    // is successful, else n.
    int insertSorted(int arr[], int n, int key, int capacity)
    {

        // Cannot insert more elements if n is
        // already more than or equal to capacity
        if (n >= capacity)
            return n;

        arr[n] = key;

        return (n + 1);
    }

    // Driver Code
    int main()
    {
        int arr[20] = { 12, 16, 20, 40, 50, 70 };
        int capacity = sizeof(arr) / sizeof(arr[0]);
        int n = 6;
        int i, key = 26;

        printf("\n Before Insertion: ");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);

        // Inserting key
        n = insertSorted(arr, n, key, capacity);

        printf("\n After Insertion: ");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);

        return 0;
    }
    ```

    ```
    Time Complexity: O(1) 
    Auxiliary Space: O(1)
    ```

2. Insert at any position
    ```c
    // C Program to Insert an element
    // at a specific position in an Array

    #include <stdio.h>

    // Function to insert element
    // at a specific position
    void insertElement(int arr[], int n, int x, int pos)
    {
        // shift elements to the right
        // which are on the right side of pos
        for (int i = n - 1; i >= pos; i--)
            arr[i + 1] = arr[i];

        arr[pos] = x;
    }

    // Driver's code
    int main()
    {
        int arr[15] = { 2, 4, 1, 8, 5 };
        int n = 5;

        printf("Before insertion : ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);

        printf("\n");

        int x = 10, pos = 2;

        // Function call
        insertElement(arr, n, x, pos);
        n++;

        printf("After insertion : ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);

        return 0;
    }

    ```

    ```
    Time complexity: O(N)
    Auxiliary Space: O(1)
    ```

### Delete Operation
```c
// C program to implement delete operation in a
// unsorted array
#include <stdio.h>

// To search a key to be deleted
int findElement(int arr[], int n, int key);

// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
	// Find position of element to be deleted
	int pos = findElement(arr, n, key);

	if (pos == -1) {
		printf("Element not found");
		return n;
	}

	// Deleting element
	int i;
	for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];

	return n - 1;
}

// Function to implement search operation
int findElement(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;

	return -1;
}

// Driver's code
int main()
{
	int i;
	int arr[] = { 10, 50, 30, 40, 20 };

	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;

	printf("Array before deletion\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
	// Function call
	n = deleteElement(arr, n, key);

	printf("\nArray after deletion\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}

```

```
Time Complexity: O(N) 
Auxiliary Space: O(1)
```


