//array insertion at beginning
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, element;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element: "; cin>>element;
    //here comes the algo
    for(int i=n; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;
    n++;
    //time to print the new array YAY!
    cout<<"Array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
