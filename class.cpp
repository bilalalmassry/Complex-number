#include"Header.h"
/*complex::complex(int real, int img) {

}*/
complex::~complex() {
	delete(&real);
	delete(&img);
}
void complex::readcomplex(int real, int img) {
	this->real = real;
	this->img = img;
}
void complex::printcomplex() {
	cout << real << img << "i" << endl;
}
