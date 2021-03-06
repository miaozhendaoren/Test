/* -----------------------------------------------------------------------------
  Filename:    v_cfg.h
  Description: Toolversion: 02.01.13.01.10.01.32.00.00.00
                
                Serial Number: CBD1100132
                Customer Info: BEIQI Foton Motor Co., Ltd.
                               Foton
                               Microcontroller: Infineon TriCore TC1767
                               Compiler: Tasking V3.3r1
                
                
                Generator Fwk   : GENy 
                Generator Module: GenTool_GenyVcfgNameDecorator
                
                Configuration   : D:\TaskingTc&GENywork\R1556\BMS_R1556\Bsw\Can\configCAN\configGENy\R1556.gny
                
                ECU: 
                        TargetSystem: Hw_TricoreCpu
                        Compiler:     Tasking
                        Derivates:    INFINEON_TC1767
                
                Channel "Channel0":
                        Databasefile: D:\DBC WORK\R1556\R1556_Veh_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu
                Channel "Channel1":
                        Databasefile: D:\DBC WORK\R1556\R1556_Inter_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu

  Generated by , 2015-12-25  17:24:00
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2008 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__V_CFG_H__)
#define __V_CFG_H__

#ifndef VGEN_GENY
#define VGEN_GENY
#endif

#ifndef GENy
#define GENy
#endif

#ifndef SUPPLIER_CANBEDDED
#define SUPPLIER_CANBEDDED                   30
#endif

/* -----------------------------------------------------------------------------
    &&&~ General Switches
 ----------------------------------------------------------------------------- */

#ifndef V_OSTYPE_NONE
#define V_OSTYPE_NONE
#endif



/* -----------------------------------------------------------------------------
    &&&~ Processor specific
 ----------------------------------------------------------------------------- */

#ifndef C_CPUTYPE_32BIT
#define C_CPUTYPE_32BIT
#endif


#ifndef V_CPUTYPE_BITARRAY_32BIT
#define V_CPUTYPE_BITARRAY_32BIT
#endif


#ifndef C_CPUTYPE_LITTLEENDIAN
#define C_CPUTYPE_LITTLEENDIAN
#endif


#ifndef C_CPUTYPE_BITORDER_LSB2MSB
#define C_CPUTYPE_BITORDER_LSB2MSB
#endif


#ifndef V_DISABLE_USE_DUMMY_FUNCTIONS
#define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif


#ifndef V_ENABLE_USE_DUMMY_STATEMENT
#define V_ENABLE_USE_DUMMY_STATEMENT
#endif


#ifndef C_COMP_TASKING_TRICORE_MULTICAN
#define C_COMP_TASKING_TRICORE_MULTICAN
#endif


#ifndef V_CPU_TRICORE
#define V_CPU_TRICORE
#endif

#ifndef V_COMP_TASKING
#define V_COMP_TASKING
#endif

#ifndef V_COMP_TASKING_TRICORE
#define V_COMP_TASKING_TRICORE
#endif

#ifndef V_PROCESSOR_INFINEON_TC1767
#define V_PROCESSOR_INFINEON_TC1767
#endif


#ifndef C_PROCESSOR_INFINEON_TC1767
#define C_PROCESSOR_INFINEON_TC1767
#endif




/* -----------------------------------------------------------------------------
    &&&~ Used Modules
 ----------------------------------------------------------------------------- */

#define VGEN_ENABLE_XCP
#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VSTD_ENABLE_DEFAULT_INTCTRL
#define VSTD_ENABLE_DEFAULT_INTCTRL
#endif

#ifndef VSTD_ENABLE_GLOBAL_LOCK
#define VSTD_ENABLE_GLOBAL_LOCK
#endif

#ifndef VSTD_DISABLE_DEBUG_SUPPORT
#define VSTD_DISABLE_DEBUG_SUPPORT
#endif

#ifndef VSTD_ENABLE_LIBRARY_FUNCTIONS
#define VSTD_ENABLE_LIBRARY_FUNCTIONS
#endif


#define VGEN_ENABLE_CAN_DRV
#define C_ENABLE_CAN_CHANNELS
#define V_BUSTYPE_CAN
#define VGEN_ENABLE_IL_VECTOR


#ifndef kVNumberOfIdentities
#define kVNumberOfIdentities                 1
#endif

#ifndef tVIdentityMsk
#define tVIdentityMsk                        vuint8
#endif

#ifndef kVIdentityIdentity_0
#define kVIdentityIdentity_0                 (vuint8) 0
#endif

#ifndef VSetActiveIdentity
#define VSetActiveIdentity(identityLog)
#endif

#ifndef V_ACTIVE_IDENTITY_MSK
#define V_ACTIVE_IDENTITY_MSK                1
#endif

#ifndef V_ACTIVE_IDENTITY_LOG
#define V_ACTIVE_IDENTITY_LOG                0
#endif


/* -----------------------------------------------------------------------------
    &&&~ Optimization
 ----------------------------------------------------------------------------- */

#define V_ATOMIC_BIT_ACCESS_IN_BITFIELD      STD_OFF
#define V_ATOMIC_VARIABLE_ACCESS             16


#ifndef C_CLIENT_VECTOR
#define C_CLIENT_VECTOR
#endif

#ifndef __Bcu__
#define __Bcu__
#endif

/* -----------------------------------------------------------------------------
    &&&~ Compatibility defines for ComSetCurrentECU
 ----------------------------------------------------------------------------- */

#define kComNumberOfNodes                    kVNumberOfIdentities
#define ComSetCurrentECU                     VSetActiveIdentity
#define comMultipleECUCurrent                vActiveIdentityLog


#define C_VERSION_REF_IMPLEMENTATION         0x150u


#ifndef VGEN_ENABLE_VSTDLIB
/* DrvCan__baseRi15 requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif



/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 210607152
      #error "The magic number of the generated file <D:\workspace\R1556\v_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 210607152
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_CFG_H__ */
