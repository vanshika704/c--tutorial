#include<iostream>
using namespace std;
bool search( int arr[],int size,int key){
for(int i=0;i<=size;i++){
    if (arr[i]==key){
        return 1;
    }
}
return 0;
}


int main() {int key;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<" enter key";
    cin>>key;
     bool found =search(arr,10,key);
     if (found){
        cout<<" present"<< endl;

     }
     else{
        cout<<"absent"<< endl;
     }
    return 0;
}
