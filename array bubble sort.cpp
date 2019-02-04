//array bubble sort
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    //taking array index 1 to N
    int arr[1000], n;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter array: ";
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    //logic logic logic, here comes the logic *drum rolls*
    int k=1, temp;
    for(int i=1; i<=(n-1); i++){
        for(int j=1; j<=(n-k); j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        k++;
    }
    cout<<"\nArray after bubble sorting:\n";
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
