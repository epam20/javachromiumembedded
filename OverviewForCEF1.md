**This Wiki page is obsolete and no longer maintained. Visit the new JCEF project page at https://bitbucket.org/chromiumembedded/java-cef/**

## Introduction ##

This project provides a Java wrapper implementation for the Chromium Embedded Framework (CEF). Initial development was sponsored by Lime Wire, LLC.

The available source code demonstrates a working but incomplete implementation for Windows. Edit "run.bat" to properly set the "JDK\_BIN" path for your system and then execute to see the demo application. The source code also includes the beginnings of the Mac OS X implementation. See the "Work Remaining" section below for details on what still needs to be completed.

## Development ##

The Eclipse development tool is recommended for building the Java source code. Begin by importing the project from the "java" directory into Eclipse. To run the application on Windows right click on the "java-cef-windows.launch" file and choose the "Run As" option.

Visual Studio 2008 or Xcode 3 is required for building the native source code. Project files are available in the "native/ide" directory.

Native code can be debugged using the native project and debugger. In Visual Studio configure the "Debugging" settings to specify the Java executable, path and command line values demonstrated in the "run.bat" file. In Xcode 3 create a new external executable target that (a) points to the java executable, (b) specifies the same path arguments as on Windows in addition to the "-d32" argument and (c) sets the "DYLD\_LIBRARY\_PATH" environment variable.

Building and running the Mac OS X implementation with the current source code requires additional work. Start by building the CEF project from source code to generate libcef.dylib and libcef\_dll\_wrapper.a files. Copy the debug and release builds of these files to the "native/cef\_binary/lib/DebugOSX" and "native/cef\_binary/lib/ReleaseOSX" directories respectively. Also copy the release build of libcef.dylib to the "java/lib/native/osx" directory. The libCefWrapper.jnilib library can then be built using the current source code. Edit the initialize() method in "org/limewire/cef/CefContext.java" to load the "cef" library on Mac OS X:

```
public static final boolean initialize(String cachePath) {
   try {
      if(System.getProperty("os.name").equals("Mac OS X")) {
         System.loadLibrary("cef");
      } else {
         System.loadLibrary("icudt42");
         System.loadLibrary("libcef");
      }
      System.loadLibrary("CefWrapper");
      return N_Initialize(System.getProperty("sun.boot.library.path"), cachePath);
   } catch (UnsatisfiedLinkError err) {
      err.printStackTrace();
   }
   return false;
}
```

To run the Mac OS X application in Eclipse right click on the "java-cef-osx.launch" file and choose the "Run As" option.

## Work Remaining ##

The below items need to be completed to make the Java wrapper fully functional on all platforms.

  * Flesh out the rest of the Java API. The "make\_all\_jni\_headers.bat" script will generate the native header files from the Java class files. The existing source code demonstrates the recommended design pattern.

  * Create a separate Java package for the test application classes that begin with Main. An appropriate package name would be org.limewire.cef.test.

  * Complete the initial implementation for Mac OS X. There are currently problems with the CEF message loop not running. Potential solutions are (1) replace the use of CFRunLoop in libcef/cef\_process\_ui\_thread\_mac.mm with something else that works with the Java AWT loop, or (2) expose the CefDoMessageLoopWork() function and call it from inside the Java application. Additional testing and debugging will be required to determine the correct solution.