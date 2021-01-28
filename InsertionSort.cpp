#include <iostream>
using namespace std;
void insert(int arr[],int a){
    int k,j;
    for(int step=1;step<a;step++){
        k=arr[step];//4//3
        j=step-1;//0//1
        while(k<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;//4
    }
}
void print(int arr[],int a){
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    insert(arr,5);
    print(arr,5);
}