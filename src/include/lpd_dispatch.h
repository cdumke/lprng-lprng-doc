/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2003, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: lpd_dispatch.h,v 1.68 2004/02/24 19:37:38 papowell Exp $
 ***************************************************************************/



#ifndef _LPD_DISPATCH_H_
#define _LPD_DISPATCH_H_ 1

/* PROTOTYPES */
void Dispatch_input(int *talk, char *input, const char *from_addr );
void Service_all( struct line_list *args );
void Service_connection( struct line_list *args );
void Service_lpd( int talk, const char *from_addr );

#endif
