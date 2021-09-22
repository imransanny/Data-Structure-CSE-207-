#include<iostream>
using namespace std;

typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;

} treenode;

  struct node *root;
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

 // mam lab lecture

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
      if(node == NULL){
         return  node;}
      if (data < node->data){
            node->left =  deletenode (node->left , data);
      }if (data > node->data) {
          node->right=  deletenode (node->right , data);
      }else
      {
           // case 1: no child
              if (node ->left == NULL && node->right == NULL)
                   {delete node;
                   node = NULL;
                   return node;

                   }
                // case 2: one child
            else   if (node ->left == NULL )
                   {  treenode*temp = node;
                      node = node->right;
                      delete temp;  return node;
                    }

                    else   if (node ->right == NULL )
                   { treenode *temp = node;
                      node = node->left;
                      delete temp;  return node;
                     }
      }

            if(node == NULL) return  node;
      if (data < node->data) node->left =  deletenode (node->left , data);
      if (data > node->data) node->right=  deletenode (node->right , data);
      else
      { // case 3
           treenode *temp = findmin( node->right);
           node->data = temp->data;
            node->right = deletenode (node->right, temp->data);
             return node;
      }


}   //slide code and its working perfectly

/*
treenode *  find(treenode* root, int key)
{
   
    if (root == NULL || root->key == key)
       return root;
    // Key is greater than root's key
    if (root->key < key)
       return find(root->right, key); 
    // Key is smaller than root's key
    return find(root->left, key);
}
*/

treenode * search(struct node* root, int data)
{
 treenode  *current = root;
      while(current->data != data)
  {
     if(current != NULL)
      {
         if(current->data > data)
              current = current->leftChild;
         else
     current = current->rightChild; }
      }
 return current;
}


int main()
{

    treenode *root = NULL, *temp, *min, *max, *find;
    int choice, item, searchdata, deleteitem, n;
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
        cout<<"\n 9.  Exit\n";

        cin>> choice;
        switch (choice)
        {
        case 1:
            cout<<"insert number of totat data : ";
            cin>>n;
            cout<< "Input item: ";
            for(int i=0 ; i<n ; i++){
            cin>> item;
            root = insert(root, item);
            }
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
        case 5:
            cout<< "Input Search item: ";
            cin>> searchdata;
            find = search(root,searchdata);
            cout<<"search successfully"<< find->data <<"is found";
            break;
        case 6:

            min = findmin(root);
            cout<<"min = " << min->data;
            break;
        case 7:
            max = findmax(root);
            cout<<" max = " << max ->data;
            break;
        case 8:
            cout<< "Input Delete item: ";
            cin>> deleteitem ;
            root = deletenode(root,deleteitem);
          //  cout<<"Delete successfully " << root->data;
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
