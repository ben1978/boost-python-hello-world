//#include <boost_test2.h>
#include <string>
#include <iostream>

using namespace std;

void HelloWorld()
{
	cout << "Hello World!";
}

/*
class Point2d
{
private:
	double xval,yval;

public:
	//Constructor
	Point2d(double x = 0.0, double y = 0.0)
	{
		xval = x;
		yval = y;
	}

	//Extractors
	double x(){return xval;}
	double y(){return yval;}
};
*/

//----------------------- PYTHON WRAPPER -----------------------
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <python2.7/pyconfig.h>

using namespace boost::python;
BOOST_PYTHON_MODULE(libboost_test2)
{
	def("HelloPython", HelloWorld);

	/*
	class_<Point2d>("Point_2D");
		.def("Get_X", &Point2d::x)
		.def("Get_Y", &Point2d::y)
		;
	*/
}
