/*=============================================================================
//  --- Airway Segmenter ---+
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//  Authors: Marc Niethammer, Yi Hong, Johan Andruejol, Cory Quammen
=============================================================================*/

#if defined(_WIN32)
#pragma warning( disable : 4996 )
#endif

#include "AirwaySegmenterCore_Export.h"

#include <string>

#include <itkImageIOBase.h>


namespace AirwaySegmenter {

  /*******************************************************************/
  /** Query the image type. */
  /*******************************************************************/
  void AIRWAYSEGMENTERCORE_EXPORT GetImageType ( std::string fileName,
                                                 itk::ImageIOBase::IOPixelType & pixelType,
                                                 itk::ImageIOBase::IOComponentType & componentType);

} // end namespace AirwaySegmenter
