include_HEADERS = include/sorts.h

lib_LIBRARIES = libsorts.a
libsorts_a_CPPFLAGS = -I$(top_srcdir)/include
libsorts_a_SOURCES = src/bubble.c \
    src/insertion.c \
    src/selection.c \
    src/exchange.c

noinst_PROGRAMS = tests/driver
tests_driver_SOURCES = tests/driver.c \
    tests/bubble.sh \
    tests/insertion.sh \
    tests/selection.sh \
    tests/exchange.sh
tests_driver_CPPFLAGS = -I$(top_srcdir)/include
tests_driver_LDADD = libsorts.a

AM_TESTS_ENVIRONMENT = DRIVER=tests/driver; export DRIVER;
TESTS = tests/bubble.sh \
    tests/insertion.sh \
    tests/selection.sh \
    tests/exchange.sh