#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QElapsedTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QString _expression;
    QString _miniExpression;
    bool _brak;
    int _secret;
    QElapsedTimer timerPress;
    QElapsedTimer timerIn;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_brackets_clicked();

    void on_unary_clicked();

    void on_procent_clicked();

    void on_divide_clicked();

    void on_multiply_clicked();

    void on_subtract_clicked();

    void on_add_clicked();

    void on_equal_clicked();

    void on_point_clicked();

    void on_clear_clicked();

    void on_equal_pressed();

    void on_equal_released();

private:
    Ui::MainWindow *ui;
};

class Parser {
private:
    std::string input;
    size_t pos;
public:
    Parser(const std::string& input);
    long double parseExpression();
    long double parseTerm();
    long double parseFactor();
    long double parseNumber();
    long double parse();
};

#endif // MAINWINDOW_H
