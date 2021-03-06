# Makefile for creating the libjbluez.so library, which is used by the Java
# code via the JNI.

# Copyright (c) 2002 The Appliance Studio Limited.
# Written by Edward Kay <ed.kay@appliancestudio.com>
# http://www.appliancestudio.com
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License version 2 as published by the
# Free Software Foundation.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS.
#
# IN NO EVENT SHALL THE COPYRIGHT HOLDER(S) AND AUTHOR(S) BE LIABLE FOR ANY
# CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
# OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
# CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#
# ALL LIABILITY, INCLUDING LIABILITY FOR INFRINGEMENT OF ANY PATENTS,
# COPYRIGHTS, TRADEMARKS OR OTHER RIGHTS, RELATING TO USE OF THIS SOFTWARE IS
# DISCLAIMED.
#
# $Id:$

# C Compiler to use
CC             = gcc

# Location of the JDK, since we require files in the java/include directory.
JDK_HOME       = /usr/lib/java

# Platform. This is the name of the folder in the java/include directory.
JDK_PLATFORM   = linux

# Flags for the C compiler. These add the JDK header files to the include path.
CFLAGS         = -I $(JDK_HOME)/include -I $(JDK_HOME)/include/$(JDK_PLATFORM)

# Linker flags. Ensure you have installed the BlueZ libraries (bluez-libs).
LDFLAGS        = -shared -lbluetooth

# Directory of the jbluez binaries; namely where jbluez.jar is and where
# libjbluez.so should be installed to.
BIN_DIR        = ../../bin

############

# Default: make the library.
all: libjbluez.so

# Remove the header file (this should always be regenerated before
# compiling the library to ensure its up-to-date.
clean:
	-rm com_appliancestudio_jbluez_BlueZ.h

# JNI generated header file - com_appliancestudio_jbluez_BlueZ.h
com_appliancestudio_jbluez_BlueZ.h: clean $(BIN_DIR)/jbluez.jar
	javah -jni -classpath $(BIN_DIR)/jbluez.jar com.appliancestudio.jbluez.BlueZ

# Native language (C) library - libjbluez.so
libjbluez.so: BlueZ.c com_appliancestudio_jbluez_BlueZ.h
	$(CC) $(CFLAGS) $(LDFLAGS) BlueZ.c -o $(BIN_DIR)/libjbluez.so
