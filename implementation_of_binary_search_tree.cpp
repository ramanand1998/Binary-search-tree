#include <iostream>
using namespace std;
struct bstnode
{
    int data;
   bstnode* left;
   bstnode* right;
    
};
bstnode* getnewnode(int data)
{
  //  cout<<"k";
     bstnode* newnode=new bstnode();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
   // cout<<"k";
    return newnode;  
}
bstnode* insert(bstnode* root,int data)
{
    if(root==NULL)
    {//cout<<"k";
        root=getnewnode(data);
       // return root;
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
bool search(bstnode* root,int data)
{
    if(root==NULL)
    return false;
    else if(root->data==data)
    return true;
    else if(data<=root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
}
int main() {
	// your code goes here
    bstnode* root=NULL;
   root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
     if(search(root,30)==true)
     {
         cout<<"f";
     }
     else
     {
         cout<<"nf";
     }
	return 0;
}
