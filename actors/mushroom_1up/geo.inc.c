#include "src/game/envfx_snow.h"

const GeoLayout mushroom_1up_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 80),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, mushroom_1up_000_displaylist_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, mushroom_1up_000_displaylist_mesh_layer_6),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
