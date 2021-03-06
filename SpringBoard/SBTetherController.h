/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import <Availability2.h>

@interface SBTetherController : NSObject {
	int _tetherState;
	unsigned _demoCardConnection;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int _lastOrientationCode;
#endif
}
+(id)sharedInstance;
-(unsigned)_demoCardConnection;
-(BOOL)isTethered;
-(void)noteInterfaceOrientationChanged;
-(void)setDitheringEnabled:(int)enabled;
-(void)updatePreferencesIfNeeded;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
// inherited: -(id)init;
-(void)_postDisplayPortNotificationCode:(int)code;
-(void)_setTetherState:(int)state;
-(BOOL)usesDisplayPortTethering;
-(void)_handleDemoModeChanged;
// inherited: -(void)dealloc;
#endif
@end

