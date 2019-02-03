//array insertion at end logic
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, element;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element: "; cin>>element;
    n++;
    arr[n-1]=element;
    cout<<"\nArray after inserting element at the end:\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
