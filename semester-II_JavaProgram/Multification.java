import java.util.Scanner;

public class Multification
{
    
public static void main (String[] args){
    float num1;
    float num2;
    Scanner in = new Scanner(System.in);
    System.out.println("Enter first number ");
    num1 = in.nextFloat();
    
    System.out.println("Enter second  number ");
    num2 = in.nextFloat();
    float Result = num1*num2;
    
    System.out.println("Multification of two  number: "+Result);
}
}