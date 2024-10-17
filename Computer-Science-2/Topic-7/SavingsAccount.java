// Barnaby Gichana
// Date. 04/23/2024
/* Desc.
    ...
*/

public class SavingsAccount {
    private double annualInterestRate;
    private double balance;

    public SavingsAccount(double startingBalance, double annualInterestRate) {
        this.balance = startingBalance;
        this.annualInterestRate = annualInterestRate;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double amount) {
        balance -= amount;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void addMonthlyInterest() {
        double monthlyInterestRate = annualInterestRate / 12;
        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
    }
}
