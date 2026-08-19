import java.util.Scanner;
class Argument
{
    public static void main(String args []){
        int count;
        count = args.length;
        System.out.println("no. of words  " +count);

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name =sc.nextLine();
        System.out.print("Name is: " + name);
        sc.close();



    }
}