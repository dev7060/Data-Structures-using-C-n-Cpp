//array deletion at end logic
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n;
    cout<<"Enter n: "; cin>>n;
    //array insertion
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //here we go, just a single line
    n--;
    //traversing array
    cout<<"Array after deletion at end:\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
