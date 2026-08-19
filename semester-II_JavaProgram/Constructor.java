                       /*Java constructor */
class A

{
    int a; String name;
A()
    {
         a=1002;
          name = "Shubham Kumar ";
          
    }
                       
void show()
{
    System.out.print("Roll no. = " +a+" \nand Student's name = "+name);
}
}
class Constructor
{
    public static void main (String[]args){
        A ref=new A();
        ref.show();
    }
}
