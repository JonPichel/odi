#ifndef _ODI_AUTOCONF_H
#define _ODI_AUTOCONF_H

#include "types.h"
#include "device.h"
#include "driver.h"

#define ODI_AUTOCONF_PCI 0x01

void odi_autoconf_cleanup();
void odi_autoconf_scan(void * rsdp);

struct odi_device_info * odi_autoconf_get_device(u32 major, u32 minor);
struct odi_driver_info * odi_autoconf_get_driver(u32 major);

#endif