#ifndef __TELEPORTPEER_H
#define __TELEPORTPEER_H

#include <gtk/gtk.h>

#define TELEPORT_TYPE_PEER teleport_peer_get_type ()
G_DECLARE_FINAL_TYPE (TeleportPeer, teleport_peer, TELEPORT, PEER, GObject)

gchar* teleport_peer_get_name (TeleportPeer  *self, gint index, GError **error);
gchar* teleport_peer_get_ip (TeleportPeer  *self, gint index, GError **error);
gint teleport_peer_get_port (TeleportPeer  *self, gint index, GError **error);
void teleport_peer_add_peer (TeleportPeer *self, gchar * name, gchar * ip, gint port);
void teleport_peer_remove_peer (TeleportPeer *self, gchar * name);

#endif /* __TELEPORTPEER_H */