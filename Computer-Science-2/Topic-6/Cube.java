// Barnaby Gichana
// Date. 03/10/2024
/* Desc.
    This 'Cube' class is a child program of the 'Rectangle' class.
    It adds a third dimension, height, to its parent class while also
    inheriting the length and width of the parent class in order to create
    a cube.
*/

public class Cube extends Rectangle{
    private double height;

    Cube(double len, double w, double h) {
        // Call the constructor of the parent class
        super(len, w);
        height = h;
    }

    public void setHeight(double h) {
        height = h;
    }

    public double getHeight() {
        return height;
    }

    public double getSurfaceArea() {
        // Assumes that each face of the "cube" is a square
        return getArea() * 6;
    }

    public double getVolume() {
        // len*w*h = area*h
        return getArea() * height;
    }
}