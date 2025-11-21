struct Node {
	public:
		Node() {}
		Node(int val): next(nullptr), value(val) {}

		int value;

		Node *next;
};