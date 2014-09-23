/**
 * \copyright
 * Copyright (c) 2012-2014, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */


#ifndef DISTRIBUTION_H_
#define DISTRIBUTION_H_

#include <vector>

namespace MeshLib
{
class Mesh;
}

namespace GeoLib
{
class GeoObject;
}

namespace NumLib
{
class ISpatialFunction;

/**
 * Generate distributed node values from a given function
 *
 * @param func            a spatial function object
 * @param msh             a mesh object
 * @param vec_node_ids    a vector of mesh node ids where the function is evaluated
 * @return a vector of nodal values
 */
std::vector<double> generateNodeValueDistribution(
    const NumLib::ISpatialFunction &func,
    const MeshLib::Mesh &msh,
    const std::vector<std::size_t> &vec_node_ids);

} // NumLib

#endif // DISTRIBUTION_H_
