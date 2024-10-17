// Barnaby Gichana
// Date. 03/10/2024
/*
    This 'Rectangle' class is used to create a rectangular object that has
    dimensions for its length and width.
*/

public class Rectangle {
    // State
    private double length;
    private double width;

    public Rectangle(double len, double w) {
        length = len;
        width = w;
    }

    // Setter or mutator
    public void setLength(double len) {
        length = len;
    }

    public void setWidth(double w) {
        width = w;
    }

    // Getter or accessor
    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;    }

    // Other
    public double getArea() {
        return length * width;
    }
}