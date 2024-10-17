// Barnaby Gichana
// Date. 04/16/2024
/* Desc.
    This is a java sub class which extends the Ship class. It collects and holds the data for a Cargo ship.
    This class stores the cargo ship name and cargo amount.
*/

public class CargoShip extends Ship {
    private int tonnage;

    // Constructor
    public CargoShip(String newName, String newYear, int newTonnage) {
        super(newName, newYear); // Super calls main class arguments
        tonnage = newTonnage;
    }

    // Tonnage mutator
    public void setTonnage(int newTonnage) {
        this.tonnage = newTonnage;
    }

    // Tonnage accessor
    public int getTonnage() {
        return tonnage;
    }

    // Return collected values
    public String toString() {
        return ("Cargo Ship: " + super.shipName() + " - Tonnage: " + this.tonnage + "\n");
    }
}