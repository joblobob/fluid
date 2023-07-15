#include <QApplication>

#include <fluid.h>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	fluid* view2 = new fluid();
	view2->setupScene();
	view2->show();

	app.exec();
}
