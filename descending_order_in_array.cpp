#include <iostream>
using namespace std;
int main(){
    int arr[5],temp;
    for(int i=0;i<5;i++){
        cout << "Enter the"<< i+1<<"number:";
        cin >> arr[i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]>arr[i]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
            
        }
    }
    cout<<"\narray after sorting in descending order\n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}