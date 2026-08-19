// Super Keyword
class A 
{
    
   A(int a)
    {
        System.out.println("Hello viewer"+a);
       
}
}
class B extends A{
    
    B()
    {
        super(100);
        System.out.println("Hello Learner");
}
}
class SuperKeyword
{
    public static void main(String[] args){
        B r=new B();
       
    }
}
