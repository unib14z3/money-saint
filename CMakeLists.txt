cmake_minimum_required(VERSION 3.20)

project(money_saint VERSION 0.1.0 LANGUAGES CXX)

add_executable(money_saint
	src/main.cpp
	src/Contact/Contact.cpp
	src/Contact/ContactManager.cpp
	src/Expense/Expense.cpp
	src/Expense/ExpenseManager.cpp
)

target_compile_features(money_saint PRIVATE cxx_std_20)

target_include_directories(money_saint PRIVATE
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/include/Contact
	${PROJECT_SOURCE_DIR}/include/Expense
)
