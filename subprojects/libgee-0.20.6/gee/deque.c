/* deque.c generated by valac 0.56.3, the Vala compiler
 * generated from deque.vala, do not modify */

/* deque.vala
 *
 * Copyright (C) 2009  Didier Villevalois
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

static GType gee_deque_get_type_once (void);

/**
 * Offers the specified element to the head of this deque.
 *
 * @param element the element to offer to the queue
 *
 * @return        ``true`` if the element was added to the queue
 */
gboolean
gee_deque_offer_head (GeeDeque* self,
                      gconstpointer element)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->offer_head) {
		return _iface_->offer_head (self, element);
	}
	return FALSE;
}

/**
 * Peeks (retrieves, but not remove) an element from this queue.
 *
 * @return the element peeked from the queue (or ``null`` if none was
 *         available)
 */
gpointer
gee_deque_peek_head (GeeDeque* self)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->peek_head) {
		return _iface_->peek_head (self);
	}
	return NULL;
}

/**
 * Polls (retrieves and remove) an element from the head of this queue.
 *
 * @return the element polled from the queue (or ``null`` if none was
 *         available)
 */
gpointer
gee_deque_poll_head (GeeDeque* self)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->poll_head) {
		return _iface_->poll_head (self);
	}
	return NULL;
}

/**
 * Drains the specified amount of elements from the head of this queue in
 * the specified recipient collection.
 *
 * @param recipient the recipient collection to drain the elements to
 * @param amount    the amount of elements to drain
 *
 * @return          the amount of elements that were actually drained
 */
gint
gee_deque_drain_head (GeeDeque* self,
                      GeeCollection* recipient,
                      gint amount)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, 0);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->drain_head) {
		return _iface_->drain_head (self, recipient, amount);
	}
	return -1;
}

/**
 * Offers the specified element to the tail of this deque
 *
 * @param element the element to offer to the queue
 *
 * @return        ``true`` if the element was added to the queue
 */
gboolean
gee_deque_offer_tail (GeeDeque* self,
                      gconstpointer element)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->offer_tail) {
		return _iface_->offer_tail (self, element);
	}
	return FALSE;
}

/**
 * Peeks (retrieves, but not remove) an element from the tail of this
 * queue.
 *
 * @return the element peeked from the queue (or ``null`` if none was
 *         available)
 */
gpointer
gee_deque_peek_tail (GeeDeque* self)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->peek_tail) {
		return _iface_->peek_tail (self);
	}
	return NULL;
}

/**
 * Polls (retrieves and remove) an element from the tail of this queue.
 *
 * @return the element polled from the queue (or ``null`` if none was
 *         available)
 */
gpointer
gee_deque_poll_tail (GeeDeque* self)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->poll_tail) {
		return _iface_->poll_tail (self);
	}
	return NULL;
}

/**
 * Drains the specified amount of elements from the tail of this queue in
 * the specified recipient collection.
 *
 * @param recipient the recipient collection to drain the elements to
 * @param amount    the amount of elements to drain
 *
 * @return          the amount of elements that were actually drained
 */
gint
gee_deque_drain_tail (GeeDeque* self,
                      GeeCollection* recipient,
                      gint amount)
{
	GeeDequeIface* _iface_;
	g_return_val_if_fail (self != NULL, 0);
	_iface_ = GEE_DEQUE_GET_INTERFACE (self);
	if (_iface_->drain_tail) {
		return _iface_->drain_tail (self, recipient, amount);
	}
	return -1;
}

static void
gee_deque_default_init (GeeDequeIface * iface,
                        gpointer iface_data)
{
}

/**
 * A double-ended queue.
 *
 * A deque can be used either as a queue (First-In-First-Out behavior) or as a
 * stack (Last-In-First-Out behavior).
 *
 * The methods defined by this interface behaves exactely in the same way as
 * the {@link Queue} methods with respect to capacity bounds.
 *
 * The Deque interface inherits from the {@link Queue} interface. Thus, to use
 * a deque as a queue, you can equivalently use the following method set:
 *
 * ||<)(> ''Queue method'' ||<)(>  ''Deque method'' ||
 * || {@link Queue.offer}  || {@link offer_tail}    ||
 * || {@link Queue.peek}   || {@link peek_head}     ||
 * || {@link Queue.poll}   || {@link poll_head}     ||
 * || {@link Queue.drain}  || {@link drain_head}    ||
 *
 * To use a deque as a stack, just use the method set that acts at the head of
 * the deque:
 *
 * ||<)(> ''Operation'' ||<)(>  ''Deque method'' ||
 * || push an element   || {@link offer_head}    ||
 * || peek an element   || {@link peek_head}     ||
 * || pop an element    || {@link poll_head}     ||
 */
static GType
gee_deque_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeDequeIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_deque_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType gee_deque_type_id;
	gee_deque_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeDeque", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (gee_deque_type_id, GEE_TYPE_QUEUE);
	return gee_deque_type_id;
}

GType
gee_deque_get_type (void)
{
	static volatile gsize gee_deque_type_id__once = 0;
	if (g_once_init_enter (&gee_deque_type_id__once)) {
		GType gee_deque_type_id;
		gee_deque_type_id = gee_deque_get_type_once ();
		g_once_init_leave (&gee_deque_type_id__once, gee_deque_type_id);
	}
	return gee_deque_type_id__once;
}

