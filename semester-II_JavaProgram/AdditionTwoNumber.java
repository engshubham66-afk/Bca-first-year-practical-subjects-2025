import java.util.Scanner;
class AdditionTwoNumber
{

    
    public static void main(String [] args) 
    {
        
        int a,b,c;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
         c=a+b;
        System.out.println("The sum of " + a+ " and " +b+ " is: " + c );
         
          
           
        System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
         c=a-b;
        System.out.println("The substraction of " + a+ " and " +b+ " is: " + c );
         
    }
   
    
}