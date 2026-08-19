import java.util.Scanner;
class Add
{    
public static void main(String[] args){
   int x, y, z;
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter the first number: ");
   y = sc.nextInt() ;
   System.out.println("Enter the second number: ");
   z = sc.nextInt() ;
   x = y + z;
    System.out.println("Addtion of " +y+ " and " +z+ " is: " + x);
    
}
}