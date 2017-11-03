//#include <iostream>
//
////x+ iy
//struct complex
//{
//	double x, y;
//};
//
//complex  create_complex(double x, double y)
//{
//	complex temp;
//	temp.x = x;
//	temp.y = y;
//	return temp;
//
//}
//
//complex add(complex a, complex b)
//{
//	double x = (a.x + b.x);
//	double y = (a.y + b.y);
//	return create_complex(x,y);
//}
//
//complex subtract(complex a, complex b)
//{
//	double x = (a.x - b.x);
//	double y = (a.y - b.y);
//	return create_complex(x, y);
//}
//
//// a = x1 + i y1
//// b = x2 + i y2
//// a * b = (x1 * x2 - y1 * y2) + i(x2 * y1 + x1 * y2) 
//
//complex multiply(complex a, complex b)
//{
//	double x = a.x * b.x - a.y* b.y;
//	double y = b.x * a.y + a.x * b.y;
//	return create_complex(x, y);
//}
