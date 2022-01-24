import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      
      Scanner sc = new Scanner(System.in);
      
      int num1 = sc.nextInt();
      int num2 = sc.nextInt();
      
      int no1 = num1;
      int no2 = num2;
      
      while(no1 % no2 != 0)
      {
        int rem = no1 % no2;
        no1 = no2;
        no2 = rem;
      }
      
      int gcd = no2;
      System.out.println(gcd);
      
      int lcm = (num1 * num2)/ gcd;
      
      System.out.println(lcm);
      
     }
    }