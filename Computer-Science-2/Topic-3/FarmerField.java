// Barnaby Gichana
// Date. 01.29.2024
/* Desc.
    This program provides the cost of fertilizer using the dimensions of a farmer's field
*/

public class FarmerField {
    private double length;
    private double width;
    private double area;

    public void setLength(double len) {
        length = len;
    }

    public void setWidth(double wid) {
        width = wid;
    }

    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public double getArea() {
        area = length * width;
        return area;
    }

    public double getCost() {
        return getArea() * 0.05;    // 0.05 is the cost of fertilizer per square-foot
    }
}