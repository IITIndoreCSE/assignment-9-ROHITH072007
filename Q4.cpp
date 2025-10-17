
#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

// Define the structure for a SalesRecord
struct SalesRecord {
    std::string month;
    float amount;
};

int main() {
    const int NUM_MONTHS = 12;
    // Declare an array of 12 SalesRecord structures
    SalesRecord yearSales[NUM_MONTHS];

    std::cout << "Enter sales data for each month:" << std::endl;

    // Use a for loop to accept user input for all 12 months
    for (int i = 0; i < NUM_MONTHS; ++i) {
        std::cout << "Month " << i + 1 << " Name: ";
        std::cin >> yearSales[i].month;
        std::cout << "Sales Amount: ";
        std::cin >> yearSales[i].amount;
    }

    // Initialize max and min with the first month's data
    int maxSalesIndex = 0;
    int minSalesIndex = 0;
    
    // Using a single pass, find the month with max and min sales
    // Start from the second element (index 1) since the first is our initial benchmark
    for (int i = 1; i < NUM_MONTHS; ++i) {
        if (yearSales[i].amount > yearSales[maxSalesIndex].amount) {
            maxSalesIndex = i; // Found a new maximum
        }
        if (yearSales[i].amount < yearSales[minSalesIndex].amount) {
            minSalesIndex = i; // Found a new minimum
        }
    }

    // Display the results
    std::cout << "\nMonth with maximum sales: " << yearSales[maxSalesIndex].month 
              << " with amount " << yearSales[maxSalesIndex].amount << std::endl;
              
    std::cout << "Month with minimum sales: " << yearSales[minSalesIndex].month 
              << " with amount " << yearSales[minSalesIndex].amount << std::endl;

    return 0;
}
