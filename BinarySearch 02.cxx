//DSA LECTURE 13
import java.util.Scanner;

//Question 1 :- find first and last occurrence of a element in
// a sorted array

class BinarySearch{
      
      
      
	public static void printArray (int array[]){	
		for(int i=0; i<array.length; i++){
		System.out.print(" "+array[i]);
					}		}

public void firstOcc(int[] array){
Scanner sc = new Scanner (System.in);
int start=0; int end=array.length-1; int mid;
System.out.println( " Enter your desired value you want to check first occurrence in array : " );
int input = sc.nextInt();
mid = start+(end-start)/2;
int ans = -1;
while(start<end){
      
    if(array[mid]==input){
      ans = mid;
      end = mid-1;
        }  
     else if( array[mid]<input){
     start=mid+1;
     }
    else if( array[mid]>input){
     end=mid-1;
     }  
    mid = start+(end-start)/2;
}
 System.out.println( " First Occurrence of Entered Element Is At Index "+ans);
}


public void LastOcc(int[] array){
Scanner sc = new Scanner (System.in);
int start=0; int end=array.length-1; int mid;
System.out.println( " Enter your desired value you want to check last occurrence in array : " );
int input = sc.nextInt();
mid = start + (end - start) / 2;
int ans = -1;
while(start<=end){
      
    if(array[mid]==input){
      ans = mid;
      start = mid+1;
        }  
     else if( array[mid]<input){
     start=mid+1;
     }
    else if( array[mid]>input){
     end=mid-1;
     }  
  mid = start + (end - start) / 2;
}
 System.out.println( " Last Occurrence of Entered Element Is At Index "+ans);
}


//question 2 :-  Mountain element finder in array

public void mntnElmnt(int []array){
      
       int start = 0;
       int end = array.length-1;
    int mid =  (end +start) / 2;
    System.out.println( mid );
       int ans = -1;
      
       while(start<=end){
 
    if(array[mid]>array[mid-1] && array[mid]>array[mid+1]){
            
      ans = array[mid];
System.out.println( " Mountain Element Is "+ ans );
break;
        }  
        
     else if( array[mid]<array[mid-1]){
     end=mid-1;
      
     }
    else if( array[mid]>array[mid-1]){
     start=mid+1;

     }  
   mid =  (end +start) / 2;
 
}

      System.out.println( " Mountain Element Is "+ ans );

}

}

public class Main {
	public static void main(String[] args) {

		BinarySearch bn = new BinarySearch();
		//bn.firstOcc(array1);
	//	bn.LastOcc(array1);
	//	bn.printArray(array1);
	//	System.out.println( "  " );
		bn.mntnElmnt(array1);

		
	}
}