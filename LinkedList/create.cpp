#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
  int data;
  struct node *next;
  };
int main(){
  struct node *start = NULL;
  struct node *new_node, *ptr;
  int num;
  printf("Welcome to Creating a Linked List Program");
  printf("\n Enter -1 to end");
  printf("\n Enter the data : ");
  scanf("%d",&num);

  while(num!=-1){
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    if(start == NULL){
      new_node->next = NULL;
      start = new_node;}
    else 
      {
        ptr = start;
        while(ptr->next!= NULL){
          ptr = ptr->next;}
        ptr->next = new_node;
        new_node->next = NULL;
      }
      printf("\n Enter the data : ");
      scanf("%d",&num);
  }  
}