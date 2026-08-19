import java.util.Scanner;

public class SquareNumber{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        
        int num = input.nextInt();
        int square = num * num;
        
        System.out.println("Square of " + num + " is: " + square);
    }
}