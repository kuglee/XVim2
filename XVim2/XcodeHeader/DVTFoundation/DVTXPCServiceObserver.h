//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTXPCServiceObserver : NSObject
{
}

+ (id)serviceNamesAtPaths:(id)arg1;
+ (void)_gatherServiceInfo:(id)arg1 forBundles:(id)arg2;
+ (id)_serviceNameAtPath:(id)arg1;
+ (id)xpcServicesInBundles:(id)arg1 bundleDirs:(id)arg2 allowedAppExtension:(id)arg3;
+ (void)flushBundlePath:(id)arg1;
+ (id)serviceNamesForType:(unsigned long long)arg1 executablePath:(id)arg2 frameworkSearchPaths:(id)arg3 allowedAppExtensionIdentifiers:(id)arg4;

@end

