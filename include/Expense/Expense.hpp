# pragma once

#include <string>
#include <vector>
#include <chrono>

#include "Utils/Utils.hpp"

struct Split{
    utils::ids::ContactID contactID;
    double amount;
};

enum splitType{
    even,
    custom,
};

struct Item {
    utils::ids::ItemID id;
    std::string name;
    std::vector<Split> splits;
    utils::ids::ContactID paidById;
    double cost;
};

class Expense{
    private:
        static unsigned int count;

        utils::ids::ExpenseID id;
        std::string location;
        std::chrono::year_month_day date;
        std::vector<Item> spendTable;
        double expenditure;

        utils::ids::ItemID genItemId();

    public:
        Expense(){
            id.value = 0;
            location = "<NA>";
            expenditure = 0;
        }

        Expense(
            utils::ids::ExpenseID id,
            std::string location,
            std::chrono::year_month_day date = std::chrono::floor<std::chrono::days>(std::chrono::system_clock::now()),
            std::vector<Item> spendTable = {},
            double expenditure = 0
        );
        //TODO: implement these
        // void operator + (Item item);
        // void operator - (Item item);
        void addItem(
            std::string name,
            std::vector<Split> splits,
            utils::ids::ContactID paidby,
            double cost
        );
        void updateItem();
        void removeItem();

        std::vector<Split> createSplit(splitType type, std::vector<float> values ={});
        void updateSplit();

        //getters
        utils::ids::ExpenseID getExpenseID() const;
        std::string getLocation() const;
        std::chrono::year_month_day getDate() const;
        std::vector<Item> getSpendTable() const;
        double getExpenditure() const;



};
