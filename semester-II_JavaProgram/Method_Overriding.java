class A
{
    void display(){
        System.out.println("Hello");
    }
}

class B extends A
{
    void display(){
        System.out.println("Welcome");
    }
}

class Method_Overriding
{
    public static void main(String args[]){
        B r = new B();
        r.display();
    }
}