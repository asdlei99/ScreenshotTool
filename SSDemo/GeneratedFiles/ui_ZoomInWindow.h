/********************************************************************************
** Form generated from reading UI file 'ZoomInWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOMINWINDOW_H
#define UI_ZOOMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZoomInWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *m_zoomInWidget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *m_pos;
    QLabel *m_color;

    void setupUi(QWidget *ZoomInWindow)
    {
        if (ZoomInWindow->objectName().isEmpty())
            ZoomInWindow->setObjectName(QStringLiteral("ZoomInWindow"));
        ZoomInWindow->resize(165, 163);
        verticalLayout_2 = new QVBoxLayout(ZoomInWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_zoomInWidget = new QWidget(ZoomInWindow);
        m_zoomInWidget->setObjectName(QStringLiteral("m_zoomInWidget"));
        m_zoomInWidget->setMinimumSize(QSize(165, 115));
        m_zoomInWidget->setMaximumSize(QSize(165, 115));

        verticalLayout_2->addWidget(m_zoomInWidget);

        widget_2 = new QWidget(ZoomInWindow);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("QWidget {\n"
"	background-color: #1f1f1f;\n"
"}"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_pos = new QLabel(widget_2);
        m_pos->setObjectName(QStringLiteral("m_pos"));
        m_pos->setStyleSheet(QLatin1String("QLabel {\n"
"	color: #fff;\n"
"}"));

        verticalLayout->addWidget(m_pos);

        m_color = new QLabel(widget_2);
        m_color->setObjectName(QStringLiteral("m_color"));
        m_color->setStyleSheet(QLatin1String("QLabel {\n"
"	color: #fff;\n"
"}"));

        verticalLayout->addWidget(m_color);


        verticalLayout_2->addWidget(widget_2);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(ZoomInWindow);

        QMetaObject::connectSlotsByName(ZoomInWindow);
    } // setupUi

    void retranslateUi(QWidget *ZoomInWindow)
    {
        ZoomInWindow->setWindowTitle(QApplication::translate("ZoomInWindow", "Form", Q_NULLPTR));
        m_pos->setText(QApplication::translate("ZoomInWindow", "TextLabel", Q_NULLPTR));
        m_color->setText(QApplication::translate("ZoomInWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZoomInWindow: public Ui_ZoomInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOMINWINDOW_H
