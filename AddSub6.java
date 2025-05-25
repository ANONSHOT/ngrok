class AddSub {
    int num1, num2;

    // Constructor to initialize numbers
    AddSub(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Method to add two numbers
    int add() {
        return num1 + num2;
    }

    // Method to subtract two numbers
    int sub() {
        return num1 - num2;
    }
}

class MultDiv extends AddSub {

    // Constructor to initialize numbers using superclass constructor
    public MultDiv(int n1, int n2) {
        super(n1, n2);
    }

    // Method to multiply two numbers
    int mul() {
        return num1 * num2;
    }

    // Method to divide two numbers
    float div() {
        return (float) num2 / num1; // Cast to float for accurate division
    }
}

public class Program6 {
    public static void main(String args[]) {
        // Creating an object of AddSub class and performing addition and subtraction
        AddSub r1 = new AddSub(50, 20);
        int ad = r1.add();
        int sb = r1.sub();
        System.out.println("Addition = " + ad);
        System.out.println("Subtraction = " + sb);

        // Creating an object of MultDiv class and performing multiplication and division
        MultDiv r2 = new MultDiv(4, 20);
        int ml = r2.mul();
        float dv = r2.div();
        System.out.println("Multiply = " + ml);
        System.out.println("Division = " + dv);
    }
}
