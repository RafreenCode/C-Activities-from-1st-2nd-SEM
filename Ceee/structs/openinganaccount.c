#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[100];
} Person;

typedef struct BankAccount {
    double balance;
    Person *accountholder;
} BankAccount;

void printAccountDetails(BankAccount account){
    printf("Account Holder: %s\n", account.accountholder);
    printf("Balance: %.2lf", account.balance);
}

BankAccount openBankAccount (Person p, double balance){
    BankAccount account;
    
    account.balance = balance;
    account.accountholder = &p;

    return account;
}

int main (){
    Person p;
    double balance;

    printf("Please enter your name: ");
    fgets(p.name, 100, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter your balance: ");
    scanf("%lf", &balance);

    BankAccount account = openBankAccount(p, balance);
    printAccountDetails(account);
}