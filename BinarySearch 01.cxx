
//DSA LECTURE BINARY SEARCH 14

//QUESTION 01 :- PIVOT ELEMENT
import java.util.Scanner;

class Lecture14{

public int pivotElement(int[]array){
 
int start =0;
int end = array.length-1;
int mid = start+(end-start)/2;

while(start<end){
  if(array[mid]<array[0]){
 end = mid;
  }
  else if(array[mid]>array[0]){
   start = mid+1;
  }
  mid= start+(end-start)/2;
}

System.out.println( " Pivoted Element in array is : "+array[mid] );
int pivot=array[mid];
return pivot;
}


// QUESTION 2 :- SEARCH IN PIVOTED ARRAY



//Above question is not completely solved .

//QUESTION 3 :- FINDING SQUARE ROOT USING BINARY SEARCH

public void squareRoot(int n, int[]array){
 //Scanner sc = new Scanner (System.in);
//int key = sc.nextInt();

//for(int i=0; i<(key/2)+1;i++){
//int[]array={i};
int start =0;
int end = array.length-1;
int mid = start+(end-start)/2;
while(start<end){
 
 if(array[mid]*array[mid]==n ){
System.out.println(array[mid]);
break;
 
 }
 else if(array[mid]*array[mid]<n){
  start = mid;
 }
 else if(array[mid]*array[mid]>n ){
  end = mid;}
  else {System.out.println( "Square Root Not Found" );}
 
 mid = start+(end-start)/2;
}
System.out.println( "Hello  "+array[mid] );
}

}

public class Main {
	public static void main(String[] args) {
		int[] array = {1,2,3,4,5,6,7,8,9,10,11,12,15,16,81};
		Lecture14 lctr = new Lecture14();
		//lctr.pivotElement(array);
		lctr.squareRoot(65,array);
	}
}