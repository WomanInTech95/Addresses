#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15
#define EMAIL_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
    char email[EMAIL_LENGTH];
} Contact;

Contact addressBook[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Address book is full!\n");
        return;
    }

    Contact newContact;
    printf("Enter name: ");
    scanf(" %[^\n]", newContact.name);
    printf("Enter phone: ");
    scanf(" %[^\n]", newContact.phone);
    printf("Enter email: ");
    scanf(" %[^\n]", newContact.email);

    addressBook[contactCount] = newContact;
    contactCount++;
    printf("Contact added successfully!\n");
}

void displayContacts() {
    if (contactCount == 0) {
        printf("No contacts found!\n");
        return;
    }

    printf("\n--- Address Book ---\n");
    for (int i = 0; i < contactCount; i++) {
        printf("Contact %d:\n", i + 1);
        printf("Name: %s\n", addressBook[i].name);
        printf("Phone: %s\n", addressBook[i].phone);
        printf("Email: %s\n\n", addressBook[i].email);
    }
}

void searchContact() {
    char name[NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(addressBook[i].name, name) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", addressBook[i].name);
            printf("Phone: %s\n", addressBook[i].phone);
            printf("Email: %s\n", addressBook[i].email);
            return;
        }
    }
    printf("Contact not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Address Book Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
