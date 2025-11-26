struct Node {
	public:
		Node() {}
		Node(int val): next(nullptr), preview(nullptr), value(val) {}

		int value;

		Node *next;
		Node *preview;
};