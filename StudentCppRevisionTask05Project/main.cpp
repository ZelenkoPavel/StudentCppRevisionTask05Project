#include "tests.h"

bool task02(int);

int main() {
	testingTask01();
	testingTask02();
	testingTask03();
	testingTaskX();


	string result = task02(12321) ? "true" : "false";
	cout << result << endl;

	return 0;
}