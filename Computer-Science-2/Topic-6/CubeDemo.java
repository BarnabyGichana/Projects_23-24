// Barnaby Gichana
// Date. 03/10/2024
/* Desc.
    This 'CubeDemo' class demonstrates the 'Cube' and, by extension, 'Rectangle' classes
    and their methods. The 'Cube' class is a child program of the 'Rectangle' class.
*/

import java.util.Scanner;

public class CubeDemo {
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        // Create 1x1x1 cube object
        Cube cube = new Cube(1,1,1);

        // Display original dimensions of the cube
        // Demonstrating the getters (length, width, height)
        System.out.println("\nInitial dimensions of the cube");
        System.out.println("Length: " + cube.getLength());
        System.out.println("Width: " + cube.getWidth());
        System.out.println("Height: " + cube.getHeight());

        // Change the cube's original dimensions
        // Demonstrating the setters
        System.out.println("\nEnter the new dimensions of the cube object");
        System.out.println("Length: ");
        cube.setLength(userInput.nextDouble());
        System.out.println("Width: ");
        cube.setWidth(userInput.nextDouble());
        System.out.println("Height: ");
        cube.setHeight(userInput.nextDouble());

        // Display new dimensions of the cube
        System.out.println("\nNew dimensions of the cube object");
        System.out.println("Length: " + cube.getLength());
        System.out.println("Width: " + cube.getWidth());
        System.out.println("Height: " + cube.getHeight());

        // Display volume and surface area of the cube
        // Demonstrating the getters (volume, surface area)
        System.out.println("\nVolume: " + cube.getVolume());
        System.out.println("Surface Area: " + cube.getSurfaceArea());

        userInput.close();
    }
}