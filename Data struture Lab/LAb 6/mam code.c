#include<iostream>
using namespace std;

typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;

} treenode;


treenode *findmin(treenode, *node)
{

    if(node == NULL)
    {
        return NULL;
    }
    if(node -> left )
    {
        return findmin(node-> left);
    }
    else
    {

        return node;
    }

}


treenode *finmax(treenode *node)
{

    if(node == NULL)
    {
        return NULL;
    }
    if(node -> right)
    {
        return findmax( node ->right);
    }
    else
    {
        return node ;
    }
}



treenode *insert(treenode *node, int data)
{

    if(node == NULL
{
    treenode *temp;
    temp = (treenode *)malloc (sizeof(treenode));
        temp -> data = data;
        tmep -> left =NULL;
        tmep -> right = NULL;
        return temp;

    }

    if(data > (node -> data))
{
    node -> right = insert(node -> right, data);
    }
    else if( data < (node ->data))
{
    node -> left = insert (node ->left, data);
    }
    return node;
}



treenode *delete(treenode *node, int data)
{

    else if(data > node ->data)
    {
        node -> right = delete(node ->right, data);
    }
    else
    {
        if(node -> right && node -> left )
        {

            temp = node ;
            if(node -> left == NULL)
            {
                node = node ->right;
            }
            else if(node -> right == NULL)
            {
                node = node -> left;
                free (temp);
            }
        }
        return node;

    }

}



treenode *find(treenode *node, int data)
{
    if(node = NULL)
    {
        return NULL;
    }
    if(data > node -> data)
    {
        return find(node -> right, data);
    }
    else if(node -> data)
    {
        return find (node -> left, data);
    }
    else
    {
        return node ;
    }


}

void displayInorder(treenode *node )
{
    if(node == NULL)
    {

        return;
    }
    displayInorder(node->left);
    cout<<node-> data;
    displayInorder(node -> right);
}


/*

if(node == NULL)
{
    treenode *temp;
    temp = (treenode *)malloc (sizeof(treenode));
    temp -> data = data;
}

}

*/





int main()
{

    treenode *root = NULL, *temp;
    int choice, item;
    while(1)
    {

        cout<<endl <<"Menu";
        cout<<"\n 1. Insert";
        cout<<"\n 2. Inorder";
        cout<<"\n 3. pre order";
        cout<<"\n 4. post order";
        cout<<"\n 5. Search";
        cout<<"\n 6. find min";
        cout<<"\n 7. find max";
        cout<<"\n  8. Delete";
        cout<<"\n 9. delete";
        cout<<"\n 10.  Exit";

        cin>> choice;
        switch (choice)
        {
        case 1:
            cout<< "Input item";
            cin>> item;
            root = insert(root, item);
            break;

        case 2:
            displayInorder(root);
            break;

        case 3:
            displaypreorder(root);
            break;
        case 4:
            displaypostorder(root);
            break;

        }


    }

}
