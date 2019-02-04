//array linear search
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], flag=0, n, element, position, index;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched for: ";
    cin>>element;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            position=i+1;
            index=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found at position: "<<position<<
        " and index: "<<index;
    }
    else{
        cout<<"Error 404 (not really)! Element not found!";
    }
    return 0;
}
