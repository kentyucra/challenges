// compile code: kent@LAPTOP-DLUV7J0S:~$ g++ -std=c++17 main.cpp
// run code: kent@LAPTOP-DLUV7J0S:~$ ./a.out


#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::filesystem::directory_iterator;
using std::filesystem::is_directory;

int main() {
    string path = ".";

    int number_directories = 0;
    int number_files = 0;
    for (const auto & file : directory_iterator(path)) {
        cout << file.path();
	if (is_directory(file.path() ) ) {
		cout << "(directory)" << endl;
		number_directories++;
	} else {
		cout << "(file)" << endl;
		number_files++;
	}
    }
    cout << number_directories << " directories, " << number_files << " files."  << endl;
    

    return EXIT_SUCCESS;
}
