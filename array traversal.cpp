//array traversal
//Tested in Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Traversing array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
