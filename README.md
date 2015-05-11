# Airway Segmenter

Airway Segmenter is a small executable aimed for segmenting the airway
of a CT image.  It is built to be used within Slicer but can also be
used as a stand-alone command-line executable.

## Dependencies

### Required

* [CMake](http://www.cmake.org/cmake/resources/software.html)
* [ITK 4.7.1](http://www.itk.org/ITK/resources/software.html)
* [Slicer Execution Model](https://github.com/Slicer/SlicerExecutionModel)

### Options

* [Slicer 4.1.0](http://www.slicer.org/)

## Build options

### ITK necessary build options

ITK must be built with at least the following options:
Module_ITKReview = True
Module_ITKVtkGlue = True #For ITK/VTK compatibility
(cf. http://www.itk.org/Wiki/ITK/FAQ#Do_I_need_VTK_to_build_ITK_.3F)

### VTK necessary build options

VTK must be built with at least the following options:
USE_ANSI_STDLIB = True #For VTK/ITK compatibility
