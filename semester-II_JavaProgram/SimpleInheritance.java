// Simple Inheritance
class SimpleInheritance { // super class
    String name;
    int roll;   // Added this so the sub-class can use it
    int marks;  // Added this so the sub-class can use it

    void input() {
        System.out.println("Enter roll, name & marks: "); 
    }
     public static void main(String[] args) {
        // 1. Create an rect of the Shubham class
        Shubham r = new Shubham();
        
        // 2. Call the methods to see the output
        r.input(); // This will print "Enter roll..."
        r.disp();  // This will print "1 Shubham 90"
    }
}

class Shubham extends SimpleInheritance { // sub-class
    void disp() {
        roll = 1;
        name = "Shubham";
        marks = 90;
        // This prints the actual data
        System.out.println(roll + " " + name + " " + marks); 
    }

   
}