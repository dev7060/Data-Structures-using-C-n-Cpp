//array insertion at loc
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, element, loc;
    //taking array index from 1 to N
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be inserted: "; cin>>element;
    cout<<"Enter the location of insertion: "; cin>>loc;
    //here comes the logic 3..2..1..
    for(int i=n; i>=loc; i--){
        arr[i+1]=arr[i];
    }
    n++;
    arr[loc]=element;
    //time to print the new array
    cout<<"\nArray after insertion:\n";
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
