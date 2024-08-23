#include "Circe.h"


void Circe::set_R(int r)
{
	m_r = r;
}
int Circe::get_R()
{
	return m_r;
}
void Circe::set_point(point p)
{
	Circe_heart = p;
}
point Circe::get_point()
{
	return Circe_heart;
}

