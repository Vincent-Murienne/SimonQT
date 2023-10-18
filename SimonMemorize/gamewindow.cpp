#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <Qtimer>
//#include <QtMultimedia/QMediaPlayer>
//#include <QtWidgets>
//#include <QTimer>
//#include <QSound>

#include <QUrl>
//#include <QMediaPlayer>

gamewindow::gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    ui->btn_rouge->setStyleSheet("background-color: red; border-top-left-radius: 80px 80px;");
    ui->btn_vert->setStyleSheet("background-color: green; border-top-right-radius: 80px 80px;");
    ui->btn_bleu->setStyleSheet("background-color: blue; border-bottom-left-radius: 80px 80px;");
    ui->btn_jaune->setStyleSheet("background-color: yellow;border-bottom-right-radius: 80px 80px;");
    //ui->btn_noir->setStyleSheet("background-color: white; border-radius: 80px;");
}

gamewindow::~gamewindow()
{
    delete ui;
}

void gamewindow::on_btn_rouge_clicked()
{
    //ui->btn_rouge->setStyleSheet("background-color: red;");
    //ui->btn_rouge->setStyleSheet("border-radius: 7.84 px ; background-color: red;");
    // Taille de référence
    //ui->btn_rouge->setStyleSheet("background-color:125 125 125; border-top-left-radius: 80px 80px; animation-duration: .8s;animation-name: clignoter;"
    //"animation-iteration-count: infinite;transition: none;")
    ui ->btn_rouge->setStyleSheet("background-color:rgba(255, 0, 0, 0.3);border-top-left-radius:80px 80px;");
}


void gamewindow::on_btn_vert_clicked()
{
    //ui->btn_vert->setStyleSheet("background-color: green;");
    // ui->btn_veret->setStyleSheet("border_radius_:50 px;");
    ui->btn_vert->setStyleSheet("background-color:rgba(0, 220, 0, 0.3) ; border-top-right-radius: 80px 80px;");
}


void gamewindow::on_btn_bleu_clicked()
{
    ui->btn_bleu->setStyleSheet("background-color:rgba(0 ,130 , 225, 0.3) ; border-bottom-left-radius: 80px 80px;");
}


void gamewindow::on_btn_jaune_clicked()
{
    ui->btn_jaune->setStyleSheet("background-color:rgba(255 ,255 , 80, 0.8);border-bottom-right-radius: 80px 80px;");
}

/*void MaClasse::on_btn_jaune_clicked()
{
// Créez un minuteur QTimer
QTimer *timer = new QTimer(this);

// Définissez un intervalle pour le minuteur (par exemple, 500 ms pour une demi-seconde)
timer->setInterval(400);

// Connectez le signal `timeout()` du minuteur à une fonction pour gérer le clignotement
connect(timer, &QTimer:: timeout, this, &MaClasse::gestionClignotement);

// Démarrez le minuteur
timer->start();
QTimer::singleShot(2000, this, &MaClasse::arreterClignotement);

}

void MaClasse::arreterClignotement()
{
// Arrêtez le clignotement en réinitialisant le style du bouton
ui->btn_jaune->setStyleSheet("background-color:rgb(255 ,255 , 0);border-bottom-right-radius: 80px 80px;");
}

void MaClasse::gestionClignotement()
{
// Alternez le style du bouton entre un style de fond transparent et le style souhaité
if (ui->btn_jaune->styleSheet().isEmpty()) {
    ui->btn_jaune->setStyleSheet("background-color: rgb(255, 255, 0); border-bottom-right-radius: 80px 80px;");
} else {
    ui->btn_jaune->setStyleSheet("");
}
}*/

//void MaClasse::on_btn_noir_clicked()
//{
// ui->btn_noir->setStyleSheet("background-color: white; border-radius: 80px;");
//}






/*void Game::startGame() {
    while (sequenceLength < maxSequenceLength) {
        // Ajoute une couleur aléatoire à la séquence
        buttons[sequenceLength].setColorRandom();
        sequenceLength++;

        // Affiche la séquence actuelle (supposez que vous ayez un QLabel nommé sequenceLabel pour l'affichage)
        ui-sequenceLabel->setText(QString("Sequence: "));
        for (int i = 0; i < sequenceLength; ++i) {
            ui->sequenceLabel->setText(ui->sequenceLabel->text() + buttons[i].getColor() + " ");
        }

        // Attendez un moment (par exemple, utilisez QThread::sleep pour une pause visuelle)
        // QThread::sleep(1);

        // Pour le tour suivant, ajoutez 2 couleurs à la séquence
        maxSequenceLength += 1;
    }
}*/



/*class SimonGame : public QWidget {
    Q_OBJECT

public:
    SimonGame(QWidget* parent = nullptr);

private slots:
    void startGame();
    void buttonClicked();
    void playSequence();

private:
    void setupUi();
    void generateRandomSequence();
    void highlightButton(int button);
    void resetButtons();

    QVector<int> sequence;
    QVector<int> playerSequence;
    int sequenceIndex;
    QTimer* timer;
    //QSound* sound1;
    //QSound* sound2;
    //QSound* sound3;
    //QSound* sound4;

    QPushButton* greenButton;
    QPushButton* redButton;
    QPushButton* yellowButton;
    QPushButton* blueButton;
    QPushButton* startButton;
};

SimonGame::SimonGame(QWidget* parent)
    : QWidget(parent), sequenceIndex(0) {
    setupUi();
}

void SimonGame::setupUi() {
    QVBoxLayout* layout = new QVBoxLayout(this);

    greenButton = new QPushButton("Green", this);
    redButton = new QPushButton("Red", this);
    yellowButton = new QPushButton("Yellow", this);
    blueButton = new QPushButton("Blue", this);
    startButton = new QPushButton("Start", this);

    connect(greenButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    connect(redButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    connect(yellowButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    connect(blueButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    connect(startButton, SIGNAL(clicked()), this, SLOT(startGame()));

    layout->addWidget(greenButton);
    layout->addWidget(redButton);
    layout->addWidget(yellowButton);
    layout->addWidget(blueButton);
    layout->addWidget(startButton);

    setLayout(layout);
    setFixedSize(200, 200);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(playSequence()));

    //sound1 = new QSound(":/sounds/green.wav");
    //sound2 = new QSound(":/sounds/red.wav");
    //sound3 = new QSound(":/sounds/yellow.wav");
    //sound4 = new QSound(":/sounds/blue.wav");
}

void SimonGame::startGame() {
    generateRandomSequence();
    sequenceIndex = 0;
    playSequence();
}

void SimonGame::generateRandomSequence() {
    QTime time = QTime::currentTime();
    //srand((uint)time.msec());

    for (int i = 0; i < 20; ++i) {
        //sequence.append(qrand() % 4);
    }
}

void SimonGame::playSequence() {
    if (sequenceIndex < sequence.size()) {
        highlightButton(sequence[sequenceIndex]);
        ++sequenceIndex;
    }
    else {
        sequenceIndex = 0;
        resetButtons();
        timer->stop();
    }
}

void SimonGame::buttonClicked() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button == greenButton) {
        playerSequence.append(0);
        //sound1->play();
    }
    else if (button == redButton) {
        playerSequence.append(1);
        //sound2->play();
    }
    else if (button == yellowButton) {
        playerSequence.append(2);
        //sound3->play();
    }
    else if (button == blueButton) {
        playerSequence.append(3);
        //sound4->play();
    }

    if (playerSequence != sequence.mid(0, playerSequence.size())) {
        QMessageBox::information(this, "Simon", "Game Over!");
        sequence.clear();
        playerSequence.clear();
    }
    else if (playerSequence.size() == sequence.size()) {
        playerSequence.clear();
        timer->start(1000);
    }
}

void SimonGame::highlightButton(int button) {
    switch (button) {
    case 0:
        greenButton->setDown(true);
        QTimer::singleShot(500, this, SLOT(resetButtons()));
        break;
    case 1:
        redButton->setDown(true);
        QTimer::singleShot(500, this, SLOT(resetButtons()));
        break;
    case 2:
        yellowButton->setDown(true);
        QTimer::singleShot(500, this, SLOT(resetButtons()));
        break;
    case 3:
        blueButton->setDown(true);
        QTimer::singleShot(500, this, SLOT(resetButtons()));
        break;
    default:
        break;
    }
}

void SimonGame::resetButtons() {
    greenButton->setDown(false);
    redButton->setDown(false);
    yellowButton->setDown(false);
    blueButton->setDown(false);
}

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    SimonGame game;
    game.show();
    return app.exec();
}*/
//#include "main.moc"

/*void Game::on_pushButton_clicked()
{
    connect(music, SIGNAL(error(QMediaPlayer::Error)), this, SLOT(handleError(QMediaPlayer::Error)));

    QMediaPlayer *music = new QMediaPlayer(this);
    music->setSource(QUrl("Sound/AmongUs.mp3"));
    qDebug() << "current media: " << music;

    //music->setVolume(50);
    music->play();
}*/
