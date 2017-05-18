#include <test.hpp>
#include <catch.hpp>
Complex<double> a {7.0, 9.0};
Complex<double> b {7.0, 9.0};
SCENARIO ("constructorTest")
{	
 int Real = a.getReal();	
 int Imag = a.getIm();	
 REQUIRE (Real == 5);	
 REQUIRE (Imag == 10);
}

SCENARIO ("Addition"){	
  comp.add(a,b);	
  int Real = comp.getReal();	
  int Imag = comp.getIm();	
  REQUIRE (Real == 12);	
  REQUIRE (Imag == 20);
}
SCENARIO ("Sub"){	
  comp.sub(a,b);	
  int Real = comp.getReal();	
  int Imag = comp.getIm();	
  REQUIRE (Real == 8);	
  REQUIRE (Imag == 10);}
SCENARIO ("MultiNum")
{	comp.mult(a,2);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == 10);	
 REQUIRE (Imag == 20);
}
SCENARIO ("DivNum")
{	comp.div(a,5);	
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
{	comp.multC(a,b);	
 int Real = comp.getReal();	
 int Imag = comp.getIm();	
 REQUIRE (Real == -75);	
 REQUIRE (Imag == 100);
}
