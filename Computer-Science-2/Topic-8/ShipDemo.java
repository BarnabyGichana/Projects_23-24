// Barnaby Gichana
// Date. 04/16/2024
/* Desc.
    This is a java class that demonstrates the Ship, CruiseShip, and CargoShip classes
*/

public class ShipDemo {
    public static void main(String[] args) {
        // Array declaration
        final int arraySize = 3;
        Ship[] shipArray = new Ship[arraySize];

        Ship myShip = new Ship("SS-Milno", "1850"); //Ship class
        CruiseShip myCruiseShip = new CruiseShip("Sovereign of the Seas", "2002", 2600); // CruiseShip class/extends ship
        CargoShip myCargoShip = new CargoShip("Sunken Treasures", "1995", 15000); // CargoShip class/extends ship

        // Set array values
        shipArray[0] = myShip;
        shipArray[1] = myCruiseShip;
        shipArray[2] = myCargoShip;

        // Display
        System.out.println("\n");
        for(int i=0; i<arraySize; i++) {
            System.out.println(shipArray[i]);
        }
    }
}