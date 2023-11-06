#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node {
    int val;
    int row;
    int column;
    struct  node *next;
};
struct node * createnode(struct node *head)
{
   struct node *new_node,*runner;
   new_node=(struct node *)malloc(sizeof(struct node));
   printf("\nEnter Row No. : ");
   scanf("%d",&new_node->row);
   printf("\nEnter Column No. : ");
   scanf("%d",&new_node->column);
   printf("\nEnter Value. : ");
   scanf("%d",&new_node->val);
   new_node->next=NULL;


   if(head==NULL)
   {
    head=new_node;
   }
   else{
    runner=head;
    while(runner->next != NULL)
    {
        runner= runner->next;
    }
    runner->next = new_node;
   }

  return head;
}
void add(struct node*head1,struct node *head2)
{
    struct node *runner1,*runner2,*head,*new_node.*temp;
    head=NULL;
    runner1=head1;
    

    while(runner1 != NULL)
    {  runner2=head2;
        while(runner2 != NULL)
        {
           if((runner1->row == runner2->row)&&(runner1->column == runner2->column))
           {
            int ad=runner1->val + runner2->val;
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node->row=runner1->row;
            new_node->column=runner1->column;
            new_node->next =NULL;
            if(head==NULL)
            {}

            
           }
            runner2=runner2->next;
        }
         runner1=runner1->next;
    }
    
            
    

}



void print(struct node *head)
{   printf("\nRow No.\t\tColumn No.\tElement\n");
    while(head != NULL)
    {
        printf("%d\t\t",head->row);
        printf("%d\t\t",head->column);
        printf("%d\t\t",head->val);
        printf("\n");
        head=head->next; 
    }
    printf("\n\n\n");
}

int main()
{
   struct node *head1,*head2,*head;
   head1= NULL;
   head2=NULL;
   head=NULL;
   for(int i=0;;i++)
   {int n;
    printf("\n for Stop inserting press 0 : ");
    scanf("%d",&n);
    if(n==0)
    {
      break;
    }
    else
    head=createnode(head1);
   }

    print(head1);
    head= add(head1,head2);
    print(head);
    free(head);
    free(head1);
    free(head2);

    return 0;
}
