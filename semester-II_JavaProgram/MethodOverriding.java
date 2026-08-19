// Method Overriding
class shape
{
    void draw()
    {
        System.out.println("Can't say shape type");
    }
}
class square extends shape{
    @Override
    void draw()
    {
        System.out.println("Square shape");
    }
}
class MethodOverriding
{
    public static void main(String[] args)
    {
        shape r = new square();
        r.draw();
    }
}