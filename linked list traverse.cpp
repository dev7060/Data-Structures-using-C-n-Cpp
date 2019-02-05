//linked list traverse
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
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter list: ";
    struct list1 *start, *ptr, *node;
    start=NULL;
    for(int i=0; i<n; i++){
        cin>>element;
        //now have to push this element to the list
        node=(struct list1 *)malloc(sizeof(struct list1));
        //node space allocated
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
    }
    //list traverse
    cout<<"\nTraversing linked list:\n";
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
    return 0;
}
