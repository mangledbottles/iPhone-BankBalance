/*
 *  DebugLog.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */


#ifdef DEBUG

#define DebugLog(args...) _DebugLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);

#else

#define DebugLog(x...)

#endif

void _DebugLog(const char *file, int lineNumber, const char *funcName, NSString *format,...);
