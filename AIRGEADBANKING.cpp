#include <iostream>
#include <iomanip>

void printDetails(int yearIndex, double balance, double interestEarnedThisYear) {
    std::cout << yearIndex << "\t$" << std::fixed << std::setprecision(2) << balance << "\t\t$" << interestEarnedThisYear << std::endl;
}

double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int years) {
    double balance = initialInvestment;
    double monthlyInterestRate = interestRate / 100 / 12;
    std::cout << "Year\tYear End Balance\tInterest Earned" << std::endl;
    for (int i = 1; i <= years; i++) {
        double interestEarnedThisYear = 0;
        for (int j = 0; j < 12; j++) {
            double interestEarnedThisMonth = balance * monthlyInterestRate;
            interestEarnedThisYear += interestEarnedThisMonth;
            balance += interestEarnedThisMonth;
        }
        printDetails(i, balance, interestEarnedThisYear);
    }
    return balance;
}

int main() {
    calculateBalanceWithoutMonthlyDeposit(100, 10, 4);
    return 0;
}