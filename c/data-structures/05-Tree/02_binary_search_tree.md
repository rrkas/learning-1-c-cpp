# Binary Search Tree

Binary Search Tree is a node-based binary tree data structure which has the following properties:

- The left subtree of a node contains only nodes with keys lesser than the node’s key.
- The right subtree of a node contains only nodes with keys greater than the node’s key.
- The left and right subtree each must also be a binary search tree.


## Operations

1. Insertion
    ```c
    struct node* newNode(int item)
    {
        struct node* temp
            = (struct node*)malloc(sizeof(struct node));
        temp->key = item;
        temp->left = temp->right = NULL;
        return temp;
    }

    void insert(Node*& root, int key)
    {
        Node* node = new Node(key);
        if (!root) {
            root = node;
            return;
        }
        Node* prev = NULL;
        Node* temp = root;
        while (temp) {
            if (temp->val > key) {
                prev = temp;
                temp = temp->left;
            }
            else if (temp->val < key) {
                prev = temp;
                temp = temp->right;
            }
        }
        if (prev->val > key)
            prev->left = node;
        else
            prev->right = node;
    }
    ```
1. Deletion
    ```c
    struct node* minValueNode(struct node* node)
    {
        struct node* current = node;
    
        /* loop down to find the leftmost leaf */
        while (current && current->left != NULL)
            current = current->left;
    
        return current;
    }
    struct node* deleteNode(struct node* root, int key)
    {
        // base case
        if (root == NULL)
            return root;
    
        // If the key to be deleted
        // is smaller than the root's
        // key, then it lies in left subtree
        if (key < root->key)
            root->left = deleteNode(root->left, key);
    
        // If the key to be deleted
        // is greater than the root's
        // key, then it lies in right subtree
        else if (key > root->key)
            root->right = deleteNode(root->right, key);
    
        // if key is same as root's key,
        // then This is the node
        // to be deleted
        else {
            // node with only one child or no child
            if (root->left == NULL) {
                struct node* temp = root->right;
                free(root);
                return temp;
            }
            else if (root->right == NULL) {
                struct node* temp = root->left;
                free(root);
                return temp;
            }
    
            // node with two children:
            // Get the inorder successor
            // (smallest in the right subtree)
            struct node* temp = minValueNode(root->right);
    
            // Copy the inorder
            // successor's content to this node
            root->key = temp->key;
    
            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->key);
        }
        return root;
    }
    ```

