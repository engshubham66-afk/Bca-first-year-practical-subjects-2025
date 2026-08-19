class VariableType
{
    static int b = 20; // static variable
    int c=30;  // instance variable
   static void Show(){
        System.out.println("HEllo");
    }
    public static void main(String[] args){
        int a = 10; // local variable
        VariableType r = new VariableType();
        System.out.println(VariableType.b); // static variable call
        System.out.println(a); // local variable call
        System.out.println(r.c); // instance variable call

        VariableType.Show(); // static method call
    }
}