// Barnaby Gichana
// Date. 01.30.2024
/* Desc.
    Car class that contains basic information about a car such as its year model and make.
    This program also contains the speed of the car and is able to accelerate and brake the car in 5 unit increments.
*/

public class Car {
    private int yearModel;
    private String make;
    private int speed;

    // Constructor that accepts yearModel and make as arguments and sets initial speed to 0
    public Car(int yearModel, String make) {
        this.yearModel = yearModel;
        this.make = make;
        this.speed = 0;
    }

    // Setter methods

    public void setYearModel(int yearModel) {
        this.yearModel = yearModel;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    // Accessor methods

    public int getYearModel() {
        return yearModel;
    }

    public String getMake() {
        return make;
    }

    public int getSpeed() {
        return speed;
    }

    // Accelerator method

    public void accelerate() {
        speed += 5;
    }

    // Brake method

    public void brake() {
        if (speed > 5) {
            speed -= 5;
        }
        else {
            speed = 0;
        }
    }
}