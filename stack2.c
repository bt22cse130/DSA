#include<stdio.h>

void push(int data,int arr[],int size,int *top)
{
  if((*top)==-1)
  {
    arr[size-1]=data;
    *top=size-1;
    printf("top value=%d\n",*top);
  }
  else{
     arr[(*top)-1]=data;
     (*top)--;
     printf("top value=%d\n",*top);
  }
}
 void print(int *top,int arr[],int size)
 {
    while((*top)<size )
    {
      printf("%5d",arr[*top]);
      (*top)++;
    }
 }


int main()
{  int size;
   printf("Enter the size of the stack : ");
   scanf("%d",&size);

   int arr[size];
    int top=-1;
   for(int i=0;i<size;i++)
   {
     int data;
     printf("Enter the Element in your stack : ");
     scanf("%d",&data);
     printf(" pehele vali : %d\n",top);
     push(data,arr,size,&top);

   }  
    print(&top,arr,size);
   pop(arr,size,&top);


  return 0;
}