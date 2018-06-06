#include <string>
#include <iostream>

using namespace std;

void HelloWorld()
{
	cout << "Hello World!";
}


//------------ Python Wrapper ------------
//requires installation of boost libraries and python 2.7
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <python2.7/pyconfig.h>

using namespace boost::python;

//module name should equal the name of the compiled share lib(.so)
BOOST_PYTHON_MODULE(libboost_test2)
{
	//def("PythonFunction", CppEquivalent);
	def("HelloPython", HelloWorld);
}
