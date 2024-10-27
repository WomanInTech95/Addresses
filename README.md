Address Book in C

A simple command-line address book program written in C that allows users to add, display, and search for contacts.

Features

Add contacts with name, phone number, and email.
Display all contacts stored in the address book.
Search for a contact by name.
Requirements

A C compiler (e.g., GCC)
Basic knowledge of command-line operations
Installation

Clone the repository (if applicable) or download the address_book.c file.
Open a terminal and navigate to the directory containing the address_book.c file.
Compilation

To compile the program, run the following command in your terminal:

bash
Copy code
gcc address_book.c -o address_book
Usage

Run the compiled program with:

bash
Copy code
./address_book
Menu Options
When you run the program, you will see a menu with the following options:

Add Contact: Enter the name, phone number, and email of the contact.
Display Contacts: View all contacts stored in the address book.
Search Contact: Find a contact by entering their name.
Exit: Close the program.
Example

Select 1 to add a contact.
Enter the name, phone number, and email when prompted.
Select 2 to display all contacts.
Select 3 to search for a specific contact by name.
Notes

The program supports a maximum of 100 contacts.
Ensure that the contact details do not exceed the predefined lengths.
