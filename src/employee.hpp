/*
 * employee.hpp
 *
 *  Created on: Sep 28, 2014
 *      Author: lxswiss
 */

#ifndef EMPLOYEERE_HPP_
#define EMPLOYEERE_HPP_

using std::string;

struct Employee {
	std::string last_name;
	std::string first_name;
	long salary;
	int age;
	int clearance_level;
	Employee(string _last_name, string _first_name,
			long _salary, int _age, int _clearance_level){
		last_name = _last_name;
		first_name = _first_name;
		salary = _salary;
		age = _age;
		clearance_level = _clearance_level;
	}
};

inline bool operator<(const Employee& lhs, const Employee& rhs) {
	return lhs.salary > rhs.salary;
}
inline std::ostream& operator<<(std::ostream& ostream,
		const Employee& employee) {
	return ostream << employee.last_name << " "
			<< employee.first_name << " " << employee.salary
			<< " " << employee.age << " "
			<< employee.clearance_level;
}

#endif /* EMPLOYEE_H_ */
