#include <stdio.h>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	Nodo *head=NULL ;

    
	
	
	stampa(head);

    
    Nodo n1;
    n1.x=7;
    n1.next=NULL;
    head=&n1;
   

    
    
	
	
	
	
	stampa(head);

    
    Nodo n2;
    n2.x=9;
    n2.next=NULL;
    n2.next=head;
    head=&n2;
    
    
	
	
	
	
	stampa(head);

    Nodo n3;
    n3.x=2;
    n3.next=NULL;
    n3.next=head;
    head=&n3;
    
   
   
   
   
   
    stampa(head);
    
    Nodo n4;
    n4.x=11;
    n4.next=NULL;
    n4.next=head;
    head=&n4;
    
    stampa(head);
    
    
    return 0 ;
}





void  stampa (Nodo * head)
{
    Nodo *temp;

    tem =head;
    if(temp!=NULL){
	while (temp!= NULL) {
        printf ("\n %d \n" , temp->v);
        temp=temp->next ;
    }
	}else{
		printf("NULL\n");
	}
    printf ("\n");
}

