# Tree Data Structure

- Binary Tree is defined as a tree data structure where each node has at most 2 children. 
- Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

![](../../../assets/binary-tree.png)


A Binary tree is represented by a pointer to the topmost node (commonly known as the “root”) of the tree. If the tree is empty, then the value of the root is NULL. Each node of a Binary Tree contains the following parts:

- Data
- Pointer to left child
- Pointer to right child

```c
typedef struct Node {
    int data;
    Node* left;
    Node* right;
} Node;
```

```c
// Function to create a new node
Node* CreateNode(int data)
{
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
```

## Basic Operation On Binary Tree:
1. Inserting an element.
    ```c
    // Function to insert element in binary tree
    Node* InsertNode(Node* root, int data)
    {
        // If the tree is empty, assign new node address to root
        if (root == NULL) {
            root = CreateNode(data);
            return root;
        }
    
        Node* temp = root;

        if (temp->left != NULL)
            return InsertNode(temp->left, data);
        else {
            temp->left = CreateNode(data);
        }

        if (temp->right != NULL)
            return InsertNode(temp->right, data);
        else {
            temp->right = CreateNode(data);
        }
        return root;
    }
    ```
1. Removing an element.
1. Searching for an element.
1. Traversing the tree.
    1. Inorder Traversal (left-root-right)
        ```c
        /* Given a binary tree, print its nodes in inorder*/
        void printInorder(struct node* node)
        {
            if (node == NULL)
                return;
        
            /* first recur on left child */
            printInorder(node->left);
        
            /* then print the data of node */
            printf("%d ", node->data);
        
            /* now recur on right child */
            printInorder(node->right);
        }
        ```
    1. Preorder Traversal (root-left-right)
        ```c
        /* Given a binary tree, print its nodes in preorder*/
        void printPreorder(struct node* node)
        {
            if (node == NULL)
                return;
        
            /* first print data of node */
            printf("%d ", node->data);
        
            /* then recur on left subtree */
            printPreorder(node->left);
        
            /* now recur on right subtree */
            printPreorder(node->right);
        }
        ```
    1. Postorder Traversal (left-right-root)
        ```c
        void printPostorder(struct node* node)
        {
            if (node == NULL)
                return;
        
            // first recur on left subtree
            printPostorder(node->left);
        
            // then recur on right subtree
            printPostorder(node->right);
        
            // now deal with the node
            printf("%d ", node->data);
        }
        ```

## Traversing Orders
1. Inorder
    1. In the case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order.
1. Preorder
    1. Preorder traversal is used to create a copy of the tree
    1. Preorder traversal is also used to get prefix expressions on an expression tree
1. Postorder
    1. Postorder traversal is used to delete the tree
    1. Postorder traversal is also useful to get the postfix expression of an expression tree

