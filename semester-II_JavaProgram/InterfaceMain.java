interface A{
    int x=20, y = 10;
    void sum();
}
interface B {
    int a = 50;
    void display();
}
class C implements A, B{
 
    public void sum(){
        int result = x + y;
        System.out.println("Sum of x and y: "+result);
    }
   
public void display()
{
    System.out.println("Value of a: "+a);
}
}


public class InterfaceMain{
    public static void main(String args[]){
        C obj = new C();
        obj.sum();
        obj.display();
    }
}