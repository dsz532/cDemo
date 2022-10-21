#include <stdio.h>
#include "node.h"
#include <stdlib.h>

int main() {
    Node *head = NULL;
    int d = 0;
    for (int c = 0; c < 3; c++) {
        scanf("%d", &d);
        Node *p = (Node *) malloc(sizeof(Node));
        p->value = d;
        p->next = 0;
        Node *last = head;
        if (last) {
            while (last->next) {
                last = last->next;
            }
            last->next = p;
        } else {
            head = p;
        }
    }
//    int isfound=0;
//    for(Node *p=head;p;p=p->next){
//        if(p->value==2){
//            printf("get it");
//            isfound++;
//            break;
//        }
//    }
//    if(!isfound){
//        printf("didn`t find");
//    }
    Node *q=head;
    for(Node *p=head;p;p=p->next){
        if(p->value==2){
            q->next=p->next;
            free(p);
            break;
        } else{
            q=p;
        }
    }
    for(Node *p=head;p;p=p->next){
        printf("%d",p->value);
    }
    return 0;
}
