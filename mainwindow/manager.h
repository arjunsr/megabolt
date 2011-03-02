#include "mainwindow.h"


class Manager : public MainWindow{
	Q_OBJECT
	private:
		QString conf;               //configuration-file name.
		QString downloadlist;       //download list-file name
		int initializeDownload(QString metadata);
 		int processLine(QString);
 		int parseDownloadList();   
	public:
		Manager();
};
