

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from sensor.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor.h"

/* ========================================================================= */
const char *SensorReadingTypeTYPENAME = "SensorReadingType";

DDS_TypeCode* SensorReadingType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SensorReadingType_g_tc_sensorId_string = DDS_INITIALIZE_STRING_TYPECODE(((SENSOR_ID_MAX_LEN)));
    static DDS_TypeCode SensorReadingType_g_tc_sensorUnits_string = DDS_INITIALIZE_STRING_TYPECODE(((SENSOR_UNITS_MAX_LEN)));
    static DDS_TypeCode_Member SensorReadingType_g_tc_members[3]=
    {

        {
            (char *)"sensorId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"sensorValue",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"sensorUnits",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SensorReadingType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"SensorReadingType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            SensorReadingType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for SensorReadingType*/

    if (is_initialized) {
        return &SensorReadingType_g_tc;
    }

    SensorReadingType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SensorReadingType_g_tc_sensorId_string;

    SensorReadingType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    SensorReadingType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&SensorReadingType_g_tc_sensorUnits_string;

    is_initialized = RTI_TRUE;

    return &SensorReadingType_g_tc;
}

RTIBool SensorReadingType_initialize(
    SensorReadingType* sample) {
    return SensorReadingType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SensorReadingType_initialize_ex(
    SensorReadingType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return SensorReadingType_initialize_w_params(
        sample,&allocParams);

}

RTIBool SensorReadingType_initialize_w_params(
    SensorReadingType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->sensorId= DDS_String_alloc (((SENSOR_ID_MAX_LEN)));
        if (sample->sensorId == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->sensorId!= NULL) { 
            sample->sensorId[0] = '\0';
        }
    }

    if (!RTICdrType_initFloat(&sample->sensorValue)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory){
        sample->sensorUnits= DDS_String_alloc (((SENSOR_UNITS_MAX_LEN)));
        if (sample->sensorUnits == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->sensorUnits!= NULL) { 
            sample->sensorUnits[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void SensorReadingType_finalize(
    SensorReadingType* sample)
{

    SensorReadingType_finalize_ex(sample,RTI_TRUE);
}

void SensorReadingType_finalize_ex(
    SensorReadingType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    SensorReadingType_finalize_w_params(
        sample,&deallocParams);
}

void SensorReadingType_finalize_w_params(
    SensorReadingType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->sensorId != NULL) {
        DDS_String_free(sample->sensorId);
        sample->sensorId=NULL;

    }

    if (sample->sensorUnits != NULL) {
        DDS_String_free(sample->sensorUnits);
        sample->sensorUnits=NULL;

    }
}

void SensorReadingType_finalize_optional_members(
    SensorReadingType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool SensorReadingType_copy(
    SensorReadingType* dst,
    const SensorReadingType* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->sensorId, src->sensorId, 
        ((SENSOR_ID_MAX_LEN)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->sensorValue, &src->sensorValue)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->sensorUnits, src->sensorUnits, 
        ((SENSOR_UNITS_MAX_LEN)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'SensorReadingType' sequence class.
*/
#define T SensorReadingType
#define TSeq SensorReadingTypeSeq
#define T_initialize_w_params SensorReadingType_initialize_w_params
#define T_finalize_w_params   SensorReadingType_finalize_w_params
#define T_copy       SensorReadingType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

