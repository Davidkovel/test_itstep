#include <iostream>
#include <string>
#include <vector>

using namespace std;


// -- Task 1

/*
void printName(const string* name)
{
	cout << "Hello! " << *name << endl;
}

int main()
{
	string name = "David";
	printName(&name);
	
	return 0;


	
	// Hello! David

	// C:\Users\David\source\repos\Project1\x64\Debug\Project1.exe (процесс 4476) завершил работу с кодом 0.
	// Нажмите любую клавишу, чтобы закрыть это окно:
	
}*/


// -- Task 2


/*bool isAdult(const int* age)
{
	if (*age >= 18)
	{
		cout << "You are adult" << endl;
		return true;
	}
	else
	{
		cout << "You are not adult" << endl;
		return false;
	}
}


int main()
{
	int age;
	cout << "Input your age: ";
	cin >> age;

	isAdult(&age);

	return 0;

	// Input your age: 19
	// You are adult

	// C : \Users\David\source\repos\Project1\x64\Debug\Project1.exe(процесс 14460) завершил работу с кодом 0.
	// Нажмите любую клавишу, чтобы закрыть это окно :
}*/

// -- Task 3

/*
string reverseString(string* data)
{
	string result;
	int size = data->length();
	for (int i = size - 1; i >= 0; --i)
	{
		char temp = (*data)[i];
		cout << temp;
		result += temp;
	}
	cout << endl;

	return result;
}

int main()
{
	string input;
	cout << "Write some text: ";
	cin >> input;

	string reversed = reverseString(&input);
	cout << "Reversed text: " << reversed << endl;

	return 0;

	
	// Write some text: Hello
	// olleH
	// Reversed text: olleH

	// C:\Users\David\source\repos\Project1\x64\Debug\Project1.exe (процесс 24020) завершил работу с кодом 0.
	// Нажмите любую клавишу, чтобы закрыть это окно:
}*/


// -- Task 4

/*
class Auto
{
private:
	string brand, model;
	int year;
	double engine;
public:
	Auto(string b, string m, int y, double e) : brand(b), model(m), year(y), engine(e) {}

	void printInfo() {
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Engine: " << engine << endl;
	}
};

int main() {
	Auto car("BMW", "M5", 2020, 4.4);

	car.printInfo();

	return 0;


	// Brand: BMW
	// Model: M5
	// Year : 2020
	// Engine : 4.4

	// C : \Users\David\source\repos\Project1\x64\Debug\Project1.exe(процесс 10456) завершил работу с кодом 0.
	// Нажмите любую клавишу, чтобы закрыть это окно :
}
*/

// -- Task 5

class Book {
private:
	string title, author;
	int year;
public:
	Book(string t, string a, int y) : title(t), author(a), year(y) {}

	string getTitle() const { return title; }
	string getAuthor() const { return author; }
	int getYear() const { return year; }
};


class Library {
private:
	vector<Book> books;
public:
	void addBook(Book book) {
		books.push_back(book);
	}

	void removeBook(string title) {
		for (int i = 0; books.size(); i++)
		{
			if (title == books[i].getTitle())
			{
				books.erase(books.begin() + i);
				cout << "Book " << title << " succes deleted" << endl;
				return;
			}
		}
	}

	void searchByAuthor(string author) {
		for (Book& book : books) {
			if (book.getAuthor() == author) {
				cout << "Title: " << book.getTitle() << ", Year: " << book.getYear() << "\n";
			}
		}
	}

	void searchByYear(int year) {
		for (Book& book : books) {
			if (book.getYear() == year) {
				cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << "\n";
			}
		}
	}


	void printBooks() {
		for (Book& book : books) {
			cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear() << endl;
		}
	}
};



int main() {
	Library library;

	library.addBook(Book("Mein krieg", "Adolf", 1970));
	library.addBook(Book("David book", "Vlad", 2023));

	cout << "All books in the library: " << endl;
	library.printBooks();

	library.removeBook("Mein krieg");

	library.searchByYear(2023);

	library.printBooks();

	return 0;
}

/*
All books in the library:
Title: Mein krieg, Author: Adolf, Year: 1970
Title: David book, Author: Vlad, Year: 2023
Book Mein krieg succes deleted
Title: David book, Author: Vlad
Title: David book, Author: Vlad, Year: 2023

C:\Users\David\source\repos\Project1\x64\Debug\Project1.exe (процесс 16468) завершил работу с кодом 0.
Нажмите любую клавишу, чтобы закрыть это окно:
*/
