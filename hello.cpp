#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]){

	QApplication app(argc, argv);
	
	QLabel salutations("Hello World");
	
	salutations.show();
	
	return app.exec();
	
};
