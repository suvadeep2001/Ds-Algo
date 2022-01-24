import java.util.*;

public class Main{

public static void main(String[] args) {
   
   Scanner sc = new Scanner(System.in);
   
   int n = sc.nextInt();
   
   int range = (int)Math.sqrt(n);
    
    for(int i = 2;i<= range;i++){
       while(n % i == 0){
        
        n/=i;
        System.out.print(i+" ");
            
       }

   }
   if(n!=1)
   {
        System.out.print(n);
   }
   
 }
}