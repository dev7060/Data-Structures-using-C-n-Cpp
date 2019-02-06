//linked list delete at end logic
//Code::Blocks 17.12

#include <iostream>
#include <stdlib.h>

using namespace std;

struct list1{
    int data;
    struct list1 *next;
};
int main(){
    int n, item, element;
    struct list1 *node, *start=NULL, *ptr, *temp;
    cout<<"Enter n: "; cin>>n;
    cout<<"\nEnter list items: ";
    for(int i=0; i<n; i++){
        cin>>element;
        node=(struct list1 *)malloc(sizeof(struct list1));
        node->data=element;
        node->next=NULL;
        //time to add this node to the list
        //insert at end logic
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
    }
    //linked list insertion done
    //time to delete the last element from the list
    struct list1 *ptr1, *ptr2;
    if(start==NULL){
        //case possible when user inputs n=0
        cout<<"\nEmpty list!";
        exit(0);
    }
    else{
            if(start->next==NULL){
                ptr=start;
                start=NULL;
                item=ptr->data;
                free(ptr);
            }
            else{
                    ptr1=start;
                while(ptr1->next!=NULL){
                    ptr2=ptr1;
                    ptr1=ptr1->next;
                }
                ptr2->next=NULL;
                item=ptr1->data;
                free(ptr1);
            }
            cout<<"\nDeleted element is: "<<item;
    }
    //time to print the list
    cout<<"\nList now is:\n";
    ptr=start;
    if(start==NULL){
        cout<<"\nEmpty list!";
        exit(0);
    }
    else{
        while(ptr!=NULL){
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
    }
    return 0;
}
