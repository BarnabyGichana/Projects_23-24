// Barnaby Gichana
// Date. 01.29.2024

public class Rectangle {
    // State
    private double length;
    private double width;

    // Setter or mutator
    public void setLength(double len) {
        length = len;
    }

    public void setWidth(double wid) {
        width = wid;
    }

    // Getter or accessor
    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    // Other
    public double getArea() {
        return length * width;
    }
}
