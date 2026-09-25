# pragma once 

#include <string>
#include <vector>
#include <chrono>

struct BillItem{
    std::string name;
    float price;
};

struct SpendCtx{
    int contactID;
    std::vector<BillItem> items;
    bool paid;
};


class Expense{
    int id;
    std::string location;
    std::chrono::year_month_day date;
    double expenditure;
    std::vector<SpendCtx> spendTable;

    public:
        friend class ExpenseManager;
        //TODO: impliment these
        // void operator + (SpendCtx item);
        // void operator - (SpendCtx item);
        void addBillItem();
        void updateBillItem();
        void removeBillItem();

        void addSpendCtx();
        void updateSpendCtx();
        void removeSpendCtx();
        
};
