#include "src/game/envfx_snow.h"

const GeoLayout purple_switch_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(300),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, purple_switch_000_displaylist_mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, purple_switch_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
