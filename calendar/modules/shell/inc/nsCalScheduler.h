/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2
-*- 
 * 
 * The contents of this file are subject to the Netscape Public License 
 * Version 1.0 (the "NPL"); you may not use this file except in 
 * compliance with the NPL.  You may obtain a copy of the NPL at 
 * http://www.mozilla.org/NPL/ 
 * 
 * Software distributed under the NPL is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL 
 * for the specific language governing rights and limitations under the 
 * NPL. 
 * 
 * The Initial Developer of this code under the NPL is Netscape 
 * Communications Corporation.  Portions created by Netscape are 
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights 
 * Reserved. 
 */ 

/**
 *  nsCalScheduler
 *     Wraps all the capi and parsing code. A more convenient
 *     interface for performing scheduling tasks.
 *
 *  sman
 */

#if !defined(AFX_NSCALSCHEDULER_H__A53027E1_42D1_11D2_8ED8_0060088A4B1D__INCLUDED_)
#define AFX_NSCALSCHEDULER_H__A53027E1_42D1_11D2_8ED8_0060088A4B1D__INCLUDED_

#include "nscore.h"
#include "nsError.h"
#include "nsCom.h"
#include "capi.h"
#include "julnstr.h"
#include "nsDateTime.h"

class nsCalScheduler  
{
public:
	nsCalScheduler();
	virtual ~nsCalScheduler();

/**
 * Fetch events from the supplied curl that overlap the
 * supplied date range.
 * @param sCurl       the curl describing the data source
 * @param u           the user who is asking for the data
 * @param psPassword  the password needed to login to this url
 * @param dStart      range start time
 * @param dEnd        range end time
 * @param ppsPropList array of property names to load
 * @param iPropCount  number of items in ppsPropList
 * @param pCal        the calendar into which these events should be loaded
 * @return 0 on success
 */
  nsresult FetchEventsByRange( 
      const JulianString& sCurl,
      DateTime dStart,
      DateTime dEnd,
      char** ppsPropList,
      int iPropCount,
      NSCalendar* pCal);
};

#endif // !defined(AFX_NSCALSCHEDULER_H__A53027E1_42D1_11D2_8ED8_0060088A4B1D__INCLUDED_)
