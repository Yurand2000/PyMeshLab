/****************************************************************************
* PyMeshLab                                                         o o     *
* A versatile mesh processing toolbox                             o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005-2021                                           \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/
#include "pymodule_functions.h"

#include "pymeshlab/module_functions.h"
#include "docs/pymodule_functions_doc.h"

void pymeshlab::initModuleFunctions(pybind11::module& m)
{
	m.def("print_pymeshlab_version", &pymeshlab::printVersion, doc::MODULE_PRINT_VERSION);
	m.def("number_plugins", &pymeshlab::numberPlugins, doc::MODULE_NUMBER_PLUGINS);
	m.def("print_plugin_list", &pymeshlab::printPluginList, doc::MODULE_PRINT_PLUGIN_LIST);
	m.def("set_max_gpu_memory", &pymeshlab::setMaxGPUMem, doc::MODULE_SET_MAX_GPU_MEMORY);
}
