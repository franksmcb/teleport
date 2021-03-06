/* teleport-app.h
 *
 * Copyright 2017 Julian Sparber <julian@sparber.com>
 *
 * Teleport is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __TELEPORT_APP_H
#define __TELEPORT_APP_H

#include <gtk/gtk.h>
#include "teleport-peer.h"

#define TELEPORT_APP_TYPE (teleport_app_get_type ())

G_DECLARE_FINAL_TYPE (TeleportApp, teleport_app, TELEPORT, APP, GtkApplication)


TeleportApp     *teleport_app_new            (void);
GSettings       *teleport_app_get_settings   (void);
gchar           *teleport_get_download_directory  (void); 
gchar           *teleport_get_device_name         (void); 
void            create_user_notification     (const char *,
                                              const int,
                                              const char *,
                                              GVariant *);

void            create_finished_notification (const char *,
                                              const int,
                                              const char *,
                                              GVariant *);

gboolean        mainLoopAddPeerCallback      (gpointer);
gboolean        mainLoopRemovePeerCallback   (gpointer);

void            callback_add_peer            (GObject *,
                                              Peer *,
                                              gpointer);
void            callback_remove_peer         (GObject *,
                                              Peer *peer,
                                              gpointer);
void            callback_notify_user         (GObject *,
                                              gchar *,
                                              gpointer);


#endif /* __TELEPORT_APP_H */
