// implicit Typecasting
class ImplicitTypecasting
{
    public static void main(String[] args){
        int a=10; // 4 bytes
        double b=a; // 8 bytes
        System.out.println(b);

        ExplicitTypecasting r = new ExplicitTypecasting();
        r.performCast();
    }
}
// Explicit Typecasting
class ExplicitTypecasting
{
    void performCast(){
        double a = 10.5; // 8 bytes
        int b = (int)a; // 4 bytes
        System.out.println(b);
    }
}