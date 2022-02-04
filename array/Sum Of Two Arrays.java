import java.util.*;

import java.io.*;
public class Main
{
  public static void main (String[]args)
  {
    
    Scanner sc = new Scanner(System.in);
    
    int n1,n2;
    
    n1 = sc.nextInt();
    
    int a1[] = new int[n1];
    
    for(int i = 0;i < a1.length;i++)
    {
        a1[i] = sc.nextInt();    
    }
    
    n2 = sc.nextInt();
    
    int a2[] = new int[n2];
    
    for(int i = 0;i < a2.length;i++)
    {
       a2[i] = sc.nextInt(); 
    }
    int carry = 0;
    
    int m = (n1 > n2 ? n1 : n2);
    
    int k = m - 1;
    int i = n1 - 1;
    int j = n2 - 1;
    
    int ans[] = new int[m];
    
    while(k >= 0)
    {
        int sum = carry;
        
        if(i >= 0)
        sum += a1[i];
        
        if(j >= 0)
        sum += a2[j];
        
        int q = sum / 10;
        int r = sum % 10;
        
        ans[k] = r;
        carry = q;
        
        i--;
        j--;
        k--;
        
    }
    
    if(carry != 0)
    System.out.println(carry);
    
    for(int val : ans)
    {
        System.out.println(val);
    }
    
  }
}