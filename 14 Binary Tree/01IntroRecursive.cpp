#include <iostream>
#include <queue>
using namespace std;

/*
Binary Tree:
                40
              /   \
            30     50
          /  \     /   \
        25   55   45   60

*/

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// function to build a tree
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// function to build binary tree from level order
void buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root: \n";
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

// function to traverse tree in level order
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // previous level is completely travese
            cout << endl;
            if (!q.empty())
            {
                // queue still hs some child node
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// function to traverse tree inorder
void inoderTraversal(node *root)
{
    if (root == NULL)
        return;

    inoderTraversal(root->left);
    cout << root->data << " ";
    inoderTraversal(root->right);
}

// function to traverse tree in preorder
void preorderTraversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    inoderTraversal(root->left);
    inoderTraversal(root->right);
}

// function to traverse tree in postorder
void postorderTraversal(node *root)
{
    if (root == NULL)
        return;

    inoderTraversal(root->left);
    inoderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    /*
    root = buildTree(root); // Input: 40 30 25 -1 -1 55 -1 -1 50 45 -1 -1 60 -1 -1
    */
    buildFromLevelOrder(root); // Input: 40 30 50 25 55 45 60 -1 -1 -1 -1 -1 -1 -1 -1

    cout << "printing level order traversal: \n";
    levelOrderTraversal(root);
    cout << "\nprinting inorder traversal: \n";
    inoderTraversal(root);
    cout << "\nprinting preorder traversal: \n";
    preorderTraversal(root);
    cout << "\nprinting postorder traversal: \n";
    postorderTraversal(root);
}