# TelegramQML
Telegram API tools for QtQML and Qml, based on Cutegram-Core and libqtelegram.
It's free and released under the GPLv3 license.

### How to Compile
#### Install dependencies

Install gcc, g++, openssl, git, Qt5Core, Qt5DBus, Qt5Gui, Qt5Multimedia, Qt5MultimediaQuick_p, Qt5Network, Qt5PrintSupport, Qt5Qml, Qt5Quick, Qt5Sql, Qt5Svg, and Qt5Widgets.
on Ubuntu:

    sudo apt-get install g++ gcc git qtbase5-dev libqt5sql5-sqlite libqt5multimediaquick-p5 libqt5multimedia5-plugins libqt5multimedia5 libqt5qml5 libqt5qml-graphicaleffects libqt5qml-quickcontrols qtdeclarative5-dev libqt5quick5 

on Fedora (tested on Fedora 20):

    yum install qt5-qtbase qt5-qtbase-devel qt5-qtdeclarative qt5-qtquick1 qt5-qtquick1-devel kde-plasma-applicationname kde-plasma-nm qt5-qtdeclarative-devel qt5-qtdeclarative-static qt5-qtgraphicaleffects qt5-qtquickcontrols openssl-devel libappindicator-devel

For other distributions search for the corresponding packages.

#### Get libqtelegram

First, you should build and install libqtelegram.

    git clone https://github.com/Aseman-Land/libqtelegram-aseman-edition.git
    
And:

    cd libqtelegram-aseman-edition
    mkdir build && cd build
    qmake -r PREFIX=/usr  ..
    
And then start building:

    make
    sudo make install

#### Get source code from git repository

Get cutegram codes using this command:

    git clone https://github.com/Aseman-Land/TelegramQML.git

#### Start building

Switch to source directory

    cd TelegramQML

##### Ubuntu

First, Please create build directory.

    mkdir build && cd build
    
To build TelegramQml in the plugin mode run:
    
    qmake -r .. 
    
and to build in the library mode run:

    qmake -r .. PREFIX=/usr BUILD_MODE+=lib
    
then start build process:
    
    make
    make install

You can use command below after building to clean build directory on the each step.

    make clean
