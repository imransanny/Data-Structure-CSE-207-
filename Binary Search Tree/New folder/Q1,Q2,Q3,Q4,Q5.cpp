
#include<iostream>
using namespace std;

typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;

} treenode;


treenode *findmin(treenode *node)
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

treenode *findmax(treenode *node)
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

    if(node == NULL)
    {
        treenode *temp;
        temp = (treenode *)malloc (sizeof(treenode));
        temp -> data = data;
        temp -> left =NULL;
        temp -> right = NULL;
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




treenode *find(treenode *node, int data)
{
    treenode *temp = node;

    if(temp == NULL)
    {
        return NULL;
    }
    if(data > temp -> data)
    {
        return find(temp -> right, data);
    }
    else if(temp -> data> data)
    {
        return find (temp -> left, data);
    }
    else
    {
        return temp ;
    }


}



void displayInorder(treenode *node )
{
    if(node == NULL)
    {

        return;
    }
    displayInorder(node->left);
    cout<<" " << node-> data;
    displayInorder(node -> right);
}

void displaypreorder(treenode *node)
{

    if(node != NULL)
    {
        cout<<" " << node -> data;
        displaypreorder(node  -> left);
        displaypreorder(node-> right);
    }
}

void displaypostorder(treenode *node )
{
    if(node != NULL)
    {
        displaypostorder(node ->left);
        displaypostorder(node->right);
        cout<<" " << node ->data;
    }
}





treenode *deletenode (treenode *node, int data)
{
    if(node == NULL)
    {
        return  node;
    }
    if (data < node->data)
    {
        node->left =  deletenode (node->left, data);
    }
    if (data > node->data)
    {
        node->right=  deletenode (node->right, data);
    }
    else
    {

        if (node ->left == NULL && node->right == NULL)
        {
            delete node;
            node = NULL;
            return node;

        }

        else   if (node ->left == NULL )
        {
            treenode*temp = node;
            node = node->right;
            delete temp;
            return node;
        }

        else   if (node ->right == NULL )
        {
            treenode *temp = node;
            node = node->left;
            delete temp;
            return node;
        }
    }

    if(node == NULL) return  node;
    if (data < node->data)
    {
        node->left =  deletenode (node->left, data);
    }

    if (data > node->data)
    {
        node->right=  deletenode (node->right, data);
    }
    else
    {
        treenode *temp = findmin( node->right);
        node->data = temp->data;
        node->right = deletenode (node->right, temp->data);
        return node;
    }


}


int main()
{

    treenode *root = NULL, *temp, *min, *max, *search;
    int choice, item, searchdata, deleteitem, n;


    while(1)
    {

        cout<<endl <<"Menu";

        cout<<"\n 1. Insert";
        cout<<"\n 2. Search";
        cout<<"\n 3. Inorder";
        cout<<"\n 4. pre order";
        cout<<"\n 5. post order";

        cout<<"\n 6. Delete";
        cout<<"\n 7. find minimum";
        cout<<"\n 8. find maximum";
        cout<<"\n 9.  Exit\n";
        cout<<"Choose option: ";

        cin>> choice;


        switch (choice)
        {
        case 1:
            cout<<"insert number of totat data : ";
            cin>>n;
            cout<< "Input item: ";
            for(int i=0 ; i<n ; i++)
            {
                cin>> item;
                root = insert(root, item);
            }
            break;

        case 2:
            cout<< "Input Search item: ";
            cin>> searchdata;

            search = find(root,searchdata);
            if(search != NULL)
            {
                cout<<"search successfully "<< search->data <<" is found";
            }
            else
            {
                cout<<"Data not found in Tree";
            }
            break;




        case 3:




            cout<< "Inorder : ";
            displayInorder(root);
            break;

        case 4:
            cout<<" pre order : ";
            displaypreorder(root);
            break;
        case 5:
            cout<<" post order : ";
            displaypostorder(root);
            break;


        case 6:
            cout<< "Input Delete item: ";
            cin>> deleteitem ;
            root = deletenode(root,deleteitem);
            //  cout<<"Delete successfully " << root->data;
            break;


        case 7:

            min = findmin(root);
            cout<<"Smallest Element = " << min->data;
            break;
        case 8:
            max = findmax(root);
            cout<<" Largest Element = " << max ->data;
            break;

        case 9:
            break;


        }
        if(choice == 9)
        {
            break;
        }

    }

}
