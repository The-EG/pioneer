// Copyright © 2008-2020 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#include "Terrain.h"

template <>
const char *TerrainColorFractal<TerrainColorMethane>::GetColorFractalName() const { return "Methane"; }

template <>
TerrainColorFractal<TerrainColorMethane>::TerrainColorFractal(const SystemBody *body) :
	Terrain(body)
{
}
