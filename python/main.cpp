///////////////////////////////////////////////////////////////////////////////
// BSD 3-Clause License
// Copyright (C) 2023, New York University
//
// Copyright note valid unless otherwise stated in individual files.
// All rights reserved.
///////////////////////////////////////////////////////////////////////////////

#include "mim_solvers/python.hpp"

BOOST_PYTHON_MODULE(mim_solvers_pywrap) { 

    namespace bp = boost::python;

    bp::import("crocoddyl");

    mim_solvers::exposeSolverDDP(); 
    mim_solvers::exposeSolverFDDP(); 
    mim_solvers::exposeSolverSQP(); 
    mim_solvers::exposeSolverCSQP(); 
    mim_solvers::exposeSolverPROXQP();
}
