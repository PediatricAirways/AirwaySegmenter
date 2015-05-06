#ifndef AirwaySegmenter_AirwayWriteArgs_h_included
#define AirwaySegmenter_AirwayWriteArgs_h_included

#if defined(_WIN32)
#pragma warning( disable : 4996 )
#endif

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include "ProgramArguments.h"

#include "AirwaySegmenterCore_Export.h"

namespace AirwaySegmenter {

  void AIRWAYSEGMENTERCORE_EXPORT WriteArgsToFile( const ProgramArguments & args );

}

#endif
