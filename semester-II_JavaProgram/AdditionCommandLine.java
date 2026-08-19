import java.util.Scanner;
class AdditionCommandLine 
{
    public static void main(String[] args){
        int a,b,c;
        if(args.length < 2){
            System.out.println("Provide two integer numbers as arguments.");
            return;
        }

        a = Integer.parseInt (args [0]);
          b = Integer.parseInt (args [1]);
         c = a+b;

         System.out.println("The addition pf " +a+ " and " +b+ " is:: "+c);
    }
}