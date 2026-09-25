#include "ExpenseManager.hpp"
#include "Expense.hpp"
#include "Utils/Utils.hpp"

namespace {
    std::vector<Expense> expenses;

    unsigned int count = 0;
    utils::ids::ExpenseID genExpenseId(){
        count++;
        utils::ids::ExpenseID id{count};
        return id;
    }

    void setCount_onLoad(){

    }
}

void ExpenseManager::addExpense(
    std::string location,
    std::chrono::year_month_day date,
    std::vector<Item> spendTable,
    double expenditure
){
    utils::ids::ExpenseID id = genExpenseId();
    expenses.emplace_back(
      id,
      location,
      date,
      spendTable,
      expenditure
    );

}

void ExpenseManager::addExpense(std::string location){
    utils::ids::ExpenseID id = genExpenseId();
    expenses.emplace_back(id, location);
}
