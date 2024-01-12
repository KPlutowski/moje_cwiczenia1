#include "Line.h"

Line::Line(const double a,const double b) : _a(a),_b(b){}
Line::Line(const double a) : _a(a),_b(a){}
double Line::X0() const{return -_b/_a;}
double Line::operator()(const double x) const{return _a*x+_b;}
