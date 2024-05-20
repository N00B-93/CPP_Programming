#include <iostream>
#include <iomanip>

/**
     Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase: 
        • The number of shares that Joe purchased was 1,000. 
        • When Joe purchased the stock, he paid $45.50 per share. 
        • Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the stock. 
     Two weeks later Joe sold the stock. Here are the details of the sale:
        • The number of shares that Joe sold was 1,000.
        • He sold the stock for $56.90 per share.
        • He paid his stockbroker another commission that amounted to 2% of the amount he received for the stock.
     This program displays the following information;
        • The amount of money Joe paid for the stock.
        • The amount of commission Joe paid his broker when he bought the stock.
        • The amount that Joe sold the stock for.
        • The amount of commission Joe paid his broker when he sold the stock.
        • Display the amount of profit that Joe made after selling his stock and paying the two commissions to his broker.
*/

int main(void)
{

    // Variables to hold the number of stocks purchased, percentage commission paid to broker and the cost per share.
    int numberOfSharesPurchased = 1000;
    double unitPriceOfSharesPurchased = 45.50;
    const double PERCENT_PAID_TO_BROKER = 0.02;

    // Determines the total amount paid to purchase the stock.
    double totalAmountPaidToPurchaseStock = unitPriceOfSharesPurchased * numberOfSharesPurchased;

    // Variable to hold the commission paid to the broker.
    double cashPaidToBrokerForSharesPurchased = PERCENT_PAID_TO_BROKER * totalAmountPaidToPurchaseStock;

    // Variables to hold the number of shares sold and the price at which the shares were sold.
    int numberOfSharesSold = 1000;
    double unitPriceOfSharesSold = 56.90;

    // Determines the total amount realized from selling the shares.
    double totalAmountRealizedFromStockSales = numberOfSharesSold * unitPriceOfSharesSold;
    
    // Variable to hold the commission paid to the broker.
    double cashPaidToBrokerForSharesSold = PERCENT_PAID_TO_BROKER * totalAmountRealizedFromStockSales;

    // Determines Joe's profit or loss.
    double profitOrLoss = (totalAmountRealizedFromStockSales - cashPaidToBrokerForSharesSold) - (totalAmountPaidToPurchaseStock + cashPaidToBrokerForSharesPurchased);

    // Displays the amount of money Joe paid to acquire stocks.
    std::cout << std::fixed << std::setprecision(2) << "\nAmount Joe paid for stock: $" << totalAmountPaidToPurchaseStock;

    //Displays the amount of commission paid the broker after purchasing the stocks.
    std::cout << std::fixed << std::setprecision(2) << "\nCommission paid to purchase stocks: $" << cashPaidToBrokerForSharesPurchased;

    // Displays the amount realized from selling stocks.
    std::cout << std::fixed << std::setprecision(2) << "\nAmount Realized from stock sales: $" << totalAmountRealizedFromStockSales;
    
    // Displays the commission paid to the broker for selling the stocks.
    std::cout << std::fixed << std::setprecision(2) << "\nCommission paid to sell stocks: $" << cashPaidToBrokerForSharesSold;

    // Displays whether Joe made a profit or loaa.
    if (profitOrLoss > 0)
        std::cout << "\nJoe made a profit of: $" << profitOrLoss << "\n";
    else if (profitOrLoss < 0)
        std::cout << "\nJoe made a loss of: $" << profitOrLoss << "\n";
    else
        std::cout << "\nJoe Broke even.\n";
    
    return (0);
}

