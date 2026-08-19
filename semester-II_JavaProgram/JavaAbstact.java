// Abstract class program
abstract class  animal
{
    animal()
    {
        System.out.println("All animals....!");
            }
            public abstract void sound();
}
class Dog  extends animal{
    Dog()
    {
        super();
    }
    public void sound()
    {
        System.out.println("Dog is barking");
    }
}
class Lion extends animal{
    public void sound()
    {
        System.out.println("Lion is roar");
    }
}
class JavaAbstract
{
    public static void main(String[] args){
Dog d = new Dog();
Lion l = new Lion();
d.sound(); l.sound();
    }
}