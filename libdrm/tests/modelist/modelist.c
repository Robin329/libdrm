/* Listing available connector modes
 *
 * This demo iterates over the list of connectors provided by KMS, and prints
 * all available modes.
 */
#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include "xf86drmMode.h"

int main(int argc, char *argv[])
{
	const char *card;
	int drm_fd;
	/* check which DRM device to open */
	if (argc > 1)
		card = argv[1];
	else
		card = "/dev/dri/card0";
	drm_fd = open(card, O_RDWR | O_NONBLOCK);
	if (drm_fd < 0) {
		perror("open failed");
		return 1;
	}

	drmModeRes *resources = drmModeGetResources(drm_fd);
	for (int i = 0; i < resources->count_connectors; i++) {
		uint32_t conn_id = resources->connectors[i];
		drmModeConnector *conn = drmModeGetConnector(drm_fd, conn_id);

		if (conn->connection != DRM_MODE_CONNECTED) {
			drmModeFreeConnector(conn);
			continue;
		}

		printf("Modes for connector %u:\n", conn->connector_id);
		for (i = 0; i < conn->count_modes; i++) {
			drmModeModeInfo *mode = &conn->modes[i];
			printf("%dx%d %dHz\n", mode->hdisplay, mode->vdisplay,
			       mode->vrefresh);
		}

		drmModeFreeConnector(conn);
	}
	drmModeFreeResources(resources);

	return 0;
}