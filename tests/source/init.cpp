#include <test.hpp>
#include <catch.hpp>
Complex<double> a {7.0, 9.0};
Complex<double> b {7.0, 9.0};
SCENARIO ("constructorTest")
{	
 int Real = x.getReal();	
 int Imag = x.getIm();	
 REQUIRE (Real == 5);	
 REQUIRE (Imag == 10);
}

SCENARIO ("Addition"){	
  comp.add(x,y);	
  int Real = comp.getReal();	
  int Imag = comp.getIm();	
  REQUIRE (Real == 12);	
  REQUIRE (Imag == 20);
}
SCENARIO ("Sub"){	
  comp.sub(x,y);	
  int Real = comp.getReal();	
  int Imag = comp.getIm();	
  REQUIRE (Real == 8);	
  REQUIRE (Imag == 10);}
SCENARIO ("MultiNum")
{	comp.mult(x,2);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == 10);	
 REQUIRE (Imag == 20);
}
SCENARIO ("DivNum")
{	comp.div(x,5);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == 1);	
 REQUIRE (Imag == 2);
}
SCENARIO ("DivNumZero","[!mayfail]")
{	comp.div(x,0);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == 0);	
 REQUIRE (Imag == 0);
}
SCENARIO("MultiComplex")
{	comp.multC(x,y);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == -75);	
 REQUIRE (Imag == 100);
}
