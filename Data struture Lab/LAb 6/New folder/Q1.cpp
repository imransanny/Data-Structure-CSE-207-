#include<iostream>

using namespace std;

typedef struct treenode
{

    int data;
    struct treenode *left;
    struct treenode *right;
} treenode;


treenode *insert(treenode *node, int data)
{

    if(node == NULL)
    {
        treenode *temp;
        temp = (treenode *) malloc (sizeof(treenode));

        temp->data = data;
        temp ->left = NULL;
        temp ->right = NULL;
        return temp;
    }
    if(data> (node -> data))
    {
        node ->right = insert(node ->right, data);
    }
    else if( data < node ->data)
    {

        node -> left = insert (node ->left, data);
    }
    return node ;
}


int main(){

    treenode *root = NULL, *temp, *min, *max, *search;
    int choice, item, searchdata, deleteitem, n;
 cout<<"insert number of totat data : ";
            cin>>n;
            cout<< "Input item: ";
            for(int i=0 ; i<n ; i++){
            cin>> item;
            root = insert(root, item);
            }

}
