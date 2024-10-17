// Barnaby Gichana
// Date. 04/23/2024
/* Desc.
    This is a java class that calculates the service charges for a bank account based on a
    pre-determined set of parameters.
*/

public class CommercialBizBankCharges {
    private double beginningBalance;
    private int numberOfChecks;

    public CommercialBizBankCharges(double beginningBalance, int numberOfChecks) {
        this.beginningBalance = beginningBalance;
        this.numberOfChecks = numberOfChecks;
    }

    public double getServiceFee() {
        double serviceFee = 10; // Base monthly fee
        if (beginningBalance < 400) {
            serviceFee += 15; // Extra fee if balance falls below $400
        }

        // Calculate check fees
        if (numberOfChecks < 20) {
            serviceFee += numberOfChecks * 0.10;
        } else if (numberOfChecks < 40) {
            serviceFee += numberOfChecks * 0.08;
        } else if (numberOfChecks < 60) {
            serviceFee += numberOfChecks * 0.04;
        }

        return serviceFee;
    }
}
