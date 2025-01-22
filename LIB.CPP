#include <iostream>
#include <string>

using namespace std;
void ischoice(int choice)
{
    string books;
    int choices;
    string book[20] = {" Kill a Mockingbird by Harper Lee", "by George Orwell", "The Great Gatsby by F.Scott Fitzgerald Pride", "Prejudice by Jane Austen", "The Catcher in the Rye by J.D.Salinger"
                                                                                                                                                            " Moby - Dick by Herman Melville",
                       "The Hobbit by J.R.R.Tolkien", "The Odyssey by Homer", "The Book Thief by Markus Zusak", "Harry Potter and, the Sorcerers Stone by J.K.Rowling", " One Hundred Years of Solitude by Gabriel García Márquez", "The Road by Cormac McCarthy", "Brave New World by Aldous Huxley", "The Hunger Games by Suzanne Collins", "The Shining by Stephen King", "The Picture of Dorian Gray by Oscar Wilde", "The Fault in Our Stars by John Green", "The Girl on the Train by Paula Hawkins", "The Alchemist by Paulo Coelho", " The Diary of a Young Girl by Anne Frank "};
    if (choice == 1)
    {
        cout << " Kill a Mockingbird by Harper Lee, by George Orwell,The Great Gatsby by F.Scott Fitzgerald Pride and,Prejudice by Jane Austen , The Catcher in the Rye by J.D.Salinger";
        cout << "  Moby - Dick by Herman Melville, The Hobbit by J.R.R.Tolkien, The Odyssey by Homer, The Book Thief by Markus Zusak, Harry Potter and, the Sorcerers Stone by J.K.Rowling, One Hundred Years of Solitude by Gabriel García Márquez, The Road by Cormac McCarthy, Brave New World by Aldous Huxley, The Hunger Games by Suzanne Collins, The Shining by Stephen King, The Picture of Dorian Gray by Oscar Wilde, The Fault in Our Stars by John Green, The Girl on the Train by Paula Hawkins, The Alchemist by Paulo Coelho, The Diary of a Young Girl by Anne Frank " << endl;
        cout << "enter the book name you want to search " << endl;
        cin >> books;
        for (int i = 0; i < 20; i++)
        {
            if (books == book[i])
            {
                cout << "book is available";
                break;
            }
        }
    }
//ksdfjfhjkdxlzmoxrpfc mkfjdjkxl,.
    else if (choice == 2)
    {
        cout << "what you want issue or return " << endl;
        cout << "1.issue" << endl;
        cout << "2.return" << endl;
        cin >> choices;
        if (choices == 1)
        {
            cout << "you borrowed";
        }
        else if (choices == 2)
        {
            cout << "you returned";
        }
    }
    else if (choice == 3)
    {
        exit(0);
    }
}

int main()
{
    string password = {"touseef@#$"};
    string code;
    int roll;
    int choice;

    cout << "welcome to university of gujrat library" << endl;
    cout << "first enter roll no and password" << endl;
    cout << "enter roll number: ";
    cin >> roll;
    cout << "enter password: ";
    cin >> code;
    if (code == password)
    {
        cout << "what you want " << endl;
        cout << "1.search for books " << endl
             << "2.issue a book/return a book" << endl
             << "3.exit" << endl;
        cin >> choice;
        ischoice(choice);
    }

    else
    {
        cout << "wrong password" << endl;
    }

    return 0;
}