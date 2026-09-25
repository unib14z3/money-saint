#include "Expense.hpp"
#include "Utils/Utils.hpp"
#include <chrono>
#include <string>
#include <vector>

Expense::Expense(
    utils::ids::ExpenseID id,
    std::string location,
    std::chrono::year_month_day date,
    std::vector<Item> spendTable,
    double expenditure
)
:   id(id),
    location(location),
    date(date),
    spendTable(spendTable),
    expenditure(expenditure)
{ }

utils::ids::ItemID Expense::genItemId(){
    count++;
    utils::ids::ItemID id{count};
    return id;
}

void Expense::addItem(
    std::string name,
    std::vector<Split> splits,
    utils::ids::ContactID paidby,
    double cost
){
    utils::ids::ItemID id = genItemId();
    spendTable.emplace_back(
        id,
        name,
        splits,
        paidby,
        cost
    );
}

//Getter Functions
utils::ids::ExpenseID Expense::getExpenseID()const{
    return id;
}

std::string Expense::getLocation() const{
    return location;
}

std::chrono::year_month_day Expense::getDate() const{
    return date;
}

std::vector<Item> Expense::getSpendTable() const{
    return spendTable;
}

double Expense::getExpenditure() const{
    return expenditure;
}
