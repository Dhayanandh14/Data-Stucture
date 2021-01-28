import java.util.*;
public class SelectionSort{ //5,4,2,1,3

  public static void main(String [] args) {
    Random rand = new Random();
    Scanner kbd = new Scanner(System.in);
    System.out.print("Enter the number of elements: ");
    int[] arr = new int[kbd.nextInt()];
    //  for (int i = 0;i < arr.length;i++) {
    //    arr[i] = rand.nextInt(100);
    //    System.out.println(arr[i]);
    //  }
    //  System.out.println();
     for (int i = 0;i < arr.length;i++) {
      arr[i]=kbd.nextInt();
     }
    int small;
    int j;
    for(int k=0;k<arr.length;k++) 
    { 
      int p=k;
      small=arr[k];//5,4,3,2,1
      for(j=k+1;j<arr.length;j++) {//1 
        if(small>arr[j]) //
         {
          small=arr[j];
          p=j;
         }
      }
      int a=arr[k];  
      arr[k]=small; 
      arr[p]=a;      
    }
    for(int s=0;s<arr.length;s++) {
      System.out.println(arr[s]);
    }
    
  }
}

//
// for(s=0;s<length;s++) {
  //     for(t=0;t<leng;t++){
  //       if(big>small)
  //         {
  //           temp=small;
  //           small=big; 
  //           big=temp;
            
  //         }
  //     }
  //   }

/*import java.util.*;
public class Main {
  public static int max(int [] a) {

     int big=a[0];
     int i=1;
     for(;i<a.length;i++) // 5 2 3 4 7
      {
         if(big<a[i])
            big=a[i];
      }
      return big;
    
  }  
  public static int min(int [] b) {
     int small=b[0];
     for(int j=1;j<b.length;j++) { 
         if(small>b[j])
            small=b[j];
      }
      return small;
  } 
  // public static int selectionsort(int [] arr) {
  //     for(int s=0;s<arr.length;s++){
  //         for(t=0;t<arr.length;t++) {
              
  //         }
  //     }
    for(s=0;s<length;s++) {
      for(t=0;t<leng;t++){ 20,58
        if(big>small)
          {
            temp=small;
            small=big;
            big=temp;
            
          }
      }
    }
      [5, 3, 2, 1, 4]
      [1, 3, 2, 5, 4]
      [1, 2, 3, 5, 4]
      [1, 2, 3, 5, 4]
      [1, 2, 3, 4, 5] 
  }
  public static void main(String [] args) {
    Random rand = new Random();
    Scanner kbd = new Scanner(System.in);
    System.out.print("Enter the number of elements: ");
    int[] arr = new int[kbd.nextInt()];
    for (int i = 0;i < arr.length;i++) {
      arr[i] = rand.nextInt(100);
      System.out.println(arr[i]);
    }
   System.out.println("Maximum Value is:"+max(arr));
   System.out.println("Minimum Value is:"+min(arr));
  }
}
*/