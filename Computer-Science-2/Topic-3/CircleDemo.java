// Barnaby Gichana
// Date. 01.30.2024
/* Desc.
    This program demonstrates the Circle class by asking the user for the radius of a circle,
    creating a Circle object, and then reporting the circle's area, diameter, and circumference.
*/

import java.util.Scanner;

public class CircleDemo {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        
        // Create a Circle object
        Circle round = new Circle();

        // Ask user for the radius
        System.out.print("Enter the radius of the circle: ");
        round.setRadius(userInput.nextDouble());

        // Display the circle's area, diameter, and circumference
        System.out.println("\nArea: " + round.getArea());
        System.out.println("Diameter: " + round.getDiameter());
        System.out.println("Circumference: " + round.getCircumference());

        userInput.close();
    }
}
