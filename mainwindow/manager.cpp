
#include "manager.h"
#include <QFile>
#include <QTextStream>

Manager::Manager(){
	
	//MainWindow mainwindow;
	//mainwindow.show();
	// manager should somehow know the location of the main configuration file
	QFile file("/home/nealdaniel/.megabolt.conf");
	if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
			//write to error log
			// cannot read the file megabolt.conf
			// create a new default one or copy a default file
	}
	QTextStream in(&file);
	QString line=in.readLine();
	while(!line.isNull()){
		processLine(line);
		line=in.readLine();
	}
	parseDownloadList();
}

int Manager::processLine(QString line){
	
	if(line.startsWith('#'))
		{ return 0;}
	else if(line.startsWith("downloadlist",Qt::CaseSensitive)){
		QStringList list;
		list=line.split(" ");
		if(list.count()==2){
			downloadlist=list[1];
		}
	}
	else{
		//write error log to log
	}
}

int Manager::parseDownloadList(){
	int count=0;
	QFile file("/home/nealdaniel/.megabolt.conf");
	if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
			// write to error log
			// cannot read the file megabolt.conf
			// create a new default one or copy a default file
	}
	QTextStream in(&file);
	QString metadata=in.readLine();
	while(!metadata.isNull()){
		count++;
		metadata=in.readLine();
		initializeDownload(metadata);
	}
}


int Manager::initializeDownload(QString metadata){
	//threading section
}
