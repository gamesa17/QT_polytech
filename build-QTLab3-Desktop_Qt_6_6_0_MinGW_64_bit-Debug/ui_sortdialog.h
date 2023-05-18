/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout1;
    QLabel *primaryColumnLabel;
    QComboBox *primaryColumnCombo;
    QSpacerItem *spacerItem;
    QLabel *primaryOrderLabel;
    QComboBox *primaryOrderCombo;
    QVBoxLayout *vboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;
    QPushButton *moreButton;
    QSpacerItem *spacerItem2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout2;
    QLabel *secondaryColumnLabel;
    QComboBox *secondaryColumnCombo;
    QSpacerItem *spacerItem3;
    QLabel *secondaryOrderLabel;
    QComboBox *secondaryOrderCombo;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout3;
    QLabel *tertiaryColumnLabel;
    QComboBox *tertiaryColumnCombo;
    QSpacerItem *spacerItem4;
    QLabel *tertiaryOrderLabel;
    QComboBox *tertiaryOrderCombo;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName("SortDialog");
        SortDialog->resize(369, 398);
        gridLayout = new QGridLayout(SortDialog);
        gridLayout->setObjectName("gridLayout");
        primaryGroupBox = new QGroupBox(SortDialog);
        primaryGroupBox->setObjectName("primaryGroupBox");
        gridLayout1 = new QGridLayout(primaryGroupBox);
        gridLayout1->setObjectName("gridLayout1");
        primaryColumnLabel = new QLabel(primaryGroupBox);
        primaryColumnLabel->setObjectName("primaryColumnLabel");

        gridLayout1->addWidget(primaryColumnLabel, 0, 0, 1, 1);

        primaryColumnCombo = new QComboBox(primaryGroupBox);
        primaryColumnCombo->addItem(QString());
        primaryColumnCombo->setObjectName("primaryColumnCombo");

        gridLayout1->addWidget(primaryColumnCombo, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 2, 1, 1);

        primaryOrderLabel = new QLabel(primaryGroupBox);
        primaryOrderLabel->setObjectName("primaryOrderLabel");

        gridLayout1->addWidget(primaryOrderLabel, 1, 0, 1, 1);

        primaryOrderCombo = new QComboBox(primaryGroupBox);
        primaryOrderCombo->addItem(QString());
        primaryOrderCombo->addItem(QString());
        primaryOrderCombo->setObjectName("primaryOrderCombo");

        gridLayout1->addWidget(primaryOrderCombo, 1, 1, 1, 2);


        gridLayout->addWidget(primaryGroupBox, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName("vboxLayout");
        okButton = new QPushButton(SortDialog);
        okButton->setObjectName("okButton");

        vboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortDialog);
        cancelButton->setObjectName("cancelButton");

        vboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName("moreButton");
        moreButton->setCheckable(true);

        vboxLayout->addWidget(moreButton);


        gridLayout->addLayout(vboxLayout, 0, 1, 2, 1);

        spacerItem2 = new QSpacerItem(181, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortDialog);
        secondaryGroupBox->setObjectName("secondaryGroupBox");
        gridLayout2 = new QGridLayout(secondaryGroupBox);
        gridLayout2->setObjectName("gridLayout2");
        secondaryColumnLabel = new QLabel(secondaryGroupBox);
        secondaryColumnLabel->setObjectName("secondaryColumnLabel");

        gridLayout2->addWidget(secondaryColumnLabel, 0, 0, 1, 1);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->addItem(QString());
        secondaryColumnCombo->setObjectName("secondaryColumnCombo");

        gridLayout2->addWidget(secondaryColumnCombo, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 2, 1, 1);

        secondaryOrderLabel = new QLabel(secondaryGroupBox);
        secondaryOrderLabel->setObjectName("secondaryOrderLabel");

        gridLayout2->addWidget(secondaryOrderLabel, 1, 0, 1, 1);

        secondaryOrderCombo = new QComboBox(secondaryGroupBox);
        secondaryOrderCombo->addItem(QString());
        secondaryOrderCombo->addItem(QString());
        secondaryOrderCombo->setObjectName("secondaryOrderCombo");

        gridLayout2->addWidget(secondaryOrderCombo, 1, 1, 1, 2);


        gridLayout->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortDialog);
        tertiaryGroupBox->setObjectName("tertiaryGroupBox");
        gridLayout3 = new QGridLayout(tertiaryGroupBox);
        gridLayout3->setObjectName("gridLayout3");
        tertiaryColumnLabel = new QLabel(tertiaryGroupBox);
        tertiaryColumnLabel->setObjectName("tertiaryColumnLabel");

        gridLayout3->addWidget(tertiaryColumnLabel, 0, 0, 1, 1);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->addItem(QString());
        tertiaryColumnCombo->setObjectName("tertiaryColumnCombo");

        gridLayout3->addWidget(tertiaryColumnCombo, 0, 1, 1, 1);

        spacerItem4 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem4, 0, 2, 1, 1);

        tertiaryOrderLabel = new QLabel(tertiaryGroupBox);
        tertiaryOrderLabel->setObjectName("tertiaryOrderLabel");

        gridLayout3->addWidget(tertiaryOrderLabel, 1, 0, 1, 1);

        tertiaryOrderCombo = new QComboBox(tertiaryGroupBox);
        tertiaryOrderCombo->addItem(QString());
        tertiaryOrderCombo->addItem(QString());
        tertiaryOrderCombo->setObjectName("tertiaryOrderCombo");

        gridLayout3->addWidget(tertiaryOrderCombo, 1, 1, 1, 2);


        gridLayout->addWidget(tertiaryGroupBox, 3, 0, 1, 1);

        QWidget::setTabOrder(primaryColumnCombo, primaryOrderCombo);
        QWidget::setTabOrder(primaryOrderCombo, secondaryColumnCombo);
        QWidget::setTabOrder(secondaryColumnCombo, secondaryOrderCombo);
        QWidget::setTabOrder(secondaryOrderCombo, tertiaryColumnCombo);
        QWidget::setTabOrder(tertiaryColumnCombo, tertiaryOrderCombo);
        QWidget::setTabOrder(tertiaryOrderCombo, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortDialog);
        QObject::connect(moreButton, &QPushButton::toggled, secondaryGroupBox, &QGroupBox::setVisible);
        QObject::connect(moreButton, &QPushButton::toggled, tertiaryGroupBox, &QGroupBox::setVisible);
        QObject::connect(okButton, &QPushButton::clicked, SortDialog, qOverload<>(&QDialog::accept));
        QObject::connect(cancelButton, &QPushButton::clicked, SortDialog, qOverload<>(&QDialog::reject));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QCoreApplication::translate("SortDialog", "Sort", nullptr));
        primaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Primary Key", nullptr));
        primaryColumnLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Column:</p></body></html>", nullptr));
        primaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        primaryOrderLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Order:</p></body></html>", nullptr));
        primaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        primaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

        okButton->setText(QCoreApplication::translate("SortDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("SortDialog", "Cancel", nullptr));
        moreButton->setText(QCoreApplication::translate("SortDialog", "&More", nullptr));
        secondaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Secondary Key", nullptr));
        secondaryColumnLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Column:</p></body></html>", nullptr));
        secondaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        secondaryOrderLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Order:</p></body></html>", nullptr));
        secondaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        secondaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

        tertiaryGroupBox->setTitle(QCoreApplication::translate("SortDialog", "&Tertiary Key", nullptr));
        tertiaryColumnLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Column:</p></body></html>", nullptr));
        tertiaryColumnCombo->setItemText(0, QCoreApplication::translate("SortDialog", "None", nullptr));

        tertiaryOrderLabel->setText(QCoreApplication::translate("SortDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Order:</p></body></html>", nullptr));
        tertiaryOrderCombo->setItemText(0, QCoreApplication::translate("SortDialog", "Ascending", nullptr));
        tertiaryOrderCombo->setItemText(1, QCoreApplication::translate("SortDialog", "Descending", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
