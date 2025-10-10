#include <string>

class Person {
	public:
		std::string firstName;
		std::string surName;
		std::string dni;

		Person() {}

		bool insert();
		void show();
		bool existsDni(std::string dni);
		bool edit();
};