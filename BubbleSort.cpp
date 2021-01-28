#include <iostream>
using namespace std;
int main() {
  int a[]={1,2,9,7,5};
  int j,i,c=0;
  int len = sizeof(a)/sizeof(a[0]);
  for(i=0;i<len;i++) {
      cout<<a[i]<<endl;
  }
  cout<<endl;
  for(j=0;j < len-1;j++) {
    for( i=0;i < len-1;i++) {
        if(a[i] > a[i+1]) {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        } 
    }
  }
  for(i=0;i<len;i++) {
      cout<<a[i]<<endl;
    }
}
/*
 [8, 1, 2, 4, 3]
 [1, 8, 2, 4, 3] - 1
 [1, 2, 8, 4, 3] - 2
 [1, 2, 4, 8, 3] - 3
 [1, 2, 4, 3, 8] - 4
 [1, 2, 3, 4, 8] - 5
*/
// for(j=0;j<a.length-1;j++) { j = 1
//     for(i=0;i<a.length-1;i++) {
//         if(a[i] > a[i+1]) {
//             c=a[i]  
//             a[i]=a[i+1]
//             a[i+1]=c
//         } 
//     }
// }

// a = [1, 2, 7, 5, 9]
// a = [1, 2, 5, 7, 9]
// a = [2, 1, 3, 4, 5]
// a = [1, 2, 3, 4 ,5]
// a = [5, 4, 3, 2, 1]