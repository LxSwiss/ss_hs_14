all:
	g++ src/main.cpp src/employee.hpp -o employee
clean:
	rm -rf employee
