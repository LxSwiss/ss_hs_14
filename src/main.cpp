#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

#include "employee.hpp"

using std::cout;
using std::endl;
using std::string;
using std::sort;

void print_object(int i) {  // function:
	std::cout << i << std::endl;
}

int main(int argc, const char* argv[]) {
	if (argc != 2) {
		cout << "Argument Error";
		return 1;
	}
	string line;
	long _salary;
	 string _first_name, _last_name;
	int _age, _clearance_level;

	std::ifstream input_file_stream(argv[1]);

	std::vector<Employee> employees;


	while (std::getline(input_file_stream, line)) {
		std::istringstream iss(line);
		if (!(iss >> _last_name >> _first_name >> _salary >> _age
				>> _clearance_level)) {
			break;
		}
		employees.push_back(
				Employee(_last_name, _first_name, _salary, _age,
						_clearance_level));
	}
	input_file_stream.close();
	sort(employees.begin(), employees.end());

	for (std::vector<Employee>::iterator it = employees.begin();
			it != employees.end(); ++it) {
		cout << *it << endl;
	}

	return 0;
}
