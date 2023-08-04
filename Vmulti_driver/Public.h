/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_Vmultidriver,
    0xc2b4b01d,0x00a6,0x4ad5,0x90,0xbb,0xd9,0xbd,0xf2,0x28,0x69,0xb5);
// {c2b4b01d-00a6-4ad5-90bb-d9bdf22869b5}
