class WelcomeStudent {
    public static void main(String[] args) {
        // Check if two arguments are provided
        if (args.length < 2) {
            System.out.println("Please provide Name and Surname.");
            return;
        }

        String name = args[0];
        String surname = args[1];

        System.out.println("Welcome " + name + " " + surname + "!");
    }
}