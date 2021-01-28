#include <iostream>
using namespace std;

int main()
{
   int size,temp,i,j,find,m;
   cout <<"Enter Length of Array: ";
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
    cout << "\b \b\n";
    // int m = size/2.0+0.5;
    // cout<<m;
    int l = 0;
    int h = size-1; 
    cout <<"Find The Number: ";
    cin >> find;
    bool check=true;
    for(i=0;i<size-1 && check;i++){//1 2 3 4 5 6 7 8 9
         m = (l + h)/2;
        if (find == arr[m])
        {   cout<<m;
            check=false;
        }
        else if (find > arr[m])// This one is the right side
            l = m + 1;
        else                 // this one is the left side
            h = m - 1;
    }
    
}
