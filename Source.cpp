#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 100 , 100 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 600 , 400, "My window" }; // Простое окно
	Axis xa{ Axis::x, Point(20 , 300) , 280, 10, "x axis" };
	Axis ya{ Axis::y, Point{20 , 300} ,280, 10, "y axis" };
	Function sine{ sin , 0 , 100 , Point{20 , 150} , 1000 , 50 , 50 };
	Polygon_BS poly_rect;
	poly_rect.add(Point{ 100,50 });
	poly_rect.add(Point{ 200,50 });
	poly_rect.add(Point{ 200,100 });
	poly_rect.add(Point{ 100,100 });
	poly_rect.set_color(Color::red);
	win.attach(poly_rect);
	win.wait_for_button();

	Rectangle_BS r{ Point{200 ,200 } , 100 , 50 };
	r.set_color(Color::blue);
	win.attach(r);
	win.wait_for_button();
};