/********************************************************************************
** Form generated from reading UI file 'netgenmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETGENMAINWINDOW_H
#define UI_NETGENMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetGenMainWindow
{
public:
    QAction *actionTEST;
    QAction *actionTEST2;
    QAction *actionTEST3;
    QAction *actionTEST1;
    QAction *actionTEST2_2;
    QAction *actionTEST3_2;
    QAction *actionTEST1_2;
    QAction *actionTEST2_3;
    QAction *actionTEST3_3;
    QAction *actionHELP;
    QAction *actionhelp;
    QAction *actionpleh;
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QToolBox *toolBox;
    QWidget *toolBoxPage1;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *page;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetGenMainWindow)
    {
        if (NetGenMainWindow->objectName().isEmpty())
            NetGenMainWindow->setObjectName(QString::fromUtf8("NetGenMainWindow"));
        NetGenMainWindow->resize(949, 746);
        actionTEST = new QAction(NetGenMainWindow);
        actionTEST->setObjectName(QString::fromUtf8("actionTEST"));
        actionTEST->setCheckable(false);
        actionTEST->setShortcutContext(Qt::ApplicationShortcut);
        actionTEST->setPriority(QAction::NormalPriority);
        actionTEST2 = new QAction(NetGenMainWindow);
        actionTEST2->setObjectName(QString::fromUtf8("actionTEST2"));
        actionTEST3 = new QAction(NetGenMainWindow);
        actionTEST3->setObjectName(QString::fromUtf8("actionTEST3"));
        actionTEST3->setShortcutContext(Qt::WindowShortcut);
        actionTEST3->setMenuRole(QAction::QuitRole);
        actionTEST1 = new QAction(NetGenMainWindow);
        actionTEST1->setObjectName(QString::fromUtf8("actionTEST1"));
        actionTEST2_2 = new QAction(NetGenMainWindow);
        actionTEST2_2->setObjectName(QString::fromUtf8("actionTEST2_2"));
        actionTEST3_2 = new QAction(NetGenMainWindow);
        actionTEST3_2->setObjectName(QString::fromUtf8("actionTEST3_2"));
        actionTEST1_2 = new QAction(NetGenMainWindow);
        actionTEST1_2->setObjectName(QString::fromUtf8("actionTEST1_2"));
        actionTEST2_3 = new QAction(NetGenMainWindow);
        actionTEST2_3->setObjectName(QString::fromUtf8("actionTEST2_3"));
        actionTEST3_3 = new QAction(NetGenMainWindow);
        actionTEST3_3->setObjectName(QString::fromUtf8("actionTEST3_3"));
        actionHELP = new QAction(NetGenMainWindow);
        actionHELP->setObjectName(QString::fromUtf8("actionHELP"));
        actionhelp = new QAction(NetGenMainWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        actionpleh = new QAction(NetGenMainWindow);
        actionpleh->setObjectName(QString::fromUtf8("actionpleh"));
        centralwidget = new QWidget(NetGenMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 680, 951, 20));
        progressBar->setValue(24);
        progressBar->setInvertedAppearance(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 330, 290, 351));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 291, 301));
        toolBox->setMouseTracking(true);
        toolBox->setFrameShape(QFrame::Box);
        toolBoxPage1 = new QWidget();
        toolBoxPage1->setObjectName(QString::fromUtf8("toolBoxPage1"));
        toolBoxPage1->setGeometry(QRect(0, 0, 289, 243));
        label = new QLabel(toolBoxPage1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 31, 16));
        spinBox = new QSpinBox(toolBoxPage1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(50, 0, 101, 16));
        spinBox->setWrapping(false);
        spinBox->setFrame(true);
        spinBox->setMinimum(1);
        spinBox->setMaximum(200000000);
        spinBox->setValue(1);
        toolBox->addItem(toolBoxPage1, QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 289, 243));
        toolBox->addItem(page, QString::fromUtf8("Page"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 300, 291, 23));
        pushButton->setMouseTracking(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(290, 0, 657, 680));
        graphicsView->setMouseTracking(true);
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        graphicsView->setBackgroundBrush(brush);
        graphicsView->setForegroundBrush(brush);
        graphicsView->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        NetGenMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetGenMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 949, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuFile->setTearOffEnabled(false);
        menuFile->setSeparatorsCollapsible(false);
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        NetGenMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NetGenMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NetGenMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionTEST);
        menuFile->addAction(actionTEST2);
        menuFile->addAction(actionTEST3);
        menuEdit->addAction(actionTEST1);
        menuEdit->addAction(actionTEST2_2);
        menuEdit->addAction(actionTEST3_2);
        menuView->addAction(actionTEST1_2);
        menuView->addAction(actionTEST2_3);
        menuView->addAction(actionTEST3_3);
        menuHelp->addAction(actionHELP);
        menuHelp->addAction(actionhelp);
        menuHelp->addAction(actionpleh);

        retranslateUi(NetGenMainWindow);

        tabWidget->setCurrentIndex(1);
        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(NetGenMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NetGenMainWindow)
    {
        NetGenMainWindow->setWindowTitle(QCoreApplication::translate("NetGenMainWindow", "Net-Gen", nullptr));
        actionTEST->setText(QCoreApplication::translate("NetGenMainWindow", "TEST", nullptr));
#if QT_CONFIG(shortcut)
        actionTEST->setShortcut(QCoreApplication::translate("NetGenMainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTEST2->setText(QCoreApplication::translate("NetGenMainWindow", "TEST2", nullptr));
        actionTEST3->setText(QCoreApplication::translate("NetGenMainWindow", "TEST3", nullptr));
#if QT_CONFIG(shortcut)
        actionTEST3->setShortcut(QCoreApplication::translate("NetGenMainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTEST1->setText(QCoreApplication::translate("NetGenMainWindow", "TEST1", nullptr));
        actionTEST2_2->setText(QCoreApplication::translate("NetGenMainWindow", "TEST2", nullptr));
        actionTEST3_2->setText(QCoreApplication::translate("NetGenMainWindow", "TEST3", nullptr));
        actionTEST1_2->setText(QCoreApplication::translate("NetGenMainWindow", "TEST1", nullptr));
        actionTEST2_3->setText(QCoreApplication::translate("NetGenMainWindow", "TEST2", nullptr));
        actionTEST3_3->setText(QCoreApplication::translate("NetGenMainWindow", "TEST3", nullptr));
        actionHELP->setText(QCoreApplication::translate("NetGenMainWindow", "HELP", nullptr));
        actionhelp->setText(QCoreApplication::translate("NetGenMainWindow", "help", nullptr));
        actionpleh->setText(QCoreApplication::translate("NetGenMainWindow", "pleh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NetGenMainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("NetGenMainWindow", "Tab 2", nullptr));
        label->setText(QCoreApplication::translate("NetGenMainWindow", "Users:", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPage1), QString());
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("NetGenMainWindow", "Page", nullptr));
        pushButton->setText(QCoreApplication::translate("NetGenMainWindow", "Generate Diagram", nullptr));
        menuFile->setTitle(QCoreApplication::translate("NetGenMainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("NetGenMainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("NetGenMainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("NetGenMainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetGenMainWindow: public Ui_NetGenMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETGENMAINWINDOW_H
