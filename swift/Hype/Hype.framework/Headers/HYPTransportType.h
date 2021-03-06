//
// Copyright (C) 2015 Hype Labs - All Rights Reserved
//
// NOTICE: All information contained herein is, and remains the property of
// Hype Labs. The intellectual and technical concepts contained herein are
// proprietary to Hype Labs and may be covered by U.S. and Foreign Patents,
// patents in process, and are protected by trade secret and copyright law.
// Dissemination of this information or reproduction of this material is
// strictly forbidden unless prior written permission is obtained from
// Hype Labs.
//

#import <Foundation/Foundation.h>

/**
 * This bitwise enumeration lists types of transport made available by the
 * framework. These values can be combined using bitwise operators to indicate
 * multi transport configurations.
 */
typedef NS_OPTIONS(NSUInteger, HYPTransportType)
{
    /**
     * Transport uses Bluetooth Low Energy technology.
     */
    HYPTransportTypeBluetoothLowEnergy = 0x01,
    
    /**
     * Transport uses Bluetooth Classic technology.
     */
    HYPTransportTypeBluetoothClassic = 0x02,
    
    /**
     * Transport uses Wi-Fi Direct (P2P Wi-Fi) technology.
     */
    HYPTransportTypeWiFiDirect = 0x04,
    
    /*
     * Transport uses Infrastructural Wi-Fi technology.
     */
    HYPTransportTypeWiFiInfra = 0x08,
    
    /*
     * Transport uses an Internet connection.
     */
    HYPTransportTypeWeb = 0x10
};

/**
 * This constant indicates the absence of any type of transport.
 */
FOUNDATION_EXTERN const HYPTransportType HYPTransportTypeNone;

/**
 * This constant is used to signify all available types of transport instead
 * of relying on bitwise operators while listing all available constants.
 */
FOUNDATION_EXTERN const HYPTransportType HYPTransportTypeAll;

/**
 * Bonjour is a mixed transport type that includes Infrastructural Wi-Fi,
 * Wi-Fi Direct, and Bluetooth Classic.
 */
FOUNDATION_EXPORT const HYPTransportType HYPTransportTypeBonjour;

/**
 * This method will return a string describing the type of transport given as
 * argument. These strings should be suitable for presenting to the end user,
 * as they are descriptive of the underlying type of transport. This method
 * always returns the transport type's full name if it's a single type of transport,
 * and `None` if there's no transport type at all, as well as `Mixed` if several
 * types of transport are represented by the enumeration.
 * @param transportType The transport type to describe.
 * @returns The transport type description.
 */
NSString * HYPTransportTypeDescription(HYPTransportType transportType);

/**
 * Short descriptions are not suitable for displaying to the end user, but they
 * are useful for development, as they are short and unique for each kind of
 * transport. All short descriptions are three characters long. `BLE` stands for
 * Bluetooth Low Energy, `BLC` stands for Bluetooth Classic, `WFD` stands for Wi-Fi
 * Direct, `WFI` stands for Infrastructural Wi-Fi, and `WEB` stands for an Internet
 * transport. Combined transports yield a `MIX` tag and the absence of transports
 * yields `NON`.
 * @param transportType The transport type to describe.
 * @returns The transport type short description.
 */
NSString * HYPTransportTypeShortDescription(HYPTransportType transportType);
