//linked list insert at end logic
//Code::Blocks 17.12

#include <iostream>
#include <stdlib.h>

using namespace std;

struct list1{
    int data;
    struct list1 *next;
};
int main(){
    char ch;
    int element;
    struct list1 *node, *start=NULL, *ptr;
    do{
        cout<<"Enter the element to be inserted at the end of the list:"<<
        "(list initially empty)";
        cin>>element;
        node=(struct list1 *)malloc(sizeof(struct list1));
        node->data=element;
        node->next=NULL;
        if(start==NULL){
            start=node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=node;
        }
        //time to print the new list
        cout<<"\nList now is:\n";
        if(start==NULL){
            cout<<"List is empty!";
            exit(0);
        }
        else{
            ptr=start;
            while(ptr!=NULL){
                cout<<ptr->data<<"\t";
                ptr=ptr->next;
            }
        }
        cout<<"\nWant to continue insertion:";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
