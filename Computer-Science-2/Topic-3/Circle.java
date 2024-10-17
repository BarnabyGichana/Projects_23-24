// Barnaby Gichana
// Date. 01.30.2024
/* Desc.
    This Circle class calculates the area, diameter, and circumference of a circle
    of any given radius.
*/

public class Circle {
    private double radius;
    private double pi = 3.14159;
    
    // Constructor that accepts the radius as an argument
    public Circle(double r) {
        radius = r;
    }

    // No-argument constructor that sets the radius field to 0.0
    public Circle() {
        radius = 0.0;
    }

    // Setter method for the radius
    public void setRadius(double r) {
        radius = r;
    }

    // Getter method for the radius
    public double getRadius() {
        return radius;
    }

    // Getter method for the area of the circle
    public double getArea() {
        return pi * radius * radius;
    }

    // Getter method for the diameter of the circle
    public double getDiameter() {
        return 2 * radius;
    }

    // Getter method for the circumference of the circle
    public double getCircumference() {
        return 2 * pi * radius;
    }
}
