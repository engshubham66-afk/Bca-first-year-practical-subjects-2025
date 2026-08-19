// Method overloading
class MethodOverloading
{
void add(){
    int a = 10, b = 20, c;
    c= a+ b;
    System.out.println(c);
}
void add(int x, int y){
    int    c = x + y;
    System.out.println(c);
}
void add(int x, double){
    double   c = x + y;
    System.out.println(c);
}
public static void main(String[] args){
MethodOverloading r = new MethodOverloading();
r.add();  r.add(50, 45.3);  r.add(100, 200); 
}

    
}