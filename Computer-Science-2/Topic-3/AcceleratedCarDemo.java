// Barnaby Gichana
// Date. 01.30.2024
/* Desc.
    This program demonstrates the Car class by creating a Car object and calling the accelerate method five times.
    After each call to the accelerate method, the current speed of the car is displayed.
    The same is done to the brake method which is also found in the Car class.
*/

public class AcceleratedCarDemo {
    public static void main(String[] args) {
        // Create an Car object
        Car vehicle = new Car(2005, "Bentley Continental GT");

        // Index variable
        int i;

        // Accelerating the car five times
        System.out.print("\n-Accelerating\n");
        for (i = 0; i < 5; i++) {
            vehicle.accelerate();
            System.out.println("Current speed: " + vehicle.getSpeed() + "mph");
        }

        // Slowing the car down five times
        System.out.print("\n-Braking\n");
        for (i = 0; i < 5; i++) {
            vehicle.brake();
            System.out.println("Current speed: " + vehicle.getSpeed() + "mph");
        }
    }
}