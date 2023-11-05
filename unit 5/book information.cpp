#include <iostream>

#include <string>

class Book
{

private:
    std::string title;

    std::string author;

    int year;

public:
    Book(const std::string &title, const std::string &author, int year)
    {

        this->title = title;

        this->author = author;

        this->year = year;
    }

    void setYear(int year)
    {

        this->year = year;
    }

    int getYear() const
    {

        return year;
    }

    void displayDetails() const
    {

        std::cout << "Title: " << title << std::endl;

        std::cout << "Author: " << author << std::endl;

        std::cout << "Year of Publication: " << year << std::endl;
    }
};

int main()
{

    std::string title, author;

    int year;

    std::getline(std::cin, title);

    std::getline(std::cin, author);

    std::cin >> year;

    std::cin.ignore();

    Book *book = new Book(title, author, year);

    std::cout << "Book Details:" << std::endl;

    book->displayDetails();

    int newYear;

    std::cin >> newYear;

    book->setYear(newYear);

    std::cout << std::endl
              << "Updated Year of Publication: " << book->getYear();

    delete book;

    return 0;
}
