#include <iostream>
#include <string>

using namespace std;

struct Expense {
    string name;
    double cost;
};

class Tracker {
    
    private:
    static const int MAX = 101;   // Max expenses allowed
    Expense list[MAX];            // Array to store expenses
    int count;                    // Number of expenses added
    
public:
    Tracker() {
        count = 0;
    }

    void add(string item, double price) {
        if (count < MAX) {
            list[count].name = item;
            list[count].cost = price;
            count++;
            cout << item << " is added at - ₹" << price << endl;
        } else {
            cout << "No more space to add expenses.\n";
        }
    }

    // Show all expenses and total cost
   // Show all expenses and total cost using printf
void show() const {
    if (count == 0) {
        cout<<"No expenses to show.\n";
        return;
    }
    double totalCost = 0;
    
    printf("\n%-20s | %-15s\n", "Product Name", "Product Cost");
    printf("-----------------------------------------\n");
    
    for (int i = 0; i < count; ++i) {
        printf("%-20s | ₹%-14.2f\n", list[i].name.c_str(), list[i].cost);
        totalCost += list[i].cost;
    }
    
    printf("-----------------------------------------\n");
    printf("%-20s | ₹%-14.2f\n", "Total", totalCost);
}

};

int main() {
    Tracker tracker;
    char command;
    string name;
    double cost;

    cout << "Commands: a (add), s (show all + total), q (quit)\n";

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> command;

        switch (command) {
            case 'a':
                cout << "\nEnter the product name: ";
                cin.ignore(); // Handle leftover newline
                getline(cin, name);
                cout << "Enter the product cost: ";
                cin >> cost;
                tracker.add(name, cost);
                break;
            case 's':
                tracker.show();
                break;
            case 'q':
                cout << "\nGoodbye! Have a Nice Day ⭐️\n";
                return 0;
            default:
                cout << "Invalid command. Please try again.\n";
                break;
        }
    }

    return 0;
}
