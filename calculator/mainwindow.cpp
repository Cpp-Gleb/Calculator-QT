#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _secret = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


Parser::Parser(const std::string& input) : input(input), pos(0) {}

long double Parser::parse() {
    long double result = parseExpression();
    if (pos < input.size()) {
        throw std::runtime_error("Unexpected character at the end of expression");
    }
    return result;
}

long double Parser::parseExpression() {
    long double result = parseTerm();
    while (pos < input.size()) {
        if (input[pos] == '+') {
            ++pos;
            result += parseTerm();
        } else if (input[pos] == '-') {
            ++pos;
            result -= parseTerm();
        } else {
            break;
        }
    }
    return result;
}

long double Parser::parseTerm() {
    long double result = parseFactor();
    while (pos < input.size()) {
        if (input[pos] == '*') {
            ++pos;
            result *= parseFactor();
        } else if (input[pos] == '/') {
            ++pos;
            long double divisor = parseFactor();
            if (divisor == 0) {
                throw std::runtime_error("Division by zero");
            }
            result /= divisor;
        } else if (input[pos] == '%') {
            ++pos;
            long double divisor = parseFactor();
            if (divisor == 0) {
                throw std::runtime_error("Division by zero");
            }
            result = std::fmod(result, divisor);
        } else {
            break;
        }
    }
    return result;
}

long double Parser::parseFactor() {
    if (pos < input.size() && input[pos] == '(') {
        ++pos;
        long double result = parseExpression();
        if (pos >= input.size() || input[pos] != ')') {
            throw std::runtime_error("Mismatched parentheses");
        }
        ++pos;
        return result;
    } else {
        return parseNumber();
    }
}

long double Parser::parseNumber() {
    size_t startPos = pos;
    while (pos < input.size() && (isdigit(input[pos]) || input[pos] == '.' || input[pos] == 'e' || input[pos] == 'E' || input[pos] == '+' || input[pos] == '-')) {
        if (input[pos] == '+' || input[pos] == '-') {
            if (pos > startPos) {
                break; // Stop if + or - is in the middle of the number
            }
        }
        ++pos;
    }
    std::string numberStr = input.substr(startPos, pos - startPos);
    std::istringstream numberStream(numberStr);
    long double result;
    numberStream >> result;
    if (numberStream.fail()) {
        throw std::runtime_error("Invalid number");
    }
    return result;
}

//nums
void MainWindow::on_one_clicked()
{
    _secret++;
    if(_expression.length()<25){
        _expression.append('1');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_two_clicked()
{
    _secret++;
    if(_expression.length()<25){
        _expression.append('2');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_three_clicked()
{
    _secret++;
    if(_expression.length()<25){
        _expression.append('3');
        ui->ExpressionTable->setText(_expression);
    }
    if(timerIn.elapsed() < 5000){
        if(_secret == 3){
            ui->ExpressionTable->setText("All Right");
            QMessageBox::about(0,"Secret menu", "There could be yours information");
        }
        else{
            ui->ExpressionTable->setText("Slowly");
        }
    }
}

void MainWindow::on_four_clicked()
{
    if(_expression.length()<25){
        _expression.append('4');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_five_clicked()
{
    if(_expression.length()<25){
        _expression.append('5');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_six_clicked()
{
    if(_expression.length()<25){
        _expression.append('6');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_seven_clicked()
{
    if(_expression.length()<25){
      _expression.append('7');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_eight_clicked()
{
    if(_expression.length()<25){
        _expression.append('8');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_nine_clicked()
{
    if(_expression.length()<25){
        _expression.append('9');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_zero_clicked()
{
    if(_expression.length()<25){
        _expression.append('0');
        ui->ExpressionTable->setText(_expression);
    }
}

//operations
void MainWindow::on_brackets_clicked()
{
    if(_expression.length()<25){
        if (_expression[_expression.size()-1] != '('){
            if(_brak == 0){
    //            if(48 <= _expression[_expression.size()-1].toLatin1()<= 57){}
                _brak = true;
                _expression.append('(');
                ui->ExpressionTable->setText(_expression);
            }
            else{
                _brak = false;
                _expression.append(')');
                ui->ExpressionTable->setText(_expression);
            }
        }
    }
}

void MainWindow::on_unary_clicked()
{
    if(_expression.length()<25){
        _expression.insert(0,"-(");
        _expression.push_back(')');
        ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_procent_clicked()
{
    if(_expression.length()<25){
            _expression.push_back('%');
            ui->ExpressionTable->setText(_expression);
    }

}

void MainWindow::on_divide_clicked()
{
    if(_expression.length()<25){
            _expression.push_back('/');
            ui->ExpressionTable->setText(_expression);
    }
}

void MainWindow::on_multiply_clicked()
{
    if(_expression.length()<25){
            _expression.push_back('*');
            ui->ExpressionTable->setText(_expression);

    }
}

void MainWindow::on_subtract_clicked()
{
    if(_expression.length()<25){
            _expression.push_back('-');
            ui->ExpressionTable->setText(_expression);

    }
}

void MainWindow::on_add_clicked()
{
    if(_expression.length()<25){
            _expression.push_back('+');
            ui->ExpressionTable->setText(_expression);

    }
}

void MainWindow::on_equal_clicked()
{
    std::string parsexp = _expression.toUtf8().constData();
    Parser parser(parsexp);
    try {
            long double result = parser.parse();
            QString res = QString::number(result,'g',6);
            ui->miniExpression_2->setText(res);
        } catch (const std::exception& e) {

            ui->miniExpression_2->setText("Error");
        }
}

void MainWindow::on_point_clicked()
{
    if(_expression.length()<25){
            _expression.append('.');
            ui->ExpressionTable->setText(_expression);

    }
}

void MainWindow::on_clear_clicked()
{
    _brak = false;
    _expression = "";
    ui->ExpressionTable->setText(_expression);
    _miniExpression = "";
    ui->miniExpression_2->setText(_miniExpression);
}

//spesial func
void MainWindow::on_equal_pressed()
{
    timerPress.start();
}


void MainWindow::on_equal_released()
{
    if (4000 <= timerPress.elapsed()){
        timerIn.start();
        ui->ExpressionTable->setText("Put combination 123");
        _secret = 0;
    }
}

