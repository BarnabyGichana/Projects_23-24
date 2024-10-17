// Barnaby Gichana
// Date. 01.30.2024
/* Desc.
    This program asks the user to enter the dimensions of a farm,
    sends the farm dimensions to be processed through the FarmerField object,
    and displays the total area of the field as well as the total cost of fertilizer for that field.
*/

import java.util.Scanner;

public class FarmerFieldDemo {
    public static void main(String[] args) {
        // Create a FarmerField object
        FarmerField farm = new FarmerField();

        Scanner userInput = new Scanner(System.in);

        System.out.print("Cost of fertilizer =  $ 0.05 / square-foot\n");

        // Ask user for length and set it in the FarmerField object
        System.out.print("Enter the length of your farm in ft: ");
        farm.setLength(userInput.nextDouble());
        
        // Ask user for width and set it in the FarmerField object
        System.out.print("Enter the width of your farm in ft: ");
        farm.setWidth(userInput.nextDouble());

        // Display the area of the farm in square-feet total cost of fertilizer
        System.out.println("\nThe total area of your farm is:  " + (farm.getCost()/0.05));
        System.out.println("The total cost of fertilizer is:  $ " + farm.getCost());

        userInput.close();
    }
}