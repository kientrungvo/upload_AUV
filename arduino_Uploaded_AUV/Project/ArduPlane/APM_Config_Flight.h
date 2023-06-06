
#define FLIGHT_MODE_CHANNEL	8
#define FLIGHT_MODE_1		AUTO
#define FLIGHT_MODE_2		RTL
#define FLIGHT_MODE_3 		FLY_BY_WIRE_A
#define FLIGHT_MODE_4           FLY_BY_WIRE_B
#define FLIGHT_MODE_5           STABILIZE
#define FLIGHT_MODE_6           MANUAL

#define GCS_PORT	    3
#define GCS_PROTOCOL	    GCS_PROTOCOL_MAVLINK   // QGroundControl protocol
//#define GCS_PROTOCOL	    GCS_PROTOCOL_NONE      // No GCS protocol to save memory
//#define MAV_SYSTEM_ID	    1

// Add a ground start delay in seconds
//#define GROUND_START_DELAY  1

#define THROTTLE_FAILSAFE   ENABLED

//////////////////////////////////////////////////////////////////////////////
// Serial port speeds.
//

//////////////////////////////////////////////////////////////////////////////
// GPS_PROTOCOL 
#define GPS_PROTOCOL        GPS_PROTOCOL_MTK16

//#define MAGNETOMETER	    ENABLED
#define MAG_ORIENTATION	    AP_COMPASS_COMPONENTS_UP_PINS_FORWARD
#define PARAM_DECLINATION   0.18  // Paris

#define AIRSPEED_SENSOR     ENABLED
#define MAGNETOMETER        ENABLED
#define THROTTLE_FAILSAFE   ENABLED


//#define RC_5_FUNCT    RC_5_FUNCT_AILERON
//#define RC_6_FUNCT	RC_6_FUNCT_AILERON

//////////////////////////////////////////////////////////////////////////////
// THROTTLE_OUT                             DEBUG
//
// When debugging, it can be useful to disable the throttle output.  Set
// this option to DISABLED to disable throttle output signals.
//
// The default is to not disable throttle output.
//
#define THROTTLE_OUT        ENABLED

#define HIL_MODE            HIL_MODE_DISABLED    //  Configure for standard flight.
#define HIL_PORT	    0
#define HIL_PROTOCOL	    HIL_PROTOCOL_MAVLINK 

#define CONFIG_ADC  ENABLED
#define LOGGING_ENABLED DISABLED
#define AIRSPEED_CRUISE     6     
#define STANDARD_SPEED	    6  

#define WP_RADIUS_DEFAULT     5//30
#define LOITER_RADIUS_DEFAULT 5//30
#define ALT_HOLD_HOME         5//150

#define THROTTLE_CRUISE	    30
#define THROTTLE_MAX	    100
#define THROTTLE_MIN	    0

