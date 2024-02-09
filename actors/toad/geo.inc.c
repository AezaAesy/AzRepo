#include "src/game/envfx_snow.h"

const GeoLayout toad_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 29, 0, toad_body_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 8, -18, 0, toad_foot_l_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -8, -18, 0, toad_foot_r_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 14, 14, 0, toad_hand_l_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -14, 14, 0, toad_hand_r_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 18, 0, toad_head_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_SHADOW(1, 150, 100),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
