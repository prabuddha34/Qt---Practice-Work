#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCheckBox>
#include<QLabel>
#include<QLineEdit>
#include<QSpinBox>
#include<QLCDNumber>
#include<QComboBox>
#include<QSlider>
#include<QListWidget>
#include<QTextEdit>
#include<QFontComboBox>
#include<QCalendarWidget>
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void checkedByIt();
    void changeSpin();
    void showTime();
    void comboChanged();
    void changeSlider();
    void changeFont();
    void selectDate();

private:
    QLabel *label,*labelResult;
    QCheckBox *box1;
    QCheckBox *box2;
    QLineEdit *price,*total;
    QSpinBox *spinbox;
    QLCDNumber *lcdNumber;
    QComboBox *combo;
    QSlider  *slider;
    QLabel *result;
    QFontComboBox *FontcomboBox;
    QTextEdit *textEditor;
    QCalendarWidget *calender;
    QLabel *calenderLabel;

};

#endif // WIDGET_H
