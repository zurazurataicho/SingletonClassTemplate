#include <iostream>
#include <iomanip>
#include "Sample.h"

///////////////////////////////////////////////
// constructor
Sample::Sample():_a{999}
{
}

///////////////////////////////////////////////
// destructor (never called)
Sample::~Sample()
{
  std::cout << "destroy" << std::endl;
}

///////////////////////////////////////////////
// setter
void Sample::set(int a)
{
  _a = a;
}

///////////////////////////////////////////////
// getter
int Sample::get() const
{
  return _a;
}


///////////////////////////////////////////////
// Test code for Singleton template class
Sample& func1()
{
	Sample& s = Sample::getInstance();
	std::cout << "func1=" << std::setw(3) << std::dec << s.get() << ", addr=" << std::hex << &s << std::endl;
	s.set(100);
	return s;
}

Sample& func2()
{
	Sample& s = Sample::getInstance();
	std::cout << "func2=" << std::setw(3) << std::dec << s.get() << ", addr=" << std::hex << &s << std::endl;
	s.set(200);
	return s;
}

int main()
{
  auto& s1 = func1();
	std::cout << "   s1=" << std::setw(3) << std::dec << s1.get() << ", addr=" << std::hex << &s1 << std::endl;

  auto& smain = Sample::getInstance();
	std::cout << "smain=" << std::setw(3) << std::dec << smain.get() << ", addr=" << std::hex << &smain << std::endl;
  smain.set(888);
	std::cout << "smain=" << std::setw(3) << std::dec << smain.get() << ", addr=" << std::hex << &smain << std::endl;

  auto& s2 = func2();
	std::cout << "   s2=" << std::setw(3) << std::dec << s2.get() << ", addr=" << std::hex << &s2 << std::endl;
}
