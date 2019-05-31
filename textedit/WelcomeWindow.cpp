#include "WelcomeWindow.h"
#include "ui_welcomewindow.h"
#include "textedit.h"

#include <QMessageBox>
#include <QPixmap>
#include <QBitmap>
#include <QPainter>
#include <QWidget>
#include <QFileDialog>
#include <QStandardPaths>

#include <QApplication>
#include <QDesktopWidget>



const QString rsrcPath = ":/images/win";

WelcomeWindow::WelcomeWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::WelcomeWindow) {

	
	
	//Costruttore landing page
	setWindowTitle(QCoreApplication::applicationName());
	setWindowIcon(QIcon(":/images/logo.png"));

	//Setup delle varie finestre ui
	ui->setupUi(this);
	//Setup dimensione finestra
	centerAndResize();
	
	
	//Icona "New file"
	int w = ui->pushButton_new->width();
	int h = ui->pushButton_new->height();
	ui->pushButton_new->setIconSize(QSize::QSize(w, h));
	ui->pushButton_new->setIcon(QIcon::QIcon(rsrcPath + "/WelcomeWindow/new.png"));

	//Icona "Open from URI"
	ui->pushButton_openuri->setIconSize(QSize::QSize(w, h));
	ui->pushButton_openuri->setIcon(QIcon::QIcon(rsrcPath + "/WelcomeWindow/openuri.png"));

	//Logo applicazione
	QPixmap logoPix(":/images/logo.png");
	w = ui->label_logo->width();
	h = ui->label_logo->height();
	ui->label_logo->setPixmap(logoPix.scaled(w, h, Qt::KeepAspectRatio));

	//Connect dei segnali dei vari pushbutton
	connect(ui->pushButton_login, &QPushButton::clicked, this, &WelcomeWindow::pushButtonLoginClicked);
	connect(ui->pushButton_new, &QPushButton::clicked, this, &WelcomeWindow::pushButtonNewClicked);
	connect(ui->pushButton_register, &QPushButton::clicked, this, &WelcomeWindow::pushButtonRegisterClicked);
	connect(ui->pushButton_browse, &QPushButton::clicked, this, &WelcomeWindow::pushButtonBrowseClicked);
	connect(ui->pushButton_regConf, &QPushButton::clicked, this, &WelcomeWindow::pushButtonConfirmRegistrationClicked);
	connect(ui->commandLinkButton, &QPushButton::clicked, this, &WelcomeWindow::pushButtonBackLoginClicked);

	//Connect tra le lineEdit di user/password e tasto invio per premere bottone di login
	connect(ui->lineEdit_psw, &QLineEdit::returnPressed, this, &WelcomeWindow::pushButtonLoginClicked);
	connect(ui->lineEdit_usr, &QLineEdit::returnPressed, this, &WelcomeWindow::pushButtonLoginClicked);

	//User Icon
	QPixmap userPix(rsrcPath + "/WelcomeWindow/defaultProfile.png");
	w = ui->label_UsrIcon->width();
	h = ui->label_UsrIcon->height();
	ui->label_UsrIcon->setPixmap(userPix.scaled(w, h, Qt::IgnoreAspectRatio));
	connect(ui->lineEdit_UsrIconPath, &QLineEdit::textChanged, this, &WelcomeWindow::showUserIcon);

	//Setta indice a 0 (finestra di login) per lo Stacked Widget
	ui->stackedWidget->setCurrentIndex(0);

	QListWidgetItem* item = new QListWidgetItem(QIcon(rsrcPath + "/WelcomeWindow/textfile.png"), "File1");
	QListWidgetItem* item2 = new QListWidgetItem(QIcon(rsrcPath + "/WelcomeWindow/textfile.png"), "File2");
	QListWidgetItem* item3 = new QListWidgetItem(QIcon(rsrcPath + "/WelcomeWindow/textfile.png"), "File3");
	QListWidgetItem* item4 = new QListWidgetItem(QIcon(rsrcPath + "/WelcomeWindow/richtext.png"), "File4");
	QListWidgetItem* item5 = new QListWidgetItem(QIcon(rsrcPath + "/WelcomeWindow/richtext.png"), "File5");

	ui->listWidget->addItem(item);
	ui->listWidget->addItem(item2);
	ui->listWidget->addItem(item3);
	ui->listWidget->addItem(item4);
	ui->listWidget->addItem(item5);

	//Validator per non inserire lettere nei campi server/port
	ui->lineEdit_serverPort->setValidator(new QIntValidator(0, 10000, this));
	

}

WelcomeWindow::~WelcomeWindow()
{
	delete ui;
}



void WelcomeWindow::pushButtonLoginClicked()
{
	//Bypass login
	ui->stackedWidget->setCurrentIndex(2);
	ui->stackedWidget->show();

	//Prende i dati dalle caselle Login e Password
	QString username = ui->lineEdit_usr->text();
	QString password = ui->lineEdit_psw->text();
	QString serverIP = ui->lineEdit_serverIP->text();
	QString serverPort = ui->lineEdit_serverPort->text();

	//Controllo user e password
	if (username != "test" || password != "test") {
		ui->label_incorrect_login->setText("Username and password does not match");
	}
	else if (serverIP != "127.0.0.1" || serverPort != "999"){
		ui->label_incorrect_login->setText("Server " + serverIP + ":" + serverPort + " unreachable");
	}
	else {
		//Apre seconda landing page con operazioni sui file
		ui->stackedWidget->setCurrentIndex(2);
		ui->stackedWidget->show();	
	}
}

//Apre la pagina dedicata alla registrazione e cancella campi login
void WelcomeWindow::pushButtonRegisterClicked()
{
	ui->label_incorrect_login->setText("");
	ui->lineEdit_psw->setText("");
	ui->lineEdit_usr->setText("");

	ui->stackedWidget->setCurrentIndex(1);
	ui->stackedWidget->show();
}

//Apre il dialogo per la scelta dell'icona utente
void WelcomeWindow::pushButtonBrowseClicked()
{
	QString filename = QFileDialog::getOpenFileName(this, "Choose your profile icon",
		QDir::homePath(), "Image files(*.png *.jpg *.bmp) ;; All files (*.*)");

	//Setta nel form il path scelto
	ui->lineEdit_UsrIconPath->setText(filename);
}

//Conferma la registrazione
void WelcomeWindow::pushButtonConfirmRegistrationClicked()
{
	QString nick = ui->lineEdit_regNick->text();
	QString username = ui->lineEdit_regUsr->text();
	QString password = ui->lineEdit_regPsw->text();
	QString passwordConf = ui->lineEdit_regPswConf->text();
	QString iconPath = ui->lineEdit_UsrIconPath->text();

	//Controllo se i dati sono stati inseriti correttamente
	if (username.isEmpty() || password.isEmpty() || passwordConf.isEmpty()) {
		//QMessageBox::warning(this, "Registration", "Please fill all the required fields");
		ui->label_incorrect_reg->setText("Please fill all the required fields");
		return;
	}

	//Controllo se esiste gi� un username
	bool userExist = true;

	if (userExist) {
		ui->label_incorrect_reg->setText("Username already taken");
	}


	//Controllo sulla corrispondenza password
	if (password != passwordConf) {
		//QMessageBox::warning(this, "Registration", "Passwords does not match");
		ui->label_incorrect_reg->setText("Passwords does not match");
		return;
	}

	//Se non � stata settata un'icona si salva quella di default, altrimenti si usa quella inserita
	if (!iconPath.isEmpty() && fileExist(iconPath)) {
		QPixmap userPix(iconPath);
	}
	else {
		QPixmap userPix(rsrcPath + "/WelcomeWindow/defaultProfile.png");
	}
}

void WelcomeWindow::pushButtonBackLoginClicked()
{
	//Pulisco i campi inseriti in registrazione se torno alla schermata di login
	ui->lineEdit_regUsr->setText("");
	ui->lineEdit_regPsw->setText("");
	ui->lineEdit_regPswConf->setText("");
	ui->lineEdit_regNick->setText("");
	ui->lineEdit_UsrIconPath->setText("");
	ui->label_incorrect_reg->setText("");

	//Cambio schermata tornando a quella di login
	ui->stackedWidget->setCurrentIndex(0);
	ui->stackedWidget->show();
}

//Funzione per verificare se un file esiste e se non � una directory
bool WelcomeWindow::fileExist(QString path) {

	QFileInfo file(path);

	return (file.exists() && file.isFile());
}

//Slot attivato quando viene modificato il percorso dell'icona
//Se la nuova immagine esiste la visualizza altrimenti visualizza l'icona di default
void WelcomeWindow::showUserIcon(QString path)
{
	int w = ui->label_UsrIcon->width();
	int h = ui->label_UsrIcon->height();

	if (fileExist(path)) {
		QPixmap userPix(path);

		if (!userPix.isNull()) {
			ui->label_UsrIcon->setPixmap(userPix.scaled(w, h, Qt::IgnoreAspectRatio));
			return;
		}

		ui->label_incorrect_reg->setText("Please choose a valid image file");
	}

	QPixmap default(rsrcPath + "/WelcomeWindow/defaultProfile.png");
	ui->label_UsrIcon->setPixmap(default.scaled(w, h, Qt::IgnoreAspectRatio));
}

//Quando viene aperto un nuovo file apre l'editor
void WelcomeWindow::pushButtonNewClicked()
{
	openEditor();
}

void WelcomeWindow::openEditor() {

	this->close();


	/*QCommandLineParser parser;
	parser.setApplicationDescription(QCoreApplication::applicationName());
	parser.addHelpOption();
	parser.addVersionOption();
	parser.addPositionalArgument("file", "The file to open.");
	parser.process(a);*/

	//Crea l'oggetto TextEdit un wrapper di QTextEdit modificato per realizzare le funzioni base
	TextEdit* mw = new TextEdit();

	//Dimensione finestra
	const QRect availableGeometry = QApplication::desktop()->availableGeometry(mw);

	//Applica la dimensione al TextEdit e lo mette nella finestra corretta
	mw->resize(availableGeometry.width() / 2, (availableGeometry.height() * 2) / 3);
	mw->move((availableGeometry.width() - mw->width()) / 2, (availableGeometry.height() - mw->height()) / 2);

	//Apre il file example.html se lo trova, altrimenti ne crea uno nuovo come se lo passassi da linea di comando
	//if (!mw.load(parser.positionalArguments().value(0, QLatin1String(":/example.html"))))
	mw->fileNew();


	//Mostra la finestra di mw formata
	mw->show();
}

void WelcomeWindow::centerAndResize() {
	// get the dimension available on this screen
	QSize availableSize = qApp->desktop()->availableGeometry().size();
	int width = availableSize.width();
	int height = availableSize.height();
	
	width *= 0.6; // 90% of the screen size
	height *= 0.5; // 90% of the screen size
	
	QSize newSize(width, height);

	setGeometry(
		QStyle::alignedRect(
			Qt::LeftToRight,
			Qt::AlignCenter,
			newSize,
			qApp->desktop()->availableGeometry()
		)
	);
}