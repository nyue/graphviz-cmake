/* $Id: gvprpipe.h,v 1.9 2011/01/25 16:30:47 ellson Exp $Revision:*/
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

#ifndef GVPRPIPE_H
#define GVPRPIPE_H

#include "cgraph.h"

#ifdef __cplusplus
extern "C" {
#endif
    extern int run_gvpr(Agraph_t * srcGraph, int argc, char *argv[]);


#ifdef __cplusplus
}				/* end extern "C" */
#endif
#endif
