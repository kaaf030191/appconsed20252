#ifndef SNACK_H
#define SNACK_H

class Snack {
	public:
		char charSnack;
		int posX;
		int posY;

		Snack() {
			this->charSnack = 'X';

			this->setNewPosition();
		}

		void setNewPosition();
};

#endif