#ifndef QT_UNIT_TEST_H
#define QT_UNIT_TEST_H

#include <QtTest>
#include "common_global.h"

class COMMONSHARED_EXPORT QtUnitTest : public QObject {
    Q_OBJECT

public:
    QtUnitTest();
    virtual ~QtUnitTest();

public slots:
    //will be called before the first test function is executed.
    void initTestCase();

    //will be called after the last test function was executed.
    void cleanupTestCase();

    //will be called before each test function is executed.
    void init();

    //will be called after every test function.
    void cleanup();

};

#endif // QT_UNIT_TEST_H
