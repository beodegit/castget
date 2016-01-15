/*
  Copyright (C) 2005, 2007 Marius L. Jøhndal
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
 
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 
  $Id: utils.h,v 1.2 2007/09/20 18:10:51 mariuslj Exp $
  
*/

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <glib.h>

int write_by_temporary_file(const gchar *filename, 
                            int(*writer)(FILE *f, gpointer user_data), 
                            gpointer user_data, gchar
                            **used_filename);
gchar *get_rfc822_time(void);

GDate* libcastget_parse_rfc822_date(const char *rfc822_date_str);

#endif /* UTILS_H */

/* 
   Local Variables:
   mode:c
   indent-tabs-mode:nil
   c-basic-offset:2
   coding:utf-8
   End:
*/

