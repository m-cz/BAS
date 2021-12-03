/*
 *     ____             _________                __                _     
 *    / __ \___  ____ _/ /_  __(_)___ ___  ___  / /   ____  ____ _(_)____
 *   / /_/ / _ \/ __ `/ / / / / / __ `__ \/ _ \/ /   / __ \/ __ `/ / ___/
 *  / _, _/  __/ /_/ / / / / / / / / / / /  __/ /___/ /_/ / /_/ / / /__  
 * /_/ |_|\___/\__,_/_/ /_/ /_/_/ /_/ /_/\___/_____/\____/\__, /_/\___/  
 *                                                       /____/          
 *
 *                  Barracuda Embedded Web-Server
 *
 ****************************************************************************
 *                            HEADER
 *
 *   $Id: NetConv.h 4915 2021-12-01 18:26:55Z wini $
 *
 *   COPYRIGHT:  Real Time Logic, 2004
 *
 *   This software is copyrighted by and is the sole property of Real
 *   Time Logic LLC.  All rights, title, ownership, or other interests in
 *   the software remain the property of Real Time Logic LLC.  This
 *   software may only be used in accordance with the terms and
 *   conditions stipulated in the corresponding license agreement under
 *   which the software has been supplied.  Any unauthorized use,
 *   duplication, transmission, distribution, or disclosure of this
 *   software is expressly forbidden.
 *                                                                        
 *   This Copyright notice may not be removed or modified without prior
 *   written consent of Real Time Logic LLC.
 *                                                                         
 *   Real Time Logic LLC. reserves the right to modify this software
 *   without notice.
 *
 *               http://www.realtimelogic.com
 ****************************************************************************
 *
 *
 *
 */
#ifndef _NetConv_h
#define _NetConv_h


#ifdef B_LITTLE_ENDIAN
#define baHtonl(x) ((U32)((((U32)(x) & 0x000000ffU) << 24) | \
                         (((U32)(x) & 0x0000ff00U) <<  8) | \
                         (((U32)(x) & 0x00ff0000U) >>  8) | \
                         (((U32)(x) & 0xff000000U) >> 24)))
#define baHtons(x) ((U16)((((U16)(x) & 0x00ff) << 8) | \
                         (((U16)(x) & 0xff00) >> 8)))
#elif defined B_BIG_ENDIAN
#define baHtonl(x) x
#define baHtons(x) x
#else
#error endian needed
#endif
#define baNtohl(x) baHtonl(x)
#define baNtohs(x) baHtons(x)

/***********************************************************************
 *  Network conversion routines
 ***********************************************************************/

#endif

