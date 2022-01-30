Sample Input
111001
2
3
Sample Output
2010


import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int b1 = scn.nextInt();
    int b2 = scn.nextInt();
    int dec = anybasetodecimal(n,b1);
    System.out.print(decimaltoanybase(dec,b2));
  }
  
  
  
   public static int anybasetodecimal(int n, int b){
      // write your code here
      int p = 1;
      int rv = 0;
      while(n > 0)
      {
          int rem = n % 10;
          n /= 10;
          rv += rem * p;
          p =  p * b;
      }
      return rv;
   }
   
   public static int decimaltoanybase(int n, int b){
        int rv = 0;
        int p = 1;
        while(n != 0)
        {
            int dig = n % b;
            n = n / b;
            rv += dig * p;
            p = p * 10;
        }
        return rv;
   }

}