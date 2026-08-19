import java.util.Scanner;
class UserString
{
    public static void main(String [] args){
        Scanner r = new Scanner(System.in);
    int roll, marks;
   
         System.out.println("Enter roll: ");

        roll = r.nextInt();
        r.nextLine(); // clear buffer
        System.out.println("Enter name: ");
String name = r.nextLine();
        System.out.println("Enter  marks: ");
        marks = r.nextInt();
System.out.println(roll+" "+name+" "+marks);
System.out.println(roll+" "+name+" "+marks);
    }
}