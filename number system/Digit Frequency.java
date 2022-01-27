// Question
// 994543234
// 4


import java.util.*;

public class Main {
public static int getDigitFrequency(int n, int d) {
    int count = 0;
    while(n != 0){
      int rem = n % 10;
        if(rem == d){
            count++;
        }
        n/=10;
    }
    return count;
  }
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int d = scn.nextInt();
    int f = getDigitFrequency(n, d);
    System.out.println(f);
  }
}