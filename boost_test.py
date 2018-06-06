#add path to shared library if located out of standard path
import sys
sys.path.insert(0, "/home/ben/eclipse-workspace/boost_test2/Debug/")

#import libboost_test2.so, the shared library. the compiled c++ python module must have same name.
import libboost_test2

#call the C++ function HelloWorld(), which was relabelled "HelloPython" in the c++ wrapper
libboost_test2.HelloPython()
print ' '