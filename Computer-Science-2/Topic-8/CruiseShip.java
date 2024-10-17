// Barnaby Gichana
// Date. 04/16/2024
/* Desc.
    This is a java sub class which extends the Ship class. It collects and holds the data for a Cruise ship
    This class stores the cruise ship name and passenger amount.
*/

public class CruiseShip extends Ship {
    int maxPassengers;

    // Constructor
    public CruiseShip(String newName, String newYear, int newMaxPassengers) {
        super(newName, newYear); // Super calls main class arguments
        maxPassengers = newMaxPassengers;
    }

    // Passenger mutator
    public void setNumPassengers(int newMaxPassengers) {
        this.maxPassengers = newMaxPassengers;
    }

    // Passenger getter
    public int getNumPassengers() {
        return maxPassengers;
    }

    // Return collected values
    public String toString() {
        return ("Cruise Ship: " + super.shipName() + " - #Passengers: " + this.maxPassengers + "\n");
    }
}