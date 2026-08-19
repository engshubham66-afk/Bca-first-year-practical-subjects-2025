import java.util.Scanner;
class AddSub
{
     int result;
    int x,y;
AddSub(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number: ");
        x = sc.nextInt();
        System.out.println("Enter the second number: ");
        y = sc.nextInt();
             
    }
    
void Add()
    { 
        result = x+y;
System.out.println("result of addition is : " + result);
    }

    void Sub()
    { 
               result = x-y;
        System.out.println("result of substraction is : " + result);
    }


}

class MulDiv extends AddSub{
void Mul()
    {
        result = x*y;
        System.out.println("result of multification is : " + result);
    }

    void Div(){
   
 result= x/y;
 System.out.println("result of division is : " + result);
}
    

}
class CalApp
{ 
public static void main(String[]args)
{
MulDiv r = new MulDiv();
r.Add(); r.Sub(); r.Mul(); r.Div();
}

}