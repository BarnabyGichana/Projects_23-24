// Barnaby Gichana
// Date. 04/16/2024
/* Desc.
    This is a java class which collects and holds the data for a ship.
    It stores the ship name and year built.
*/

public class Ship {
    private String name;
    private String year;

    // Constructor
    public Ship(String newName, String newYear) {
        this.name = newName;
        this.year = newYear;
    }

    // Setters/Mutators
    public void setShipName(String newName) {
        this.name = newName;
    }
    public void setYearBuilt(String newYear) {
        this.year = newYear;
    }

    // Getter/Accessors
    public String shipName() {
        return name;
    }
    public String shipYear() {
        return year;
    }

    // Return collected values
    public String toString() {
        return ("Ship: " + this.name + " - Built: " + this.year + "\n");
    }
}