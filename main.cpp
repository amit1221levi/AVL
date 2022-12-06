
// Created by amit levi on 05/12/2022.
//



//======================================================================================================================
///=====================================================================================================================
///======================================================================================================================
//                           $$$$$               $$$$          $$$$       $$$$
///                        $$$   $$$              $$$$        $$$$        $$$$
//                        $$$     $$$              $$$$      $$$$         $$$$
///                      $$$$$$$$$$$$$$             $$$$    $$$$          $$$$
//                      $$$$        $$$$             $$$$  $$$$           $$$$$$$$$$$$$
///                    $$$$          $$$$              $$$$$$             $$$$$$$$$$$$$$
///======================================================================================================================
///======================================================================================================================
//=======================================================================================================================

/*
 *
-----AVL-----
 (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST.
 The cost of these operations may become O(n) for a skewed Binary tree.
 If we make sure that the height of the tree remains O(log(n)) after every insertion and deletion,
 then we can guarantee an upper bound of O(log(n)) for all these operations.
 The height of an AVL tree is always O(log(n)) where n is the number of nodes in the tree.
*/
///=====================================================================================================================
//------------------------------------------------Function--------------------------------------------------------------
///=====================================================================================================================
//---------------------------------------------printInorder void -------------------------------------------------------

//---------------------------------------------eight int----------------------------------------------------------------

//---------------------------------------------Max----------------------------------------------------------------------

//---------------------------------------------newNode------------------------------------------------------------------

//---------------------------------------------leftRotate---------------------------------------------------------------

//---------------------------------------------rightRotate--------------------------------------------------------------

//---------------------------------------------getBalance---------------------------------------------------------------

//----------------------------------------------insert------------------------------------------------------------------

//----------------------------------------------preOrder----------------------------------------------------------------

//-----------------------------------------------printInorder-----------------------------------------------------------

//-----------------------------------------------findPreSuc-------------------------------------------------------------

//-----------------------------------------------sortedArrayToBST-------------------------------------------------------

//------------------------------------------------merge----------------------------------------------------------------

//------------------------------------------------mergeTrees------------------------------------------------------------

//------------------------------------------------storeInorder-------------------------------------------------------

///=====================================================================================================================
//--------------------------------------------EXPLANATIONS--------------------------------------------------------------
///=====================================================================================================================

///---------------------------------------------printInorder void -------------------------------------------------------
//Print inorder 0(N)

///---------------------------------------------height int----------------------------------------------------------------
//Pet the height o(1)

///---------------------------------------------Max----------------------------------------------------------------------
//Pax between to int 0(1)

///---------------------------------------------newNode------------------------------------------------------------------
//Allocate new node o(1)

///---------------------------------------------leftRotate-leftRotate----------------------------------------------------------
//leftRotate rightRotate new node o(1)

/*
 *
-----Left Rotation-----
-----Right Rotation-----
T1, T2 and T3 are subtrees of the tree, rooted with y (on the left side) or x (on the right side)

     y                               x
    / \     Right Rotation          /  \
   x   T3   - - - - - - - >        T1   y
  / \       < - - - - - - -            / \
 T1  T2     Left Rotation            T2  T3

Keys in both of the above trees follow the following order
keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)
So BST property is not violated anywhere.
. Left Left Case

T1, T2, T3 and T4 are subtrees.
         z                                      y
        / \                                   /   \
       y   T4      Right Rotate (z)          x      z
      / \          - - - - - - - - ->      /  \    /  \
     x   T3                               T1  T2  T3  T4
    / \
  T1   T2
2. Left Right Case

     z                               z                           x
    / \                            /   \                        /  \
   y   T4  Left Rotate (y)        x    T4  Right Rotate(z)    y      z
  / \      - - - - - - - - ->    /  \      - - - - - - - ->  / \    / \
T1   x                          y    T3                    T1  T2 T3  T4
    / \                        / \
  T2   T3                    T1   T2
3. Right Right Case

  z                                y
 /  \                            /   \
T1   y     Left Rotate(z)       z      x
    /  \   - - - - - - - ->    / \    / \
   T2   x                     T1  T2 T3  T4
       / \
     T3  T4
4. Right Left Case

   z                            z                            x
  / \                          / \                          /  \
T1   y   Right Rotate (y)    T1   x      Left Rotate(z)   z      y
    / \  - - - - - - - - ->     /  \   - - - - - - - ->  / \    / \
   x   T4                      T2   y                  T1  T2  T3  T4
  / \                              /  \
T2   T3                           T3   T4

-The current node must be one of the ancestors of the newly inserted node. Update the height of the current node.
-Get the balance factor (left subtree height – right subtree height) of the current node.
-If the balance factor is greater than 1, then the current node is unbalanced and we are either in the Left Left case
 or left Right case.
 To check whether it is left left case or not, compare the newly inserted key with the key in the left subtree root.
-If the balance factor is less than -1, then the current node is unbalanced and we are either in the Right Right case
 or Right-Left case.
 To check whether it is the Right Right case or not, compare the newly inserted key with the key in the
 right subtree root.
 Insertion in AVL Tree:
To make sure that the given tree remains AVL after every insertion, we must augment the standard BST insert operation
 to perform some re-balancing.
Following are two basic operations that can be performed to balance a BST without violating the BST property
 (keys(left) < key(root) < keys(right)).
 */

///---------------------------------------------getBalance---------------------------------------------------------------
//return the balance log(h)

///----------------------------------------------insert------------------------------------------------------------------
//insert log(n)

///----------------------------------------------preOrder----------------------------------------------------------------
//preorder o(n)

///-----------------------------------------------printInorder-----------------------------------------------------------
//ineorder o(n) Data type needs other.data.print();

///-----------------------------------------------findPreSuc-------------------------------------------------------------
//find the nodes with the closest keys in the tree to the given node according log(n)

///-----------------------------------------------sortedArrayToBST-------------------------------------------------------
//Convert sorted array into AVL tree

///------------------------------------------------merge----------------------------------------------------------------
//merge array

///------------------------------------------------mergeTrees------------------------------------------------------------
/*
 *(Insert elements of the first tree to the second):
Take all elements of the first BST one by one, and insert them into the second BST.
 Inserting an element to a self-balancing BST takes Logn time (See this) where n is the size of the BST.
 So time complexity of this method is Log(n) + Log(n+1) … Log(m+n-1).
 The value of this expression will be between mLogn and mLog(m+n-1).
 As an optimization, we can pick the smaller tree as the first tree.
Method 2 (Merge In
 */
///------------------------------------------------storeInorder-------------------------------------------------------
/*inorder traversal of the first tree and store the traversal in one temp array arr[].
 * This step takes O(n) time
*/

//======================================================================================================================
///=====================================================================================================================
///======================================================================================================================
//                           $$$$$               $$$$          $$$$       $$$$
///                        $$$   $$$              $$$$        $$$$        $$$$
//                        $$$     $$$              $$$$      $$$$         $$$$
///                      $$$$$$$$$$$$$$             $$$$    $$$$          $$$$
//                      $$$$        $$$$             $$$$  $$$$           $$$$$$$$$$$$$
///                    $$$$          $$$$              $$$$$$             $$$$$$$$$$$$$$
///======================================================================================================================
///======================================================================================================================
//=======================================================================================================================

#ifndef UNTITLED78_AVL_H
#define UNTITLED78_AVL_H
#include <iostream>
using namespace std;

///========================================================================================================================
//------------------------------------------------------Node------------------------------------------------------------------
///========================================================================================================================
template<class Data>
class AVLtree {
public:
    class Node {
    public:
        Data key;
        Node *left;
        Node *right;
        int height;

        bool operator<(const Data &other) {
            return (key < *other);
        };

        bool operator>(const Data &other) {
            return (key > *other);
        };

        bool operator==(const Data &other) {
            return (key == *other);
        };

        Node &operator=(const Data &other) {
            key = other;
            return *this;
        };
    };
///========================================================================================================================
//------------------------------------------------------Node---------------------------------------------------------------
///========================================================================================================================



///========================================================================================================================
//----------------------------------------------------AVL------------------------------------------------------------------
///========================================================================================================================
    Node *root;
    int numberOfNode;
    AVLtree():numberOfNode(0){}

//---------------------------------------------------height--------------------------------------------------------------
//========================================================================================================================
    int height(Node *N) {
        if (N == NULL)
            return 0;
        return N->height;
    }

//---------------------------------------------------Max-----------------------------------------------------------------
//========================================================================================================================
// A utility function to get maximum
// of two integers
    int maxint(int a, int b) {
        return (a > b) ? a : b;
    }

//---------------------------------------------------newNode-------------------------------------------------------------
//========================================================================================================================
/* Helper function that allocates a
new node with the given key and
NULL left and right pointers. */
    Node *newNode(Data key) {
        Node *node = new Node();
        node->key = key;
        node->left = NULL;
        node->right = NULL;
        node->height = 1; // new node is initially
        // added at leaf
        return (node);
    }

//---------------------------------------------------rightRotate---------------------------------------------------------
//========================================================================================================================
// A utility function to right
// rotate subtree rooted with y
// See the diagram given above.
    Node *rightRotate(Node *y) {
        Node *x = y->left;
        Node *T2 = x->right;

        // Perform rotation
        x->right = y;
        y->left = T2;

        // Update heights
        y->height = maxint(height(y->left),
                           height(y->right)) + 1;
        x->height = maxint(height(x->left),
                           height(x->right)) + 1;

        // Return new root
        return x;
    }

//---------------------------------------------------leftRotate----------------------------------------------------------
//========================================================================================================================
// A utility function to left
// rotate subtree rooted with x
// See the diagram given above.
    Node *leftRotate(Node *x ) {
        Node *y = x->right;
        Node *T2 = y->left;

        // Perform rotation
        y->left = x;
        x->right = T2;

        // Update heights
        x->height = maxint(height(x->left),
                           height(x->right)) + 1;
        y->height = maxint(height(y->left),
                           height(y->right)) + 1;

        // Return new root
        return y;
    }

//---------------------------------------------------getBalance---------------------------------------------------------
//=======================================================================================================================
// Get Balance factor of node N
    int getBalance(Node *N) {
        if (N == NULL)
            return 0;
        return height(N->left) - height(N->right);
    }

//---------------------------------------------------insert-------------------------------------------------------------
//=======================================================================================================================
// Recursive function to insert a key
// in the subtree rooted with key and
// returns the new root of the subtree.

    __attribute__((unused)) void insert(Data key, bool first=true) {
        /* 1. Perform the normal BST insertion */
        if (root == NULL){
            numberOfNode++;
            root=(newNode(key));
            return;
        }
        if (root!=NULL){
            root=insertstep( key, root,  true);
        }
    }


    Node *insertstep(Data key, Node *nodeRoot, bool first=true){
        /* 0. update the number of note  */
        if(first){
            numberOfNode++;
        }
        /* 1. Perform the normal BST insertion */
        if (nodeRoot == NULL)
            return (newNode(key));

        if (key < nodeRoot->key)
            nodeRoot->left = insertstep(key, nodeRoot->left, false);
        else if (key > nodeRoot->key)
            nodeRoot->right = insertstep(key, nodeRoot->right, false);
        else // Equal keys are not allowed in BST
            return nodeRoot;

        /* 2. Update height of this ancestor nodeRoot */
        nodeRoot->height = 1 + max(height(nodeRoot->left),
                                   height(nodeRoot->right));

        /* 3. Get the balance factor of this ancestor
            nodeRoot to check whether this nodeRoot became
            unbalanced */
        int balance = getBalance(nodeRoot);

        // If this nodeRoot becomes unbalanced, then
        // there are 4 cases

        // Left Left Case
        if (balance > 1 && key < nodeRoot->left->key)
            return rightRotate(nodeRoot);

        // Right Right Case
        if (balance < -1 && key > nodeRoot->right->key)
            return leftRotate(nodeRoot);

        // Left Right Case
        if (balance > 1 && key > nodeRoot->left->key) {
            nodeRoot->left = leftRotate(nodeRoot->left);
            return rightRotate(nodeRoot);
        }

        // Right Left Case
        if (balance < -1 && key < nodeRoot->right->key) {
            nodeRoot->right = rightRotate(nodeRoot->right);
            return leftRotate(nodeRoot);
        }

        /* return the (unchanged) nodeRoot pointer */
        return nodeRoot;
    }

//---------------------------------------------------preOrder-----------------------------------------------------------
//======================================================================================================================
// A utility function to print preorder
// traversal of the tree.
// The function also prints height
// of every node
    void preOrder(Node *node)
    {
        if(node != NULL)
        {
            cout << node->key << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

//---------------------------------------------------storeInorder-------------------------------------------------------
//=======================================================================================================================

// A helper function that stores inorder
// traversal of a tree rooted with node
    void storeInorder(Node* node, Data inorder[], int *index_ptr)
    {
        if (node == NULL)
            return;

        /* first recur on left child */
        storeInorder(node->left, inorder, index_ptr);

        inorder[*index_ptr] = node->key;
        (*index_ptr)++; // increase index for next entry

        /* now recur on right child */
        storeInorder(node->right, inorder, index_ptr);
    }

//---------------------------------------------------mergeTrees---------------------------------------------------------
//=======================================================================================================================
/* This function merges two balanced
BSTs with roots as root1 and root2.
m and n are the sizes of the trees respectively */
    __attribute__((unused)) void mergeTrees( int n,Node *root2)
    {
        // Store inorder traversal of
        // first tree in an array arr1[]
        Data *arr1 = new Data[numberOfNode];
        int i = 0;
        storeInorder(root, arr1, &i);

        // Store inorder traversal of second
        // tree in another array arr2[]
        Data *arr2 = new Data[n];
        int j = 0;
        storeInorder(root2, arr2, &j);

        // Merge the two sorted array into one
        Data *mergedArr = merge(arr1, arr2, numberOfNode, n);

        // Construct a tree from the merged
        // array and return root of the tree
        root= sortedArrayToBST (mergedArr, 0, numberOfNode + n - 1);
    }

//-----------------------------------------------------merge------------------------------------------------------------
//=======================================================================================================================
// function to convert list to bst
    Data *merge(Data arr1[], Data arr2[], int m, int n)
    {
        // mergedArr[] is going to contain result
        Data *mergedArr = new Data[m + n];
        int i = 0, j = 0, k = 0;

        // Traverse through both arrays
        while (i < m && j < n)
        {
            // Pick the smaller element and put it in mergedArr
            if (arr1[i] < arr2[j])
            {
                mergedArr[k] = arr1[i];
                i++;
            }
            else
            {
                mergedArr[k] = arr2[j];
                j++;
            }
            k++;
        }

        // If there are more elements in first array
        while (i < m)
        {
            mergedArr[k] = arr1[i];
            i++; k++;
        }

        // If there are more elements in second array
        while (j < n)
        {
            mergedArr[k] = arr2[j];
            j++; k++;
        }

        return mergedArr;
    }

//-----------------------------------------------------sortedArrayToBST-------------------------------------------------
//========================================================================================================================
// This function merges two balanced BSTs
    /* A function that constructs Balanced
 // Binary Search Tree from a sorted array
 See https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/ */
    Node* sortedArrayToBST(Data arr[], int start, int end)
    {
        /* Base Case */
        if (start > end)
            return NULL;

        /* Get the middle element and make it root */
        int mid = (start + end)/2;
        Node *rootNew = newNode(arr[mid]);

        /* Recursively construct the left subtree and make it
        left child of root */
        rootNew->left = sortedArrayToBST(arr, start, mid-1);

        /* Recursively construct the right subtree and make it
        right child of root */
        rootNew->right = sortedArrayToBST(arr, mid+1, end);

        return rootNew;
    }

//---------------------------------------------------printInorder--------------------------------------------------------
//========================================================================================================================
    void printInorder(Node *nodeRoot) {
        // if current nodeRoot is NULL
        if (!nodeRoot) {
            return;
        }

        printInorder(nodeRoot->left);

        // Print nodeRoot of current data
        nodeRoot->key.data->print();
        printInorder(nodeRoot->right);
    }

//---------------------------------------------------findPreSuc----------------------------------------------------------
//========================================================================================================================
    void findPreSuc(Node *node, Node *&pre, Node *&suc, Data key) {
        // Base case
        if (node == NULL) return;

        // If key is present at node
        if (node->key == key) {
            // the maximum value in left subtree is predecessor
            if (node->left != NULL) {
                Node *tmp = node->left;
                while (tmp->right)
                    tmp = tmp->right;
                pre = tmp;
            }

            // the minimum value in right subtree is successor
            if (node->right != NULL) {
                Node *tmp = node->right;
                while (tmp->left)
                    tmp = tmp->left;
                suc = tmp;
            }
            return;
        }

        // If key is smaller than node's key, go to left subtree
        if (node->key > key) {
            suc = node;
            findPreSuc(node->left, pre, suc, key);
        } else // go to right subtree
        {
            pre = node;
            findPreSuc(node->right, pre, suc, key);
        }
    }


//---------------------------------------------------search----------------------------------------------------------
//========================================================================================================================
    Node* search(Node* rootNode, Data key)
    {

        // Base Cases: rootNode is null or key is present at rootNode
        if (rootNode == NULL || rootNode->key == key)
            return rootNode;

        // Key is greater than rootNode's key
        if (rootNode->key < key)
            return search(rootNode->right, key);

        // Key is smaller than rootNode's key
        return search(rootNode->left, key);
    }



//---------------------------------------------------deleteNode----------------------------------------------------------
//========================================================================================================================

    // Recursive function to delete a node
// with given key from subtree with
// given rootNode. It returns rootNode of the
// modified subtree.
    Node* deleteNode(Node* rootNode, Data key)
    {

        // STEP 1: PERFORM STANDARD BST DELETE
        if (rootNode == NULL)
            return rootNode;

        // If the key to be deleted is smaller
        // than the rootNode's key, then it lies
        // in left subtree
        if (key < rootNode->key )
            rootNode->left = deleteNode(rootNode->left, key);

            // If the key to be deleted is greater
            // than the rootNode's key, then it lies
            // in right subtree
        else if(key > rootNode->key )
            rootNode->right = deleteNode(rootNode->right, key);

            // if key is same as rootNode's key, then
            // This is the node to be deleted
        else
        {
            // node with only one child or no child
            if((rootNode->left == NULL) ||
               (rootNode->right == NULL) )
            {
                Node *temp = rootNode->left ?
                             rootNode->left :
                             rootNode->right;

                // No child case
                if (temp == NULL)
                {
                    temp = rootNode;
                    rootNode = NULL;
                }
                else // One child case
                    *rootNode = *temp; // Copy the contents of
                // the non-empty child
                free(temp);
            }
            else
            {
                // node with two children: Get the inorder
                // successor (smallest in the right subtree)
                Node* temp = minValueNode(rootNode->right);


                // Copy the inorder successor's
                // data to this node
                rootNode->key = temp->key;

                // Delete the inorder successor
                rootNode->right = deleteNode(rootNode->right,
                                             temp->key);
            }
        }

        // If the tree had only one node
        // then return
        if (rootNode == NULL)
            return rootNode;

        // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE
        rootNode->height = 1 + max(height(rootNode->left),
                                   height(rootNode->right));

        // STEP 3: GET THE BALANCE FACTOR OF
        // THIS NODE (to check whether this
        // node became unbalanced)
        int balance = getBalance(rootNode);

        // If this node becomes unbalanced,
        // then there are 4 cases

        // Left Left Case
        if (balance > 1 &&
            getBalance(rootNode->left) >= 0)
            return rightRotate(rootNode);

        // Left Right Case
        if (balance > 1 &&
            getBalance(rootNode->left) < 0)
        {
            rootNode->left = leftRotate(rootNode->left);
            return rightRotate(rootNode);
        }

        // Right Right Case
        if (balance < -1 &&
            getBalance(rootNode->right) <= 0)
            return leftRotate(rootNode);

        // Right Left Case
        if (balance < -1 &&
            getBalance(rootNode->right) > 0)
        {
            rootNode->right = rightRotate(rootNode->right);
            return leftRotate(rootNode);
        }

        return rootNode;
    }

    Node * minValueNode(Node* node)
    {
        Node* current = node;
        /* loop down to find the leftmost leaf */
        while (current->left != NULL)
            current = current->left;

        return current;
    }
};



///========================================================================================================================
//------------------------------------------------------AVL------------------------------------------------------------------
///========================================================================================================================



///========================================================================================================================
//----------------------------------------------CellGeneral------------------------------------------------------------------
///========================================================================================================================
//For hold a pointer for object i created a generic cell how cen manage with any variable
template<class Data>
class CellGeneral {
public:
    Data *data;

    CellGeneral &operator=(const CellGeneral<Data> &other);
    CellGeneral(Data data1);
    CellGeneral() = default;
    ~CellGeneral() = default;
    friend ostream& operator<<(ostream& os, const CellGeneral<Data>& dt);
};

template<class Data>
CellGeneral<Data>::CellGeneral(Data data1){
    Data* data2=new Data(data1);
    this->data=data2;
}

//----------------------------------------Operators CellGeneral--------------------------------------------------------------------------------
//========================================================================================================================

template<class Data>
bool operator<(const CellGeneral<Data> &data1, const CellGeneral<Data> &data2) {
    return (data1.data < data2.data);
}

template<class Data>
bool operator>(const CellGeneral<Data> &data1, const CellGeneral<Data> &data2) {
    return (data1.data > data2.data);
}

template<class Data>
bool operator==(const CellGeneral<Data> &data1, const CellGeneral<Data> &data2) {
    return (data1.data == data2.data);
}


template<class Data>
CellGeneral<Data> &CellGeneral<Data>::operator=(const CellGeneral<Data> &other) {
    this->data = other.data;
    return *this;
}

template<class Data>
ostream& operator<<(ostream& os, const CellGeneral<Data>& dt)
{
    dt.data->print();
    return os;
}
///========================================================================================================================
//--------------------------------------------------CellGeneral------------------------------------------------------------
///========================================================================================================================




#endif //UNTITLED78_AVL_H
//======================================================================================================================
///=====================================================================================================================
///======================================================================================================================
//                           $$$$$               $$$$          $$$$       $$$$
///                        $$$   $$$              $$$$        $$$$        $$$$
//                        $$$     $$$              $$$$      $$$$         $$$$
///                      $$$$$$$$$$$$$$             $$$$    $$$$          $$$$
//                      $$$$        $$$$             $$$$  $$$$           $$$$$$$$$$$$$
///                    $$$$          $$$$              $$$$$$             $$$$$$$$$$$$$$
///======================================================================================================================
///======================================================================================================================
//=======================================================================================================================



