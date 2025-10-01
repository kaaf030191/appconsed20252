#include <string>

class Person {
	public:
		std::string firstName;
		std::string surName;
		std::string dni;

		Person() {}

		bool insert();
		bool edit();
		bool existsDni(std::string dni);
};