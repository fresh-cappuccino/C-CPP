#include <iostream>

// funćão para setar um bit em determinada posićão para 0
template <class T>
void unsetBit (T & num, T pos) {
	if (pos < ((sizeof (T) * 8))) num &= (~(1 << pos));
}

int main () {
	int num=129, pos=7;

	unsetBit(num, pos);

	std::cout << num;
}
