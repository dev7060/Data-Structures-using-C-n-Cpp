//array deletion at loc
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, loc;
    //here assuming array from 1 to N to avoid any confusion
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter array elements: ";
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"Enter location: "; cin>>loc;
    //here comes the logic
    for(int i=loc; i<n; i++){
        arr[i]=arr[i+1];
        //works at extremum conditions as well i.e. loc=1 or loc=n
    }
    n--;
    //time to print the array
    cout<<"\nArray after deletion:\n";
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
