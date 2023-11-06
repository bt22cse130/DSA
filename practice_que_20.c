//you have been given a singly linked list in which nodes are present in increasing order.Your task is to construct
//a balanced binary search tree with the same data elements as the given Linked list.
//A Balanced BST is define as a  BST in which the height of two subtrees of every node no more than 1

#include<stdio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node *next;
    struct node *left;
    struct node *right;
};
struct node* linked_list_maker(int val,struct node*head)
{
    struct node *new_node,*runner;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->val=val;
    new_node->next=NULL;
    new_node->left=NULL;
    new_node->right=NULL;

    if(head == NULL)
    {
        head=new_node;
    }
    else
    {  runner=head;
        while(runner->next != NULL)
        {
            runner=runner->next;
        }
        runner->next=new_node;
    }
}
int total_node(struct node *runner)
{
    int count =0;
    while(runner != NULL){runner=runner->next;count++;}
    return count;
}
struct node* make_BST(struct node *head,int first,int last)
{
    struct node *root,*runner;runner=head;
   root=(struct node *)malloc(sizeof(struct node));
  
  if(first <last){
   int count=(first+last)/2;
   for(int i=first;i<count;i++)
   {
    runner=runner->next;
   }
    root->val=runner->val;
    root->left=make_BST(head->next,first,count);
    root->right=make_BST(head->next,count+1,last);}
  else{
   return root;
  }
}
void display(struct node *root)
{
    if(root==NULL){return;}
    else{
        printf("%2d",root->val);
        display(root->left);
        display(root->right);
    }
}

int main()
{   
    printf("\n\n\n\t\t\t20th Que Of DSA Quations");
    struct node *head;
    head=NULL;
    int n=5;
    while(n--)
    {   int data;
        printf("\nEnter Data in linkedlist : ");
        scanf("%d",&data);
        head=linked_list_maker(data,head);
    }
    
    int size=total_node(head);
    struct node *root;
    root=(head,1,size);
   

    return 0;
}