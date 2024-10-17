// Barnaby Gichana
// Date. 04/23/2024
/* Desc.
    ...
*/

import java.util.Scanner;

public class SavingsAccountDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get user inputs
        System.out.print("Enter the annual interest rate: ");
        double annualInterestRate = scanner.nextDouble();
        
        System.out.print("Enter the starting balance: ");
        double startingBalance = scanner.nextDouble();
        
        System.out.print("Enter the number of months: ");
        int numberOfMonths = scanner.nextInt();
        
        SavingsAccount account = new SavingsAccount(startingBalance, annualInterestRate);
        
        double totalDeposits = 0;
        double totalWithdrawals = 0;
        double totalInterestEarned = 0;
        
        // Process each month
        for (int i=1; i <= numberOfMonths; i++) {
            System.out.println("\nMonth " + i);
            System.out.print("Enter the amount deposited: ");
            double deposit = scanner.nextDouble();
            account.deposit(deposit);
            totalDeposits += deposit;
            
            System.out.print("Enter the amount withdrawn: ");
            double withdrawal = scanner.nextDouble();
            totalWithdrawals += withdrawal;
            
            account.addMonthlyInterest();
        }

        totalInterestEarned = account.getBalance() - (startingBalance + totalDeposits - totalWithdrawals);

        // Display results
        System.out.println("\nEnding Balance: $" + account.getBalance());
        System.out.println("Total Deposits: $" + totalDeposits);
        System.out.println("Total Withdrawals: $" + totalWithdrawals);
        System.out.println("Total Interest Earned: $" + totalInterestEarned);

        scanner.close();
    }
}
