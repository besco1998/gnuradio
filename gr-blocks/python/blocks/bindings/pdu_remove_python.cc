/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pdu_remove.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(62afe4d010e89d91f3276e3299231a4f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/pdu_remove.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_remove_pydoc.h>

void bind_pdu_remove(py::module& m)
{

    using pdu_remove = ::gr::blocks::pdu_remove;


    py::class_<pdu_remove, gr::block, gr::basic_block, std::shared_ptr<pdu_remove>>(
        m, "pdu_remove", D(pdu_remove))

        .def(py::init(&pdu_remove::make), py::arg("k"), D(pdu_remove, make))


        .def("set_key", &pdu_remove::set_key, py::arg("key"), D(pdu_remove, set_key))

        ;
}