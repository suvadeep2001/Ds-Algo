import java.io.*;
import java.util.*;

public class Main {

  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);

    int n1, n2;

    n1 = sc.nextInt();

    int a1[] = new int[n1];

    for (int i = 0; i < a1.length; i++)
    {
      a1[i] = sc.nextInt();
    }

    n2 = sc.nextInt();

    int a2[] = new int[n2];

    for (int i = 0; i < a2.length; i++)
    {
      a2[i] = sc.nextInt();
    }
    int borrow = 0;

    int ans[] = new int[n2];

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;

    while (k >= 0)
    {
      int diff = (a2[j] - borrow);

      if (i >= 0) {
        diff -= a1[i];
      }

      if (diff < 0)
      {
        diff += 10;
        borrow = 1;
      }

      else {
        borrow = 0;
      }
      ans[k] = diff;

      i--;
      j--;
      k--;
    }


    i = 0;


    while (i < n2)
    {
        if(ans[i] == 0)
      i++;
      else
      break;
    }

    while (i < n2)
    {
      System.out.println(ans[i]);
      i++;
     
    }
    


  }

}