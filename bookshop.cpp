#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>

using namespace std;
class bookshop
{
public:
    void control_panel();
    void add_book();
    void show_book();
    void check_book();
    void update_book();
    void del_book();
    void rent();
    void returned();
    bool is_valid(string n);
};
void bookshop::control_panel()
{
    system("cls");
    cout<<"------------------------------------------------------  BOOK MANAGEMENT SYSTEM  ------------------------------------------------------"<<endl;
    
    cout << "\n\n\t\t\t\t\t\t\t  Control Panel";
    cout << "\n\n\t\t\t\t\t\t\t1 -> Add New Book";
    cout << "\n\t\t\t\t\t\t\t2 -> Display Books";
    cout << "\n\t\t\t\t\t\t\t3 -> Check Specific Book";
    cout << "\n\t\t\t\t\t\t\t4 -> Update Book";
    cout << "\n\t\t\t\t\t\t\t5 -> Delete Book";
    cout << "\n\t\t\t\t\t\t\t6 -> Rent books ";
    cout << "\n\t\t\t\t\t\t\t7 -> Enter returned books ";
    cout << "\n\t\t\t\t\t\t\t8 -> Exit";
}
void bookshop ::rent()
{
    system("cls");
    fstream file, file1;
    int no_copy, no_co, Count = 0;
    string b_name, a_name, b_id, b_ID, b_n, a_n;

    file.open("book.txt", ios::in);
    file1.open("book1.txt", ios::app | ios::out);
    if (!file)
        cout << "\n\n File Opening Error....";
    else
    {
        cout << "\n\n\t\t Book ID of book to be rented         ";
        cin >> b_ID;
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            if (b_ID == b_id)
            {
                Count++;
                int n;
                cout << "\n\n\n\t\t Enter no of copies to be rented     " ;
                cin >> n;
                system("cls");
                if (n > no_copy)
                {
                    cout << "Not enough copies " << endl;
                }
                else
                {

                    file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy - n << endl;
                    cout<<" \t\tRented "<<n<<" books of ID "<<b_id<<endl;
                    getch();
                }
            }
            else
                file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << endl;
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        if (Count == 0)
            cout << "\n\n Book Not Found... ";
    }
    file.close();
    file1.close();
    remove("book.txt");
    rename("book1.txt", "book.txt");
}

void bookshop ::returned()
{
    system("cls");
    fstream file, file1;
    int no_copy, no_co, Count = 0;
    string b_name, a_name, b_id, b_ID, b_n, a_n;

    file.open("book.txt", ios::in);
    file1.open("book1.txt", ios::app | ios::out);
    if (!file)
        cout << "\n\n File Opening Error....";
    else
    {
        cout << "\n\n \t\tBook ID of book to be returned   ";
        cin >> b_ID;
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            if (b_ID == b_id)
            {
                Count++;
                

                int n;
                cout << " \n\n\t\tEnter no of copies to be returned   "  ;
                cin >> n;
                file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy + n << endl;
            }
            else
                file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << endl;
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        if (Count == 0)
            cout << "\n\n Book Not Found... ";
    }
    file.close();
    file1.close();
    remove("book.txt");
    rename("book1.txt", "book.txt");
}

bool bookshop ::is_valid(string n)
{
    fstream file;
    int no_copy;
    string b_name, a_name, b_id;
    file >> b_id >> b_name >> a_name >> no_copy;
    while (!file.eof())
    {
        if (n == b_id)
        {
            return false;
        }
        file >> b_id >> b_name >> a_name >> no_copy;
    }
    return true;
}

void bookshop::add_book()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, a_name, b_id;
    cout << "\n\n\t\t\t ADD New Book";
    cout << "\n\n Book ID: ";
    cin >> b_id;
    bool check = is_valid(b_id);
    if (!check)
    {
        cout << "no two books can have same book id " << endl;
        return;
    }

    cout << "\n\n\t\t\t Book Name: ";
    cin >> b_name;
    cout << "\n\n Author Name: ";
    cin >> a_name;
    cout << "\n\n\t\t\t No. of Copies: ";
    cin >> no_copy;
    file.open("book.txt", ios::out | ios::app);
    file << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << endl;
    file.close();
}
void bookshop::show_book()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, a_name, b_id;
    cout << "\n\n\t\t\t Show All Books";
    file.open("book.txt", ios::in);
    if (!file)
        cout << "\n\n File Opening Error....";
    else
    {
        cout << "\n\n\t\t Book ID    Book            Author            No. of Copies\n\n";
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            cout << "\t\t    " << b_id << "     " << b_name << "    " << a_name << "        " << no_copy << "\n\n";
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        file.close();
    }
}

void bookshop::check_book()
{
    system("cls");
    fstream file;
    int no_copy, Count = 0;
    string b_name, a_name, b_id, b_ID;
    cout << "\n\n\t\t\t\tCheck Specific Book";
    file.open("book.txt", ios::in);
    if (!file)
        cout << "\n\n File Opening Error....";
    else
    {
        cout << "\n\n\t\t Book ID: ";
        cin >> b_ID;
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            if (b_ID == b_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\t Check Specific Book";
                cout << "\n\n Book ID: " << b_id;
                cout << "\n\n\t\tBook Name: " << b_name;
                cout << "\n\n Author :" << a_name;
                cout << "\n\n\t\t\t No. of Copies :" << no_copy;
                Count++;
                break;
            }
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        if (Count == 0)
            cout << "\n\n Book ID Not Found...";
    }
}

void bookshop::update_book()
{
    system("cls");
    fstream file, file1;
    int no_copy, no_co, Count = 0;
    string b_name, a_name, b_id, b_ID, b_n, a_n;
    cout << "\n\n\t\t\t\t Update Book Record";
    file.open("book.txt", ios::in);
    file1.open("book1.txt", ios::app | ios::out);
    if (!file)
        cout << "\n\n File Opening Error....";
    else
    {
        cout << "\n\n Book ID: ";
        cin >> b_ID;
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            if (b_ID == b_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\t Update Book Record";
                cout << "\n\n New Book Name: ";
                cin >> b_n;
                cout << "\n\n\t\t\tAuthor Name: ";
                cin >> a_n;
                cout << "\n\n No. of Copies: ";
                cin >> no_co;
                file1 << " " << b_ID << " " << b_n << " " << a_n << " " << no_co << endl;
                Count++;
            }
            else
                file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << endl;
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        if (Count == 0)
            cout << "\n\n Book ID Not Found... ";
    }
    file.close();
    file1.close();
    remove("book.txt");
    rename("book1.txt", "book.txt");
}

void bookshop::del_book()
{
    system("cls");
    int no_copy, Count = 0;
    string b_name, a_name, b_id, b_ID;
    fstream file, file1;
    cout << "\n\n\t\t\t\t Delete Book Record";
    file1.open("book1.txt", ios::app | ios::out);
    file.open("book.txt", ios::in);
    if (!file)
        cout << "\n\n File Opening Error..... ";
    else
    {
        cout << "\n\n Book ID : ";
        cin >> b_ID;
        file >> b_id >> b_name >> a_name >> no_copy;
        while (!file.eof())
        {
            if (b_ID == b_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\t Delete Book Record";
                cout << "\n\n One Book is Deleted successfully";
                Count++;
            }
            else
            {
                file1 << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << endl;
            }
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        if (Count == 0)
            cout << "\n\n Book ID Not Found";
    }
    file.close();
    file1.close();
    remove("book.txt");
    rename("book1.txt", "book.txt");
}
main()
{
    int choice;
    char x;
    bookshop b;
p:
    b.control_panel();
    cout << "\n\n Your Choice :    ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        while(true)
        {
        b.add_book();
        cout << "\n\n Do You Want to Add another Book (y,n) : ";
        cin >> x;
        if(x == 'n'||x == 'N')
        {
            break;
        }
        }

        break;
    case 2:
        b.show_book();
        break;
    case 3:
        b.check_book();
        break;
    case 4:
        b.update_book();
        break;
    case 5:
        b.del_book();
        break;
    case 6:
        b.rent();
        break;
    case 7:
        b.returned();
        break;
    case 8:
        exit(0);
        break;
    default:
        cout << "\n\n Invalid Value....Please Try again";
    }
    getch();
    goto p;
}