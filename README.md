Expense Tracker

A simple command-line application to manage personal expenses. This Expense Tracker allows users to add, view, and delete expenses, and displays a running total of all recorded expenses. It's a user-friendly tool designed to help keep track of daily expenses effectively.

Features

- Add Expense: Add an item with a name and cost to the expense list.
- Remove Expense: Delete an item by name from the list.
- Show Expenses: Display all recorded expenses in a table format with each item's name, cost, and the total cost.
- Continuous Operation: Keeps running until the user decides to quit, allowing for easy multiple entries.

Installation

1. Clone the repository:
    
    git clone https://github.com/yourusername/expense-tracker.git
    
2. Navigate to the project directory:
    
    cd expense-tracker
    
3. Compile the program:
    
    g++ expense_tracker.cpp -o expense_tracker
    

 Usage

1. Run the compiled program:
    
    ./expense_tracker
    
2. Follow the on-screen commands:
   - a to add an expense.
   - r to remove an expense.
   - s to show all expenses and the total cost.
   - q to quit the application.

Code Overview

- Expense Structure: Represents an individual expense, including its name and cost.
- Tracker Class: Manages the list of expenses, offering methods to add, remove, and display expenses.
  - add(): Adds an expense to the list.
  - remove(): Removes an expense by name.
  - show(): Displays all expenses and their total.

 Example

Commands: a (add), r (remove), s (show all + total), q (quit)

Enter your choice: a
Enter the product name: Coffee
Enter the product cost: 2.50
Coffee is added at - ₹2.50

Enter your choice: a
Enter the product name: Book
Enter the product cost: 15.00
Book is added at - ₹15.00

Enter your choice: s

Product Name        | Product Cost   
-------------------------------------
Coffee              | ₹2.50           
Book                | ₹15.00          
-------------------------------------
Total               | ₹17.50          

Enter your choice: q

Goodbye! Have a Nice Day ⭐️

Contributing

Feel free to open issues or submit pull requests if you have suggestions or improvements.

License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
