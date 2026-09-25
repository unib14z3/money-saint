//Load All Expences from memory 
//Add Expence 
//Update Expences  
#include <string>
#include <vector>

#include "Expense.hpp"
#include "Contact.hpp"

class ExpenseManager{
    private:
        std::vector<Expense> expenses;
    
    public:
        std::vector<Expense> getExpense();
        void addExpense();
        void updateExpense();
        void removeExpense();

        void saveExpences();
        void loadExpences();

};