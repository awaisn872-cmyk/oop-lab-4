// oops lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Task 1

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    int id;
//    string name;
//    double gpa;
//
//public:
//  
//    Student() {
//        id = 0;
//        name = "Null";
//        gpa = 0.0;
//    }
//
//    Student(int i, string n, double g) {
//        id = i;
//        name = n;
//        gpa = g;
//    }
//
//    void setid(int i) {
//        if (i > 0)
//            id = i;
//        else
//            id = 0;
//    }
//
//    void setname(string n) {
//        if (!n.empty())
//            name = n;
//        else
//            name = "Unknown";
//    }
//
//    void setgpa(double g) {
//        if (g >= 0.0 && g <= 4.0)
//            gpa = g;
//        else
//            gpa = 0.0;
//    }
//
//    void display() {
//        cout << "ID: " << id
//            << ", Name: " << name
//            << ", GPA: " << gpa << endl;
//    }
//
//    double calculatePercentage() {
//        return gpa * 25;
//    }
//};
//
//int main() {
//    Student s1(101, "Awais", 3.6);
//
//    s1.display();
//
//    cout << "Percentage: " << s1.calculatePercentage() << "%" << endl;
//
//    return 0;
//}


// Task 2

//#include <iostream>
//using namespace std;
//
//class Bankaccount {
//private:
//    int accountnumber;
//    double balance;
//    string holdername;
//
//public:
//    
//    Bankaccount() {
//        accountnumber = 0;
//        holdername = "Unknown";
//        balance = 0;
//    }
//
//    Bankaccount(int acc, string name, double bal) {
//        accountnumber = acc;
//        holdername = name;
//        balance = bal;
//    }
//
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance = balance + amount;
//            cout << "Amount deposited successfully\n";
//        }
//        else {
//            cout << "Invalid amount\n";
//        }
//    }
//
//    void withdraw(double amount) {
//        if (amount > balance) {
//            cout << "Not enough balance\n";
//        }
//        else if (amount <= 0) {
//            cout << "Invalid amount\n";
//        }
//        else {
//            balance = balance - amount;
//            cout << "Amount withdrawn successfully\n";
//        }
//    }
//
//    double getBalance() {
//        return balance;
//    }
//
//    void display() {
//        cout << "Account Number: " << accountnumber << endl;
//        cout << "Holder Name: " << holdername << endl;
//        cout << "Balance: " << balance << endl;
//    }
//
//    ~Bankaccount() {
//       
//    }
//};
//
//int main() {
//    Bankaccount acc1(101, "Awais", 3000);
//
//    acc1.display();
//
//    acc1.deposit(1000);
//    acc1.withdraw(1500);
//
//    cout << "\nBalance: " << acc1.getBalance() << endl;
//
//    Bankaccount acc2 = acc1;
//
//    cout << "\nCopied Account:\n";
//    acc2.display();
//
//    return 0;
//}

// Task 3

//#include <iostream>
//using namespace std;
//
//class Temperature {
//private:
//    double celsius;
//
//    
//    bool validateTemperature(double temp) {
//       
//        if (temp >= -273.15)
//            return true;
//        else
//            return false;
//    }
//
//public:
//    Temperature() {
//        celsius = 0;
//    }
//
//    void setcelsius(double temp) {
//        if (validateTemperature(temp)) {
//            celsius = temp;
//        }
//        else {
//            cout << "Invalid temperature value!\n";
//        }
//    }
//
//    void setfahrenheit(double tempF) {
//        double tempC = (tempF - 32) * 5 / 9;
//
//        if (validateTemperature(tempC)) {
//            celsius = tempC;
//        }
//        else {
//            cout << "Invalid temperature value!\n";
//        }
//    }
//
//    double getcelsius() {
//        return celsius;
//    }
//
//    double getfahrenheit() {
//        return (celsius * 9 / 5) + 32;
//    }
//};
//
//int main() {
//    Temperature t;
//
//    t.setcelsius(25);
//    cout << "Celsius: " << t.getcelsius() << endl;
//    cout << "Fahrenheit: " << t.getfahrenheit() << endl;
//
//    t.setfahrenheit(98.6);
//    cout << "\nCelsius: " << t.getcelsius() << endl;
//    cout << "Fahrenheit: " << t.getfahrenheit() << endl;
//
//    return 0;
//}