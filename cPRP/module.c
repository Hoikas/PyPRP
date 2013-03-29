/*    Copyright (C) 2008  Guild of Writers PyPRP Project Team
 *    See the file AUTHORS for more info about the team
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *    Please see the file LICENSE for the full license.
 */

#include "cprp.h"

static PyMethodDef cprp_Methods[] =
{
    { NULL, NULL, 0, NULL }
};

PyMODINIT_FUNC initcprp()
{
    PyObject* module = Py_InitModule3("cprp", cprp_Methods, "C Helper Module for PyPRP");
    return module;
}
