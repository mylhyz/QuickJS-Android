# Sets the minimum version of CMake required to build your native library.
# This ensures that a certain set of CMake features is available to
# your build.

cmake_minimum_required(VERSION 3.4.1)

# Specifies a library name, specifies whether the library is STATIC or
# SHARED, and provides relative paths to the source code. You can
# define multiple libraries by adding multiple add_library() commands,
# and CMake builds them for you. When you build your app, Gradle
# automatically packages shared libraries with your APK.

add_library( # Specifies the name of the library.
             quickjs_android

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
        src/main/cpp/quickjs_jni.cpp

             src/main/cpp/libunicode.h
             src/main/cpp/libunicode.c
             src/main/cpp/libregexp.h
             src/main/cpp/libregexp.c
             src/main/cpp/cutils.h
             src/main/cpp/cutils.c
             src/main/cpp/quickjs.h
             src/main/cpp/quickjs.c
             src/main/cpp/quickjs-libc.h
             src/main/cpp/quickjs-libc.c
        )