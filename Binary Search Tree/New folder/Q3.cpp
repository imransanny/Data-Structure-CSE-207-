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





}
