//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node *head ;
  typedef struct node Node;
  typedef Node* NodePtr;
  
  NodePtr p= (NodePtr) malloc (sizeof(Node)); //is &a and p is pointer.
  head=p; //or &*p;
  p->value = c;
  int i,n=4;
    //loop 4 V
   for(i=0;i<n;i++){
      p->next=(NodePtr) malloc (sizeof(Node));
      p=p->next; //ขยับp
      p->value = c+i+1;
      p->next=NULL;
     /*  p->nextc;; //is &b
    p->next->value=head->value+3;

    p->next->next= (NodePtr) malloc (sizeof(Node)); //is &d;
    p->next->next->value=11;
    p->next->next->next=NULL; */
     
     }
  
  
   
    
    
  
  
    //printf("%d\n", head ->value ); //what value for 5
    //printf("%d\n", head ->next->value ); //what value for 8

  
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 
  struct node d;
  b.next=&d;
  d.value=11;
  d.next=NULL;
  printf("%d\n",d.value);
  or printf("%d\n",b.next->value);
  or printf("%d\n",a.next->next->value);
  pr printf("%d\n",head->next->next->value);
  */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        

struct node z;
z.value=2;
z.next=&a;
head=&z;
printf("%d->",head->value);
printf("%d->",head->next->value);
printf("%d->",head->next->next->value);
printf("%d->NULL\n",head->next->next->next->value); 
*/

  
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        } */
    
   //int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d->", tmp->value);
            tmp=tmp->next;
          }
        printf("NULL\n"); 

  
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        } */
    
          tmp=head;
          while(tmp!=NULL){
            printf("%3d->", tmp->value);
            tmp=tmp->next;
            }
     printf("NULL\n"); 
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    p=head;
    while(p!=NULL){
    tmp=p;
    printf("deleting %d\n",tmp->value);
      p=p->next;
    free(tmp);
    }
    return 0;}
