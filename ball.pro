HEADERS += ball.h
SOURCES += ball.cpp
SOURCES += vector.cpp

target.path = ball
sources.files= $$SOURCES $$HEADERS ball.pro
sources.path = .
INSTALLS += target sources
