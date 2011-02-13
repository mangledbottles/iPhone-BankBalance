/*
 *  InfoLog.h
 *  BankBalance
 *
 *  Created by Damien Glancy on 05/05/2010.
 *  Copyright 2010 Lime Cubed. All rights reserved.
 *
 */

#ifdef INFO

#define InfoLog(args...) _InfoLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);

#else

#define InfoLog(x...)

#endif

void _InfoLog(const char *file, int lineNumber, const char *funcName, NSString *format,...);
