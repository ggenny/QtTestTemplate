#ifndef GO_TEST_MAIN_H
#define GO_TEST_MAIN_H

#include <gtest/gtest.h>
#include <QCoreApplication>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
#include <QDebug>

int main(int argc, char *argv[], char *envp[]) {

    for (char **env = envp; *env != 0; env++) {
        std::cout << *env << std::endl;
    }

    QCoreApplication a(argc, argv);
    ::testing::InitGoogleTest(&argc, argv);

    int ret = RUN_ALL_TESTS();

    return ret;

}

#endif // GO_TEST_MAIN_H
