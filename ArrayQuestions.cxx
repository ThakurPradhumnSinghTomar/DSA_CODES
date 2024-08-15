import java.util.Scanner;


class ImpFunctions{
		Scanner sc = new Scanner (System.in);
	
	public  void inputArray(int array[]){
			
		for(int h = 0; h<array.length; h++){
			System.out.println( "Enter "+h+" Index Value Of Array : " );
			array[h]= sc.nextInt();
			}	}
	
	
	
	
	public static void printArray (int array[]){	
		for(int i=0; i<array.length; i++){
		System.out.print(" "+array[i]);
					}		}
					
					
					
	//question1 of lecture 10 swaping alternate values				
	
	public static void SwitchAltPostns(int array[]){
	for (int i =0; i<array.length; i=i+2){
	
		if(i+1<array.length){
				int temp = array[i];
			array[i]=array[i+1];
	    	array[i+1]=temp;	    			}		}	}	
	    	
	    	
	    	
	 //question 2 of lecture 10 finding unique elements   	

        
       public void UniqueElement(int array[]){
       	int ans =0;
       	for(int i = 0; i<array.length; i++){
       	      ans = ans^array[i];
       	      
       	}
System.out.println( "Unique element in array is  "+ans );
       }
       
       
       
       //question 3 duplicate element

          public void DuplicateElement(int array[]){
       	int ans =0;
       	for(int i = 0; i<array.length; i++){
       	      ans = ans^array[i];	      
       	}
       		for(int i = 0; i<array.length; i++){
       	      ans = ans^i;	      
       	}
       	
       	
System.out.println( "Duplicate element in array is  "+ans );
       }
       
       
       


}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		
		
		int array1[]={0,0,0,0,0,0,0};
		ImpFunctions obj = new ImpFunctions ();
		obj.inputArray(array1);
		obj.printArray(array1);
	//	obj.SwitchAltPostns(array1);
		System.out.println( "  " );
//	    obj.printArray(array1);
	    	System.out.println( "  " );
	    //obj.UniqueElement(array1);
	     obj.DuplicateElement(array1);
	     
		
		
		
		
		
		
	}
}