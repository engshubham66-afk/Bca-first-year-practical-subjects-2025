class A{ 
    int x, y;
   
    void Sum(){
         int z = x + y;
        System.out.println("Sum is : "+z);
    }
}
class B extends A{
    int a;
    void display(){
        int z = x + y;
        System.out.println("View  a = "+a);
         
        System.out.println("Sum is : "+z);
    }
}
class Inheritances{
    public static void main(String args[]){
        B obj = new B();
        obj.a = 10;
        
        obj.x = 20;
        obj.y = 10;
        obj.display();

        /* A obj1 = new A();
        obj1.x = 20;
        obj1.y = 20; */
        obj.Sum(); 
    }
}