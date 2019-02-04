//array binary search
//Code::Blocks 17.12

#include <iostream>

using namespace std;

int main(){
    //taking array index from 1 to N
    int arr[1000], n, element, beg, en, mid;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter array in sorted form: ";
    //if to enter the array in non-sorted form, sorting logic can
    //be applied
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search for: "; cin>>element;
    //*Triple H theme song plays*
    //Time to play the game
    //here's the algo 3..2..1
    beg=1; //lower bound
    en=n; //upper bound
    mid=(beg+en)/2;
    while((beg<=en) && arr[mid]!=element){
        if(arr[mid]<element){
            beg=mid+1;
        }
        else{
            en=mid-1;
        }
        mid=(beg+en)/2;
    }
    if(arr[mid]==element){
        cout<<"Hoiyyaaaaa! Element found at position: "<<mid;
    }
    else{
        cout<<"Error 404 (not really)! Element not found!";
    }
    return 0;
}
