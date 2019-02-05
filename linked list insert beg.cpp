//linked list insert beg
//Code::Blocks 17.12

#include <iostream>
#include <stdlib.h>

using namespace std;

struct list1{
    int data;
    struct list1 *next;
};

int main(){
    int n, element;
    struct list1 *start=NULL, *node, *ptr;
    cout<<"enter n: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>element;
        node=(struct list1 *)malloc(sizeof(struct list *));
        node->data=element;
        node->next=NULL;
        if(start==NULL){
            start=node;
            //the next of start is automatically NULL now
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=node;
        }
    }
    cout<<"Enter the element to be inserted at first: ";
    cin>>element;
    node=(struct list1 *)malloc(sizeof(struct list1));
    node->data=element;
    node->next=NULL;
    if(start==NULL){
        start=node;
    }
    else{
        node->next=start;
        start=node;
    }
    //time to traverse the new list after insertion at the beginning
    //of the list
    cout<<"\nList after insertion at the beginning:\n";
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
    return 0;
}
