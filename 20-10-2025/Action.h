#include <string>

class Action {
	public:
		Action() {}

		const static int dimension = 15;
		const std::string player = "x";
		const std::string wall = "=";
		const std::string way = " ";
		int rowTemp, columnTemp, beepTime = 300;

		void matrixRender(std::string matrix[][dimension]);

		void getPlayerPosition(std::string matrix[][dimension]);

		void goRight(std::string matrix[][dimension]);
		void goLeft(std::string matrix[][dimension]);
		void goUp(std::string matrix[][dimension]);
		void goDown(std::string matrix[][dimension]);
};