import java.util.*;

public class the_legend_of_freya_the_frog{
    public static void main(String[] args){
   Scanner sc = new Scanner(System.in);

  int n = sc.nextInt();


  for (int j = 0; j < n; j++) {
      
 
  
    int x = sc.nextInt();
    int y = sc.nextInt();
    int k = sc.nextInt();
    

    x = (x + k-1)/k;
    y = (y+k-1)/k;
    int ans = Math.max((x*2)-1, y*2);
   

  System.out.println(ans);
     

      

  


 }//main loop
    sc.close();
    }
}


