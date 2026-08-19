import java.util.Scanner;
class CubeNumberCommandLine
{
   public static void main(String[] args){
    
   if(args.length == 0){
     System.out.println("Provide an integer number through command line.");
    return;
   }
    int num = Integer.parseInt(args[0]);
    int cube = num*num*num;

    System.out.println("the cube of " +num+ " is: "+cube);
   }
    
}