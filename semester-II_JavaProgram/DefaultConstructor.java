/*Default constructor*/
class B{
    int a; String b; boolean c;
    B()
    {
        a=145; b="Shubham"; c=true;
    }
    void disp()
    {
        System.out.print(a+" "+b+" "+c);
    }
}
class DefaultConstructor{
    public static void main(String[] args){
B r=new B();
    r.disp();
    }
    
}