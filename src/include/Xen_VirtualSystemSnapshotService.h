// ***** Generated by Codegen *****
// Copyright (C) 2008-2009 Citrix Systems Inc
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

#ifndef __XEN_VIRTUALSYSTEMSNAPSHOTSERVICE_H__
#define __XEN_VIRTUALSYSTEMSNAPSHOTSERVICE_H__

/* Values for the various properties of the class */


typedef enum _Xen_VirtualSystemSnapshotService_AvailableRequestedStates{
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Enabled=2,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Disabled=3,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Shut_Down=4,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Offline=6,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Test=7,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Defer=8,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Quiesce=9,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Reboot=10,
    Xen_VirtualSystemSnapshotService_AvailableRequestedStates_Reset=11,
    /*Xen_VirtualSystemSnapshotService_AvailableRequestedStates_DMTF_Reserved=..,*/
}Xen_VirtualSystemSnapshotService_AvailableRequestedStates;

typedef enum _Xen_VirtualSystemSnapshotService_CommunicationStatus{
    Xen_VirtualSystemSnapshotService_CommunicationStatus_Unknown=0,
    Xen_VirtualSystemSnapshotService_CommunicationStatus_Not_Available=1,
    Xen_VirtualSystemSnapshotService_CommunicationStatus_Communication_OK=2,
    Xen_VirtualSystemSnapshotService_CommunicationStatus_Lost_Communication=3,
    Xen_VirtualSystemSnapshotService_CommunicationStatus_No_Contact=4,
    /*Xen_VirtualSystemSnapshotService_CommunicationStatus_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_CommunicationStatus_Vendor_Reserved=0x8000..,*/
}Xen_VirtualSystemSnapshotService_CommunicationStatus;

typedef enum _Xen_VirtualSystemSnapshotService_DetailedStatus{
    Xen_VirtualSystemSnapshotService_DetailedStatus_Not_Available=0,
    Xen_VirtualSystemSnapshotService_DetailedStatus_No_Additional_Information=1,
    Xen_VirtualSystemSnapshotService_DetailedStatus_Stressed=2,
    Xen_VirtualSystemSnapshotService_DetailedStatus_Predictive_Failure=3,
    Xen_VirtualSystemSnapshotService_DetailedStatus_Non_Recoverable_Error=4,
    Xen_VirtualSystemSnapshotService_DetailedStatus_Supporting_Entity_in_Error=5,
    /*Xen_VirtualSystemSnapshotService_DetailedStatus_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_DetailedStatus_Vendor_Reserved=0x8000..,*/
}Xen_VirtualSystemSnapshotService_DetailedStatus;

typedef enum _Xen_VirtualSystemSnapshotService_EnabledDefault{
    Xen_VirtualSystemSnapshotService_EnabledDefault_Enabled=2,
    Xen_VirtualSystemSnapshotService_EnabledDefault_Disabled=3,
    Xen_VirtualSystemSnapshotService_EnabledDefault_Not_Applicable=5,
    Xen_VirtualSystemSnapshotService_EnabledDefault_Enabled_but_Offline=6,
    Xen_VirtualSystemSnapshotService_EnabledDefault_No_Default=7,
    Xen_VirtualSystemSnapshotService_EnabledDefault_Quiesce=9,
    /*Xen_VirtualSystemSnapshotService_EnabledDefault_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_EnabledDefault_Vendor_Reserved=32768..65535,*/
}Xen_VirtualSystemSnapshotService_EnabledDefault;

typedef enum _Xen_VirtualSystemSnapshotService_EnabledState{
    Xen_VirtualSystemSnapshotService_EnabledState_Unknown=0,
    Xen_VirtualSystemSnapshotService_EnabledState_Other=1,
    Xen_VirtualSystemSnapshotService_EnabledState_Enabled=2,
    Xen_VirtualSystemSnapshotService_EnabledState_Disabled=3,
    Xen_VirtualSystemSnapshotService_EnabledState_Shutting_Down=4,
    Xen_VirtualSystemSnapshotService_EnabledState_Not_Applicable=5,
    Xen_VirtualSystemSnapshotService_EnabledState_Enabled_but_Offline=6,
    Xen_VirtualSystemSnapshotService_EnabledState_In_Test=7,
    Xen_VirtualSystemSnapshotService_EnabledState_Deferred=8,
    Xen_VirtualSystemSnapshotService_EnabledState_Quiesce=9,
    Xen_VirtualSystemSnapshotService_EnabledState_Starting=10,
    /*Xen_VirtualSystemSnapshotService_EnabledState_DMTF_Reserved=11..32767,*/
    /*Xen_VirtualSystemSnapshotService_EnabledState_Vendor_Reserved=32768..65535,*/
}Xen_VirtualSystemSnapshotService_EnabledState;

typedef enum _Xen_VirtualSystemSnapshotService_HealthState{
    Xen_VirtualSystemSnapshotService_HealthState_Unknown=0,
    Xen_VirtualSystemSnapshotService_HealthState_OK=5,
    Xen_VirtualSystemSnapshotService_HealthState_Degraded_Warning=10,
    Xen_VirtualSystemSnapshotService_HealthState_Minor_failure=15,
    Xen_VirtualSystemSnapshotService_HealthState_Major_failure=20,
    Xen_VirtualSystemSnapshotService_HealthState_Critical_failure=25,
    Xen_VirtualSystemSnapshotService_HealthState_Non_recoverable_error=30,
    /*Xen_VirtualSystemSnapshotService_HealthState_DMTF_Reserved=..,*/
}Xen_VirtualSystemSnapshotService_HealthState;

typedef enum _Xen_VirtualSystemSnapshotService_OperatingStatus{
    Xen_VirtualSystemSnapshotService_OperatingStatus_Unknown=0,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Not_Available=1,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Servicing=2,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Starting=3,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Stopping=4,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Stopped=5,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Aborted=6,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Dormant=7,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Completed=8,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Migrating=9,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Emigrating=10,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Immigrating=11,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Snapshotting=12,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Shutting_Down=13,
    Xen_VirtualSystemSnapshotService_OperatingStatus_In_Test=14,
    Xen_VirtualSystemSnapshotService_OperatingStatus_Transitioning=15,
    Xen_VirtualSystemSnapshotService_OperatingStatus_In_Service=16,
    /*Xen_VirtualSystemSnapshotService_OperatingStatus_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_OperatingStatus_Vendor_Reserved=0x8000..,*/
}Xen_VirtualSystemSnapshotService_OperatingStatus;

typedef enum _Xen_VirtualSystemSnapshotService_OperationalStatus{
    Xen_VirtualSystemSnapshotService_OperationalStatus_Unknown=0,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Other=1,
    Xen_VirtualSystemSnapshotService_OperationalStatus_OK=2,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Degraded=3,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Stressed=4,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Predictive_Failure=5,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Error=6,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Non_Recoverable_Error=7,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Starting=8,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Stopping=9,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Stopped=10,
    Xen_VirtualSystemSnapshotService_OperationalStatus_In_Service=11,
    Xen_VirtualSystemSnapshotService_OperationalStatus_No_Contact=12,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Lost_Communication=13,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Aborted=14,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Dormant=15,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Supporting_Entity_in_Error=16,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Completed=17,
    Xen_VirtualSystemSnapshotService_OperationalStatus_Power_Mode=18,
    /*Xen_VirtualSystemSnapshotService_OperationalStatus_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_OperationalStatus_Vendor_Reserved=0x8000..,*/
}Xen_VirtualSystemSnapshotService_OperationalStatus;

typedef enum _Xen_VirtualSystemSnapshotService_PrimaryStatus{
    Xen_VirtualSystemSnapshotService_PrimaryStatus_Unknown=0,
    Xen_VirtualSystemSnapshotService_PrimaryStatus_OK=1,
    Xen_VirtualSystemSnapshotService_PrimaryStatus_Degraded=2,
    Xen_VirtualSystemSnapshotService_PrimaryStatus_Error=3,
    /*Xen_VirtualSystemSnapshotService_PrimaryStatus_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_PrimaryStatus_Vendor_Reserved=0x8000..,*/
}Xen_VirtualSystemSnapshotService_PrimaryStatus;

typedef enum _Xen_VirtualSystemSnapshotService_RequestedState{
    Xen_VirtualSystemSnapshotService_RequestedState_Unknown=0,
    Xen_VirtualSystemSnapshotService_RequestedState_Enabled=2,
    Xen_VirtualSystemSnapshotService_RequestedState_Disabled=3,
    Xen_VirtualSystemSnapshotService_RequestedState_Shut_Down=4,
    Xen_VirtualSystemSnapshotService_RequestedState_No_Change=5,
    Xen_VirtualSystemSnapshotService_RequestedState_Offline=6,
    Xen_VirtualSystemSnapshotService_RequestedState_Test=7,
    Xen_VirtualSystemSnapshotService_RequestedState_Deferred=8,
    Xen_VirtualSystemSnapshotService_RequestedState_Quiesce=9,
    Xen_VirtualSystemSnapshotService_RequestedState_Reboot=10,
    Xen_VirtualSystemSnapshotService_RequestedState_Reset=11,
    Xen_VirtualSystemSnapshotService_RequestedState_Not_Applicable=12,
    /*Xen_VirtualSystemSnapshotService_RequestedState_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemSnapshotService_RequestedState_Vendor_Reserved=32768..65535,*/
}Xen_VirtualSystemSnapshotService_RequestedState;

#define Xen_VirtualSystemSnapshotService_StartMode_Automatic "Automatic"
#define Xen_VirtualSystemSnapshotService_StartMode_Manual "Manual"

#define Xen_VirtualSystemSnapshotService_Status_OK "OK"
#define Xen_VirtualSystemSnapshotService_Status_Error "Error"
#define Xen_VirtualSystemSnapshotService_Status_Degraded "Degraded"
#define Xen_VirtualSystemSnapshotService_Status_Unknown "Unknown"
#define Xen_VirtualSystemSnapshotService_Status_Pred_Fail "Pred Fail"
#define Xen_VirtualSystemSnapshotService_Status_Starting "Starting"
#define Xen_VirtualSystemSnapshotService_Status_Stopping "Stopping"
#define Xen_VirtualSystemSnapshotService_Status_Service "Service"
#define Xen_VirtualSystemSnapshotService_Status_Stressed "Stressed"
#define Xen_VirtualSystemSnapshotService_Status_NonRecover "NonRecover"
#define Xen_VirtualSystemSnapshotService_Status_No_Contact "No Contact"
#define Xen_VirtualSystemSnapshotService_Status_Lost_Comm "Lost Comm"
#define Xen_VirtualSystemSnapshotService_Status_Stopped "Stopped"

typedef enum _Xen_VirtualSystemSnapshotService_TransitioningToState{
    Xen_VirtualSystemSnapshotService_TransitioningToState_Unknown=0,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Enabled=2,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Disabled=3,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Shut_Down=4,
    Xen_VirtualSystemSnapshotService_TransitioningToState_No_Change=5,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Offline=6,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Test=7,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Defer=8,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Quiesce=9,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Reboot=10,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Reset=11,
    Xen_VirtualSystemSnapshotService_TransitioningToState_Not_Applicable=12,
    /*Xen_VirtualSystemSnapshotService_TransitioningToState_DMTF_Reserved=..,*/
}Xen_VirtualSystemSnapshotService_TransitioningToState;

typedef enum _Xen_VirtualSystemSnapshotService_RequestStateChange{
    Xen_VirtualSystemSnapshotService_RequestStateChange_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Unknown_or_Unspecified_Error=2,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Cannot_complete_within_Timeout_Period=3,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Failed=4,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Invalid_Parameter=5,
    Xen_VirtualSystemSnapshotService_RequestStateChange_In_Use=6,
    /*Xen_VirtualSystemSnapshotService_RequestStateChange_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_RequestStateChange_Method_Parameters_Checked___Job_Started=4096,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Invalid_State_Transition=4097,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Use_of_Timeout_Parameter_Not_Supported=4098,
    Xen_VirtualSystemSnapshotService_RequestStateChange_Busy=4099,
    /*Xen_VirtualSystemSnapshotService_RequestStateChange_Method_Reserved=4100..32767,*/
    /*Xen_VirtualSystemSnapshotService_RequestStateChange_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_RequestStateChange;

typedef enum _Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport{
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Failed=2,
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Timeout=3,
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_PrepareSnapshotForestImport;

typedef enum _Xen_VirtualSystemSnapshotService_ApplySnapshot{
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Failed=2,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Timeout=3,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Invalid_Parameter=4,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Invalid_State=5,
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Invalid_Type=6,
    /*Xen_VirtualSystemSnapshotService_ApplySnapshot_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_ApplySnapshot_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_ApplySnapshot_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_ApplySnapshot_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_ApplySnapshot;

typedef enum _Xen_VirtualSystemSnapshotService_DestroySnapshot{
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Failed=2,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Timeout=3,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Invalid_Parameter=4,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Invalid_State=5,
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Invalid_Type=6,
    /*Xen_VirtualSystemSnapshotService_DestroySnapshot_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_DestroySnapshot_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_DestroySnapshot_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_DestroySnapshot_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_DestroySnapshot;

typedef enum _Xen_VirtualSystemSnapshotService_StartSnapshotForestExport{
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Failed=2,
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Timeout=3,
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_StartSnapshotForestExport_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_StartSnapshotForestExport;

typedef enum _Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport{
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Failed=2,
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Timeout=3,
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_FinalizeSnapshotForestImport;

typedef enum _Xen_VirtualSystemSnapshotService_EndSnapshotForestExport{
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Failed=2,
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Timeout=3,
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_EndSnapshotForestExport_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_EndSnapshotForestExport;

typedef enum _Xen_VirtualSystemSnapshotService_CreateSnapshot{
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Failed=2,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Timeout=3,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Invalid_Parameter=4,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Invalid_State=5,
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Invalid_Type=6,
    /*Xen_VirtualSystemSnapshotService_CreateSnapshot_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_CreateSnapshot_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_CreateSnapshot_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_CreateSnapshot_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_CreateSnapshot;

typedef enum _Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence{
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Failed=2,
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Timeout=3,
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Method_Reserved=4097..32767,*/
    Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_No_more_Disks_to_be_Imported=32768,
    /*Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence_Vendor_Specific=32769..65535,*/
}Xen_VirtualSystemSnapshotService_CreateNextDiskInImportSequence;

typedef enum _Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport{
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Completed_with_No_Error=0,
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Not_Supported=1,
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Failed=2,
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Timeout=3,
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Invalid_Parameter=4,
    /*Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_DMTF_Reserved=..,*/
    Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemSnapshotService_CleanupSnapshotForestImport;

#endif /*__XEN_VIRTUALSYSTEMSNAPSHOTSERVICE_H__*/
