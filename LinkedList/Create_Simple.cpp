#include<stdio.h>
#include<stdlib.h>

//Node
struct Node
{
  int data;
  struct Node* ptr;
};

void display( struct Node* start){
  while(start!= NULL){
    printf("\n%d",start->data);
    start = start->ptr; 
  }
}

int main(){
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* last = NULL;

// allocate 3 nodes in the heap
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  last = (struct Node*)malloc(sizeof(struct Node));

/* Three blocks have been allocated dynamically.
     We have pointers to these three blocks as head,
     second and third    
       head           second           last
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
    
   # represents any random value.
   Data is random because we haven’t assigned
   anything yet  */

// Assign data in node
// Link one node with the other node
  head->data = 1; 
  head->ptr = second;

  second->data = 2;
  second->ptr = last;

  last->data = 3;
  last->ptr = NULL;

/* data has been assigned to the data part of the second
     block (block pointed by second). And next
     pointer of the second block points to the third
     block. So all three blocks are linked.
   
       head         second         last
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

 /* data has been assigned to data part of third
    block (block pointed by third). And next pointer
    of the third block is made NULL to indicate
    that the linked list is terminated here.
 
     We have the linked list ready. 
 
           head   
             |
             |
        +---+---+     +---+---+       +----+------+
        | 1  | o----->|  2  | o-----> |  3 | NULL |
        +---+---+     +---+---+       +----+------+      
    
     
    Note that only head is sufficient to represent
    the whole list.  We can traverse the complete
    list by following next pointers.    */

//Display
/*printf("Last = %d",last->data);
  printf("\nFirst = %d",head->data);
  printf("\nSecond = %d",second->data);
*/display(head);  
}