import java.util.Scanner;
// Simple Inheritance
class Student // super class
{
        Scanner r = new Scanner(System.in);
   protected  int roll, marks;
    String name;
   void input(){
        System.out.println("Enter roll, name & marks: ");
        roll = r.nextInt();
name = r.nextLine();
        marks = r.nextInt();
System.out.println(roll+" "+name+" "+marks);
    }
}
class Shubham extends Student //sub-class
{

   
    /* 
    void disp()
        {
            roll=1; name="Shubham"; marks=90;
            System.out.println(roll+" "+name+" "+marks);
       
    } */
    public static void main(String[] args){
        
           Shubham obj = new Shubham();
            obj.input();
        //    obj.disp();
        }
    
    
}