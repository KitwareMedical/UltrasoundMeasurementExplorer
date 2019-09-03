# Ultrasound Measurement Explorer 


# Requirements and Build

Build each in "Release" configuration and in the following order:
1. Qt5 (Yup, 5)
   + Use VS 2013 or 2015 and QT 5.8 make sure you use the QT installer that matches your VS version (otherwise you'll get a linker error).
     + with VS 2012 QT complains about c++11 compliancy.
     + VS 2017 complains about a QT bug thats fixed in 5.9 but with 5.9 VTK complains.   
2. ITK
   + https://github.com/Kitware/ITK
   + ITKUltrasound module https://github.com/KitwareMedical/ITKUltrasound
3. IntersonArraySDK
   + From Interson (https://interson.com/)
   + To run the probe the Interson drivers need to be installed using SeeMoreArraySetup.exe (from the IntersonArraySDK)
4. IntersonArraySDKCxx (Must be INSTALLED - cannot use build dir)
   + https://github.com/KitwareMedical/IntersonArraySDKCxx
5. For running from commandline all dll's used also need ito be in the PATH. 
   The CMakefiles.txt contains a package target that will collect all dlls and create a zip file (See creating a binary package).


## Creating a Binary Package

The CMakelists.txt conatins instructions for cpack to create a zip file that
includes all required dlls and the exectubale.

Running the target "package" (i.e. ninja package if you used ninja as your cmake generator) 
will create that zip file. 