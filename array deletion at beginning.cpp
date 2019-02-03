//array deletion at beginning
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n;
    cout<<"enter n: "; cin>>n;
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //algo to delete the first element
    for(int i=0; i<(n-1); i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"\nArray traversal after 1st element deletion: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
