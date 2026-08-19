import java.util.Scanner;
class Comand
{
   public static void main(String [] args){
     if(args.length == 0)
       {
         System.out.println("Provide a number!");
        return;
       }

    int num = Integer.parseInt(args [0]);
    int square = num*num;
    System.out.println(num +" of square is: " +square);
   }

}