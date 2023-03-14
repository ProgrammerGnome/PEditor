#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

QString grand_array[5];

int FUNCTION_5(QStringList array, QString mostFrequentElement, int highestFrequency) {
  QString findMostFrequentElement(const QStringList& array);
  QMap<QString, int> frequencyMap;
  for (const QString& element : array) {
      frequencyMap[element]++;
    }

  highestFrequency = 0;
  for (const QString& element : frequencyMap.keys()) {
      if (frequencyMap[element] > highestFrequency) {
          mostFrequentElement = element;
          highestFrequency = frequencyMap[element];
        }
    }

  //std::cout << "A leggyakoribb elem: " << mostFrequentElement.toStdString() << std::endl;
  grand_array[4] = mostFrequentElement;

  return 0;
}

void ranked_function_4(QStringList array_4, QStringList array_5, QString mostFrequentElement, int highestFrequency) {

  for (int i = 0; i < highestFrequency; ++i){
      qsizetype var = array_4.indexOf(mostFrequentElement);
      array_4.remove(var);
    }

  array_5 = array_4;

  FUNCTION_5(array_5, mostFrequentElement, highestFrequency);

}

int FUNCTION_4(QStringList array_4, QString mostFrequentElement, int highestFrequency) {
  QString findMostFrequentElement(const QStringList& array);
  QMap<QString, int> frequencyMap;
  for (const QString& element : array_4) {
      frequencyMap[element]++;
    }

  highestFrequency = 0;
  for (const QString& element : frequencyMap.keys()) {
      if (frequencyMap[element] > highestFrequency) {
          mostFrequentElement = element;
          highestFrequency = frequencyMap[element];
        }
    }

  //std::cout << "A leggyakoribb elem: " << mostFrequentElement.toStdString() << std::endl;
  grand_array[3] = mostFrequentElement;

  QStringList array_5;
  ranked_function_4(array_4, array_5, mostFrequentElement, highestFrequency);

  return 0;
}

void ranked_function_3(QStringList array_3, QStringList array_4, QString mostFrequentElement, int highestFrequency) {

  for (int i = 0; i < highestFrequency; ++i){
      qsizetype var = array_3.indexOf(mostFrequentElement);
      array_3.remove(var);
    }

  array_4 = array_3;

  FUNCTION_4(array_4, mostFrequentElement, highestFrequency);

}

int FUNCTION_3(QStringList array_3, QString mostFrequentElement, int highestFrequency) {
  QString findMostFrequentElement(const QStringList& array);
  QMap<QString, int> frequencyMap;
  for (const QString& element : array_3) {
      frequencyMap[element]++;
    }

  highestFrequency = 0;
  for (const QString& element : frequencyMap.keys()) {
      if (frequencyMap[element] > highestFrequency) {
          mostFrequentElement = element;
          highestFrequency = frequencyMap[element];
        }
    }

  //std::cout << "A leggyakoribb elem: " << mostFrequentElement.toStdString() << std::endl;
  grand_array[2] = mostFrequentElement;

  QStringList array_4;
  ranked_function_3(array_3, array_4, mostFrequentElement, highestFrequency);

  return 0;
}

void ranked_function_2(QStringList array_2, QStringList array_3, QString mostFrequentElement, int highestFrequency) {

  for (int i = 0; i < highestFrequency; ++i){
      qsizetype var = array_2.indexOf(mostFrequentElement);
      array_2.remove(var);
    }

  array_3 = array_2;

  FUNCTION_3(array_3, mostFrequentElement, highestFrequency);

}

int FUNCTION_2(QStringList array_2, QString mostFrequentElement, int highestFrequency) {
  QString findMostFrequentElement(const QStringList& array);
  QMap<QString, int> frequencyMap;
  for (const QString& element : array_2) {
      frequencyMap[element]++;
    }

  highestFrequency = 0;
  for (const QString& element : frequencyMap.keys()) {
      if (frequencyMap[element] > highestFrequency) {
          mostFrequentElement = element;
          highestFrequency = frequencyMap[element];
        }
    }

  //std::cout << "A leggyakoribb elem: " << mostFrequentElement.toStdString() << std::endl;
  grand_array[1] = mostFrequentElement;

  QStringList array_3;
  ranked_function_2(array_2, array_3, mostFrequentElement, highestFrequency);

  return 0;
}

void ranked_function(QStringList array, QStringList array_2, QString mostFrequentElement, int highestFrequency) {

  for (int i = 0; i < highestFrequency; ++i){
      qsizetype var = array.indexOf(mostFrequentElement);
      array.remove(var);
    }

  array_2 = array;

  FUNCTION_2(array_2, mostFrequentElement, highestFrequency);

}

int wordcount;
int FUNCTION(QStringList array, QString mostFrequentElement, int highestFrequency) {

  wordcount = array.length();

  QString findMostFrequentElement(const QStringList& array);
  QMap<QString, int> frequencyMap;
  for (const QString& element : array) {
      frequencyMap[element]++;
    }

  highestFrequency = 0;
  for (const QString& element : frequencyMap.keys()) {
      if (frequencyMap[element] > highestFrequency) {
          mostFrequentElement = element;
          highestFrequency = frequencyMap[element];
        }
    }

  //std::cout << "A leggyakoribb elem: " << mostFrequentElement.toStdString() << std::endl;
  grand_array[0] = mostFrequentElement;

  QStringList array_2;
  ranked_function(array, array_2, mostFrequentElement, highestFrequency);

  return 0;
}

QString text;
int all_counter;
int h_counter;
void MainWindow::on_pushButton_clicked()
{
  all_counter=0;
  h_counter=0;

  QString my_a("á");
  QString my_o("ó");
  QString my_u("ú");

  QString my_e("é");
  QString my_i("í");
  QString my_o_1("ö");
  QString my_o_2("ő");
  QString my_u_1("ü");
  QString my_u_2("ű");

  text = ui->textEdit->toPlainText();

  QStringList szavak = text.split(" ");
  QStringList array;
  QString mostFrequentElement;
  int highestFrequency = 0;

  for (int i = 0; i < szavak.size(); ++i) {
      //std::cout << szavak.at(i).toStdString() << std::endl;
      array.push_back(szavak[i]);
    }
  /*
  for (int i = 0; i < array.size(); ++i) {
      std::cout << array.at(i).toStdString() <<std::endl;
    }
  */

  FUNCTION(array, mostFrequentElement, highestFrequency);

  for (int i = 0; i < text.length(); ++i) {
      //printf("%d\n", i);

      if(text.at(i) == 'a'){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == my_a){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == 'o'){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == my_o){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == 'u'){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == my_u){
          all_counter++;
          h_counter++;
        }
      if(text.at(i) == 'e' || text.at(i) == my_e || text.at(i) == 'i' || text.at(i) == my_i || text.at(i) == my_o_1 || text.at(i) == my_o_2 || text.at(i) == my_u_1 || text.at(i) == my_u_2){
          all_counter++;
        }

      ui->lineEdit->setText(QVariant(i+1).toString());
      ui->lineEdit_2->setText(QVariant(all_counter).toString());
      ui->lineEdit_3->setText(QVariant(h_counter).toString());

      ui->lineEdit_5->setText(QVariant(all_counter-h_counter).toString());
  }
  ui->textEdit_2->setText(grand_array[0]+'\n'+grand_array[1]+'\n'+grand_array[2]+'\n'+grand_array[3]+'\n'+grand_array[4]);
  ui->lineEdit_4->setText(QVariant(wordcount).toString());
}

void MainWindow::on_actionF_jl_megnyit_sa_2_triggered()
{
  QFileDialog dialog;
  dialog.setFileMode(QFileDialog::ExistingFile);
  dialog.setWindowTitle("Szöveges dokumentum betöltése");

  if (dialog.exec()) {
      QString filename = dialog.selectedFiles().first();

      QFile file(filename);
      if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
          QTextStream in(&file);
          QString text = in.readAll();

          ui->textEdit->setText(text);
          ui->textEdit->setReadOnly(true);

        } else {
          qWarning() << "Nem sikerült megnyitni a fájlt: " << filename;
        }
    }
}
