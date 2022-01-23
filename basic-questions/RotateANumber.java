import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
    
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int k = sc.nextInt();
     int count = 0;
     int num = n;
    
     while(num > 0)
     {
         num/=10;
         count++;
     }
     k = k % count;
     
     if(k < 0)
     
     {
        k = k + count; 
     }
     
     int div = (int)Math.pow(10,k);
     
     int mul = (int)Math.pow(10,count-k);
     
       int rem = n % div; 
       int val = n / div;
        
        System.out.print((rem*mul)+val);
     
    }
   }