#include <iostream>
#include<math.h>
using namespace std;

int main() {
   int size,temp,i,j,find;
   cout <<"Enter Number: ";
   cin >> size;
   int arr[size];
   cout<<"Arrays are:"<<endl;
   for(i = 0;i < size;i++){
       arr[i] = rand()%100;
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Array After Sort:"<<endl;
    for (int k = 0;k < size-1;k++) {
        for(j = 0;j < size-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   for(i = 0;i < size;i++){
       cout << arr[i]<<" ";
   }
   cout << endl;
   cout <<"Square Root of Size: ";
   int jump = sqrt(size);
   cout << jump<<endl;
   cout <<"Find The Number: ";
   cin >> find;
   temp = 0;
   bool stop = true;
   for(j = 0;j < size-1+jump&&stop;j += jump){
       if(j<size) {
            if(arr[j] == find){
                cout << j;
                stop=false;
            }
            else if(arr[j] > find){
                for (int l = j; l > j-jump; l--){
                    if(arr[l] == find){
                        cout << l;
                        stop=false;
                    }
                }   
            }
       }
       else
       {
           j=size-1;
           for(int index=j;index>j-jump;index--){
               if(arr[index] == find){
                    cout << index;
                    break;
                }
           }
       }
   }

}

//j<size
//1,2,3,4,5,6,7,8,9
//0,1,2,3,4,5,6,7,8