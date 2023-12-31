/* abstractqueue.c generated by valac 0.56.3, the Vala compiler
 * generated from abstractqueue.vala, do not modify */

/* abstractqueue.vala
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

enum  {
	GEE_ABSTRACT_QUEUE_0_PROPERTY,
	GEE_ABSTRACT_QUEUE_G_TYPE,
	GEE_ABSTRACT_QUEUE_G_DUP_FUNC,
	GEE_ABSTRACT_QUEUE_G_DESTROY_FUNC,
	GEE_ABSTRACT_QUEUE_CAPACITY_PROPERTY,
	GEE_ABSTRACT_QUEUE_REMAINING_CAPACITY_PROPERTY,
	GEE_ABSTRACT_QUEUE_IS_FULL_PROPERTY,
	GEE_ABSTRACT_QUEUE_NUM_PROPERTIES
};
static GParamSpec* gee_abstract_queue_properties[GEE_ABSTRACT_QUEUE_NUM_PROPERTIES];

struct _GeeAbstractQueuePrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

static gint GeeAbstractQueue_private_offset;
static gpointer gee_abstract_queue_parent_class = NULL;
static GeeQueueIface * gee_abstract_queue_gee_queue_parent_iface = NULL;

 G_GNUC_INTERNAL void gee_abstract_queue_reserved0 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved1 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved2 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved3 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved4 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved5 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved6 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved7 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved8 (GeeAbstractQueue* self);
 G_GNUC_INTERNAL void gee_abstract_queue_reserved9 (GeeAbstractQueue* self);
static gpointer gee_abstract_queue_real_peek (GeeAbstractQueue* self);
static gpointer gee_abstract_queue_real_poll (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved0 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved1 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved2 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved3 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved4 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved5 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved6 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved7 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved8 (GeeAbstractQueue* self);
static void gee_abstract_queue_real_reserved9 (GeeAbstractQueue* self);
static GType gee_abstract_queue_get_type_once (void);
static void _vala_gee_abstract_queue_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_gee_abstract_queue_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);

static inline gpointer
gee_abstract_queue_get_instance_private (GeeAbstractQueue* self)
{
	return G_STRUCT_MEMBER_P (self, GeeAbstractQueue_private_offset);
}

/**
 * {@inheritDoc}
 */
static gpointer
gee_abstract_queue_real_peek (GeeAbstractQueue* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_queue_peek'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
gee_abstract_queue_peek (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->peek) {
		return _klass_->peek (self);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static gpointer
gee_abstract_queue_real_poll (GeeAbstractQueue* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_queue_poll'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
gee_abstract_queue_poll (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->poll) {
		return _klass_->poll (self);
	}
	return NULL;
}

static void
gee_abstract_queue_real_reserved0 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved0 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved0) {
		_klass_->reserved0 (self);
	}
}

static void
gee_abstract_queue_real_reserved1 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved1 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved1) {
		_klass_->reserved1 (self);
	}
}

static void
gee_abstract_queue_real_reserved2 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved2 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved2) {
		_klass_->reserved2 (self);
	}
}

static void
gee_abstract_queue_real_reserved3 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved3 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved3) {
		_klass_->reserved3 (self);
	}
}

static void
gee_abstract_queue_real_reserved4 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved4 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved4) {
		_klass_->reserved4 (self);
	}
}

static void
gee_abstract_queue_real_reserved5 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved5 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved5) {
		_klass_->reserved5 (self);
	}
}

static void
gee_abstract_queue_real_reserved6 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved6 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved6) {
		_klass_->reserved6 (self);
	}
}

static void
gee_abstract_queue_real_reserved7 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved7 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved7) {
		_klass_->reserved7 (self);
	}
}

static void
gee_abstract_queue_real_reserved8 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved8 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved8) {
		_klass_->reserved8 (self);
	}
}

static void
gee_abstract_queue_real_reserved9 (GeeAbstractQueue* self)
{
}

void
gee_abstract_queue_reserved9 (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->reserved9) {
		_klass_->reserved9 (self);
	}
}

GeeAbstractQueue*
gee_abstract_queue_construct (GType object_type,
                              GType g_type,
                              GBoxedCopyFunc g_dup_func,
                              GDestroyNotify g_destroy_func)
{
	GeeAbstractQueue * self = NULL;
	self = (GeeAbstractQueue*) gee_abstract_collection_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

gint
gee_abstract_queue_get_capacity (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->get_capacity) {
		return _klass_->get_capacity (self);
	}
	return -1;
}

gint
gee_abstract_queue_get_remaining_capacity (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->get_remaining_capacity) {
		return _klass_->get_remaining_capacity (self);
	}
	return -1;
}

gboolean
gee_abstract_queue_get_is_full (GeeAbstractQueue* self)
{
	GeeAbstractQueueClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_QUEUE_GET_CLASS (self);
	if (_klass_->get_is_full) {
		return _klass_->get_is_full (self);
	}
	return FALSE;
}

static void
gee_abstract_queue_class_init (GeeAbstractQueueClass * klass,
                               gpointer klass_data)
{
	gee_abstract_queue_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeAbstractQueue_private_offset);
	((GeeAbstractQueueClass *) klass)->peek = (gpointer (*) (GeeAbstractQueue*)) gee_abstract_queue_real_peek;
	((GeeAbstractQueueClass *) klass)->poll = (gpointer (*) (GeeAbstractQueue*)) gee_abstract_queue_real_poll;
	((GeeAbstractQueueClass *) klass)->reserved0 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved0;
	((GeeAbstractQueueClass *) klass)->reserved1 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved1;
	((GeeAbstractQueueClass *) klass)->reserved2 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved2;
	((GeeAbstractQueueClass *) klass)->reserved3 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved3;
	((GeeAbstractQueueClass *) klass)->reserved4 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved4;
	((GeeAbstractQueueClass *) klass)->reserved5 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved5;
	((GeeAbstractQueueClass *) klass)->reserved6 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved6;
	((GeeAbstractQueueClass *) klass)->reserved7 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved7;
	((GeeAbstractQueueClass *) klass)->reserved8 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved8;
	((GeeAbstractQueueClass *) klass)->reserved9 = (void (*) (GeeAbstractQueue*)) gee_abstract_queue_real_reserved9;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_queue_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_queue_set_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_CAPACITY_PROPERTY, gee_abstract_queue_properties[GEE_ABSTRACT_QUEUE_CAPACITY_PROPERTY] = g_param_spec_int ("capacity", "capacity", "capacity", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_REMAINING_CAPACITY_PROPERTY, gee_abstract_queue_properties[GEE_ABSTRACT_QUEUE_REMAINING_CAPACITY_PROPERTY] = g_param_spec_int ("remaining-capacity", "remaining-capacity", "remaining-capacity", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_QUEUE_IS_FULL_PROPERTY, gee_abstract_queue_properties[GEE_ABSTRACT_QUEUE_IS_FULL_PROPERTY] = g_param_spec_boolean ("is-full", "is-full", "is-full", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_abstract_queue_gee_queue_get_g_type (GeeAbstractQueue* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_queue_gee_queue_get_g_dup_func (GeeAbstractQueue* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_queue_gee_queue_get_g_destroy_func (GeeAbstractQueue* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_queue_gee_queue_interface_init (GeeQueueIface * iface,
                                             gpointer iface_data)
{
	gee_abstract_queue_gee_queue_parent_iface = g_type_interface_peek_parent (iface);
	iface->peek = (gpointer (*) (GeeQueue*)) gee_abstract_queue_peek;
	iface->poll = (gpointer (*) (GeeQueue*)) gee_abstract_queue_poll;
	iface->get_g_type = (GType (*) (GeeQueue *)) gee_abstract_queue_gee_queue_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeQueue *)) gee_abstract_queue_gee_queue_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeQueue *)) gee_abstract_queue_gee_queue_get_g_destroy_func;
	iface->get_capacity = (gint (*) (GeeQueue *)) gee_abstract_queue_get_capacity;
	iface->get_remaining_capacity = (gint (*) (GeeQueue *)) gee_abstract_queue_get_remaining_capacity;
	iface->get_is_full = (gboolean (*) (GeeQueue *)) gee_abstract_queue_get_is_full;
}

static void
gee_abstract_queue_instance_init (GeeAbstractQueue * self,
                                  gpointer klass)
{
	self->priv = gee_abstract_queue_get_instance_private (self);
}

/**
 * Skeletal implementation of the {@link Queue} interface.
 *
 * Contains common code shared by all queue implementations.
 *
 * @see PriorityQueue
 */
static GType
gee_abstract_queue_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractQueueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_queue_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractQueue), 0, (GInstanceInitFunc) gee_abstract_queue_instance_init, NULL };
	static const GInterfaceInfo gee_queue_info = { (GInterfaceInitFunc) gee_abstract_queue_gee_queue_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_abstract_queue_type_id;
	gee_abstract_queue_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_COLLECTION, "GeeAbstractQueue", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	g_type_add_interface_static (gee_abstract_queue_type_id, GEE_TYPE_QUEUE, &gee_queue_info);
	GeeAbstractQueue_private_offset = g_type_add_instance_private (gee_abstract_queue_type_id, sizeof (GeeAbstractQueuePrivate));
	return gee_abstract_queue_type_id;
}

GType
gee_abstract_queue_get_type (void)
{
	static volatile gsize gee_abstract_queue_type_id__once = 0;
	if (g_once_init_enter (&gee_abstract_queue_type_id__once)) {
		GType gee_abstract_queue_type_id;
		gee_abstract_queue_type_id = gee_abstract_queue_get_type_once ();
		g_once_init_leave (&gee_abstract_queue_type_id__once, gee_abstract_queue_type_id);
	}
	return gee_abstract_queue_type_id__once;
}

static void
_vala_gee_abstract_queue_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	GeeAbstractQueue * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_QUEUE, GeeAbstractQueue);
	switch (property_id) {
		case GEE_ABSTRACT_QUEUE_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_ABSTRACT_QUEUE_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_ABSTRACT_QUEUE_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_abstract_queue_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	GeeAbstractQueue * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_QUEUE, GeeAbstractQueue);
	switch (property_id) {
		case GEE_ABSTRACT_QUEUE_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_QUEUE_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_QUEUE_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

