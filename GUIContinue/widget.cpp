#include "widget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFont>
#include <QLineEdit>
#include <QSpinBox>
#include <QLabel>
#include <QTime>
#include <QTimer>
#include <QLCDNumber>
#include<QComboBox>
#include<QSlider>
#include<QListWidget>
#include<QFontComboBox>
#include<QTextEdit>
#include<QTableWidget>
#include<QCalendarWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // Checkboxes
    /*
    box1 = new QCheckBox("COOl");
    box2 = new QCheckBox("COOlww");

    connect(box1, &QCheckBox::stateChanged,
            this, &Widget::checkedByIt);
    connect(box2, &QCheckBox::stateChanged,
            this, &Widget::checkedByIt);

    // Selected label
    label = new QLabel("Nothing Selected");
    label->setFont(QFont("Times", 14));

    // Price Label
    QLabel *priceLabel = new QLabel("Laptop Price:");
    priceLabel->setFont(QFont("Times", 15));

    // Price Input
    price = new QLineEdit();
    price->setFont(QFont("Times", 15));

    // Quantity Label
    QLabel *quantityLabel = new QLabel("Quantity:");
    quantityLabel->setFont(QFont("Times", 15));

    // Spin Box
    spinbox = new QSpinBox();
    spinbox->setFont(QFont("Times", 15));
    spinbox->setMinimum(1);

    connect(spinbox, &QSpinBox::valueChanged,
            this, &Widget::changeSpin);

    // Total Label
    QLabel *totalLabel = new QLabel("Total:");
    totalLabel->setFont(QFont("Times", 15));

    // Total Output
    total = new QLineEdit();
    total->setFont(QFont("Times", 15));
    total->setReadOnly(true);

    // LCD Clock
    lcdNumber = new QLCDNumber();
    lcdNumber->setDigitCount(8);                    // HH:mm:ss
    lcdNumber->setSegmentStyle(QLCDNumber::Filled);
    lcdNumber->setStyleSheet(
        "background-color: yellow;"
        "color: blue;"
        "border: 2px solid black;"
        );

    // Timer
    QTimer *timer = new QTimer(this);

    connect(timer, &QTimer::timeout,
            this, &Widget::showTime);

    timer->start(1000);

    showTime();

    // Horizontal Layout
    QHBoxLayout *hbox = new QHBoxLayout();
    hbox->addWidget(box1);
    hbox->addWidget(box2);
    hbox->addStretch();
    hbox->addWidget(lcdNumber);

    // Main Layout
    QVBoxLayout *vbox = new QVBoxLayout();

    vbox->addLayout(hbox);
    vbox->addWidget(label);

    vbox->addWidget(priceLabel);
    vbox->addWidget(price);

    vbox->addWidget(quantityLabel);
    vbox->addWidget(spinbox);

    vbox->addWidget(totalLabel);
    vbox->addWidget(total);

    setLayout(vbox);

    setWindowTitle("Qt Widgets Demo");
    resize(500, 300);

    combo=new QComboBox(this);
    */
    /*
    setWindowTitle("Combo Box Example");
    resize(400,150);

    QLabel *label1 = new QLabel("Select Account Type:");
    label1->setFont(QFont("Times",15));

    combo = new QComboBox(this);
    combo->setFont(QFont("Times",15));

    combo->addItem("Current Account");
    combo->addItem("Deposit Account");
    combo->addItem("Saving Account");
    connect(combo,SIGNAL(currentTextChanged(QString)),this,SLOT(comboChanged()));

    QHBoxLayout *hbox = new QHBoxLayout;


    labelResult=new QLabel("Hi ");
    QVBoxLayout *vbox=new QVBoxLayout(this);
    vbox->addWidget(labelResult);


    hbox->addWidget(label1);
    hbox->addWidget(combo);
    vbox->addLayout(hbox);

    setLayout(hbox);
*/
    /*

    setWindowTitle("Slider Example");
    resize(400,150);

    slider = new QSlider(Qt::Horizontal);

    slider->setMinimum(0);
    slider->setMaximum(100);
    slider->setTickInterval(5);
    slider->setTickPosition(QSlider::TicksBelow);

    result = new QLabel("0");
    result->setFont(QFont("Times",15));

    connect(slider,
            &QSlider::valueChanged,
            this,
            &Widget::changeSlider);

    QVBoxLayout *vbox = new QVBoxLayout;

    vbox->addWidget(slider);
    vbox->addWidget(result);

    setLayout(vbox);*/
 /*
    QVBoxLayout *vbox=new QVBoxLayout(this);
    QListWidget *listWidget=new QListWidget();
    listWidget->setFont(QFont("Times",25));
    listWidget->setStyleSheet("background-color:red");

        listWidget->insertItem(0,"c++");
            listWidget->insertItem(1,"python");
                listWidget->insertItem(2,"java");
    vbox->addWidget(listWidget);
*/
    /*
    setWindowTitle("Font Combo Box Example");
    resize(600, 400);

    FontcomboBox = new QFontComboBox(this);
    textEditor = new QTextEdit(this);

    textEditor->setPlainText("Type something here...");
    textEditor->setFont(QFont("Times New Roman", 14));

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(FontcomboBox);
    vbox->addWidget(textEditor);

    connect(FontcomboBox,
            &QFontComboBox::currentFontChanged,
            this,
            &Widget::changeFont);
*/
    /*

    QTableWidget *table = new QTableWidget(this);

    table->setFont(QFont("Times", 15));
    table->setStyleSheet("background-color: red;");
    table->setRowCount(3);
    table->setColumnCount(3);


    table->setHorizontalHeaderLabels(
        QStringList() << "ID" << "Name" << "Age");

    table->setVerticalHeaderLabels(
        QStringList() << "Row 1" << "Row 2" << "Row 3");


    table->setItem(0, 0, new QTableWidgetItem("1"));
    table->setItem(0, 1, new QTableWidgetItem("Alice"));
    table->setItem(0, 2, new QTableWidgetItem("21"));

    table->setItem(1, 0, new QTableWidgetItem("2"));
    table->setItem(1, 1, new QTableWidgetItem("Bob"));
    table->setItem(1, 2, new QTableWidgetItem("22"));

    table->setItem(2, 0, new QTableWidgetItem("3"));
    table->setItem(2, 1, new QTableWidgetItem("Charlie"));
    table->setItem(2, 2, new QTableWidgetItem("20"));


    table->resizeColumnsToContents();


    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(table);
    setLayout(layout);
*/
    QVBoxLayout *vbox=new QVBoxLayout(this);
    calender=new QCalendarWidget();
    connect(calender,SIGNAL(selectionChanged()),this,SLOT(selectDate()));


    calenderLabel=new QLabel("Hello");


    vbox->addWidget(calender);
    vbox->addWidget(calenderLabel);


}


Widget::~Widget()
{
}

void Widget::checkedByIt()
{
    QString value;

    if (box1->isChecked())
        value += box1->text() + " ";

    if (box2->isChecked())
        value += box2->text();

    if (value.isEmpty())
        value = "Nothing";

    label->setText("You have selected: " + value);
}

void Widget::changeSpin()
{
    int myPrice = price->text().toInt();
    int totalNumber = myPrice * spinbox->value();

    total->setText(QString::number(totalNumber));
}

void Widget::showTime()
{
    QTime time = QTime::currentTime();

    QString text = time.toString("HH:mm:ss");

    if (time.second() % 2 == 0) {
        text[2] = ' ';
        text[5] = ' ';
    }

    lcdNumber->display(text);
}

void Widget::comboChanged()
{
    QString item=combo->currentText();
    labelResult->setText("Your account type is :"+item);
}

void Widget::changeSlider()
{
    int value1=slider->value();
    result->setText(QString ::number(value1));
}
void Widget::changeFont()
{
    QString fontName = combo->currentText();
    QFont myFont(fontName);
    label->setFont(myFont);
}

void Widget::selectDate()
{
    QString dateSelected=calender->selectedDate().toString();
    calenderLabel->setText(dateSelected);

}
