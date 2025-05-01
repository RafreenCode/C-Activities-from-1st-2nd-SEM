#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
} Person;

typedef struct {
    double balance;
    Person *accountholder;
} BankAccount;

BankAccount openBankAccount(Person p, double balance){
    BankAccount account;

    account.accountholder = &p.name;
    account.balance = balance;

    return account;
}

void displayAccountDetails(BankAccount account){
    printf("Account Holder: %s, Balance: %.2lf", account.accountholder, account.balance);
    return;
}

int main (){
    Person p;
    printf("Enter the name of the account holder: ");
    fgets(p.name, 100, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    double balance;
    printf("Enter the balance for Alice: ");
    scanf("%lf", &balance);

    BankAccount account = openBankAccount(p, balance);
    displayAccountDetails(account);
}