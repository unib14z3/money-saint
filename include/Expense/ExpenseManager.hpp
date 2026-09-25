//Load All Expences from memory
//Add Expence
//Update Expences
#include <vector>

#include "Expense.hpp"

namespace ExpenseManager{
    std::vector<Expense> getExpense();

    void addExpense(
        std::string location,
        std::chrono::year_month_day date,
        std::vector<Item> spendTable,
        double expenditure
    );
    void addExpense(std::string location);

    void updateExpense();
    void removeExpense();

    void saveExpences();
    void loadExpences();

};
