

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from sensor.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef sensor_1710384978_h
#define sensor_1710384978_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Long SENSOR_UNITS_MAX_LEN= 20;
static const DDS_Long SENSOR_ID_MAX_LEN= 20;
extern "C" {

    extern const char *SensorReadingTypeTYPENAME;

}

struct SensorReadingTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class SensorReadingTypeTypeSupport;
class SensorReadingTypeDataWriter;
class SensorReadingTypeDataReader;
#endif

class SensorReadingType 
{
  public:
    typedef struct SensorReadingTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef SensorReadingTypeTypeSupport TypeSupport;
    typedef SensorReadingTypeDataWriter DataWriter;
    typedef SensorReadingTypeDataReader DataReader;
    #endif

    DDS_Char *   sensorId ;
    DDS_Float   sensorValue ;
    DDS_Char *   sensorUnits ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* SensorReadingType_get_typecode(void); /* Type code */

DDS_SEQUENCE(SensorReadingTypeSeq, SensorReadingType);                                        

NDDSUSERDllExport
RTIBool SensorReadingType_initialize(
    SensorReadingType* self);

NDDSUSERDllExport
RTIBool SensorReadingType_initialize_ex(
    SensorReadingType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorReadingType_initialize_w_params(
    SensorReadingType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void SensorReadingType_finalize(
    SensorReadingType* self);

NDDSUSERDllExport
void SensorReadingType_finalize_ex(
    SensorReadingType* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorReadingType_finalize_w_params(
    SensorReadingType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorReadingType_finalize_optional_members(
    SensorReadingType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorReadingType_copy(
    SensorReadingType* dst,
    const SensorReadingType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* sensor */

