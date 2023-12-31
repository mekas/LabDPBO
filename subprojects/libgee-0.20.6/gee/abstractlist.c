/* abstractlist.c generated by valac 0.56.3, the Vala compiler
 * generated from abstractlist.vala, do not modify */

/* abstractlist.vala
 *
 * Copyright (C) 2007  Jürg Billeter
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
 * 	Didier 'Ptitjes' Villevalois <ptitjes@free.fr>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

enum  {
	GEE_ABSTRACT_LIST_0_PROPERTY,
	GEE_ABSTRACT_LIST_G_TYPE,
	GEE_ABSTRACT_LIST_G_DUP_FUNC,
	GEE_ABSTRACT_LIST_G_DESTROY_FUNC,
	GEE_ABSTRACT_LIST_READ_ONLY_VIEW_PROPERTY,
	GEE_ABSTRACT_LIST_NUM_PROPERTIES
};
static GParamSpec* gee_abstract_list_properties[GEE_ABSTRACT_LIST_NUM_PROPERTIES];

#define GEE_TYPE_READ_ONLY_COLLECTION (gee_read_only_collection_get_type ())
#define GEE_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollection))
#define GEE_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))
#define GEE_IS_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_IS_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_READ_ONLY_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))

typedef struct _GeeReadOnlyCollection GeeReadOnlyCollection;
typedef struct _GeeReadOnlyCollectionClass GeeReadOnlyCollectionClass;

#define GEE_TYPE_READ_ONLY_LIST (gee_read_only_list_get_type ())
#define GEE_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyList))
#define GEE_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))
#define GEE_IS_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_LIST))
#define GEE_IS_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_LIST))
#define GEE_READ_ONLY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))

typedef struct _GeeReadOnlyList GeeReadOnlyList;
typedef struct _GeeReadOnlyListClass GeeReadOnlyListClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GeeAbstractListPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GWeakRef _read_only_view;
};

static gint GeeAbstractList_private_offset;
static gpointer gee_abstract_list_parent_class = NULL;
static GeeListIface * gee_abstract_list_gee_list_parent_iface = NULL;

 G_GNUC_INTERNAL void gee_abstract_list_reserved0 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved1 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved2 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved3 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved4 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved5 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved6 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved7 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved8 (GeeAbstractList* self);
 G_GNUC_INTERNAL void gee_abstract_list_reserved9 (GeeAbstractList* self);
static GeeListIterator* gee_abstract_list_real_list_iterator (GeeAbstractList* self);
static gpointer gee_abstract_list_real_get (GeeAbstractList* self,
                                     gint index);
static void gee_abstract_list_real_set (GeeAbstractList* self,
                                 gint index,
                                 gconstpointer item);
static gint gee_abstract_list_real_index_of (GeeAbstractList* self,
                                      gconstpointer item);
static void gee_abstract_list_real_insert (GeeAbstractList* self,
                                    gint index,
                                    gconstpointer item);
static gpointer gee_abstract_list_real_remove_at (GeeAbstractList* self,
                                           gint index);
static GeeList* gee_abstract_list_real_slice (GeeAbstractList* self,
                                       gint start,
                                       gint stop);
static void gee_abstract_list_real_reserved0 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved1 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved2 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved3 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved4 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved5 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved6 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved7 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved8 (GeeAbstractList* self);
static void gee_abstract_list_real_reserved9 (GeeAbstractList* self);
 G_GNUC_INTERNAL GeeReadOnlyList* gee_read_only_list_new (GType g_type,
                                         GBoxedCopyFunc g_dup_func,
                                         GDestroyNotify g_destroy_func,
                                         GeeList* list);
 G_GNUC_INTERNAL GeeReadOnlyList* gee_read_only_list_construct (GType object_type,
                                               GType g_type,
                                               GBoxedCopyFunc g_dup_func,
                                               GDestroyNotify g_destroy_func,
                                               GeeList* list);
 G_GNUC_INTERNAL GType gee_read_only_collection_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_read_only_list_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static GObject * gee_abstract_list_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
static void gee_abstract_list_finalize (GObject * obj);
static GType gee_abstract_list_get_type_once (void);
static void _vala_gee_abstract_list_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec);
static void _vala_gee_abstract_list_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec);

static inline gpointer
gee_abstract_list_get_instance_private (GeeAbstractList* self)
{
	return G_STRUCT_MEMBER_P (self, GeeAbstractList_private_offset);
}

/**
 * {@inheritDoc}
 */
static GeeListIterator*
gee_abstract_list_real_list_iterator (GeeAbstractList* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_list_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

GeeListIterator*
gee_abstract_list_list_iterator (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->list_iterator) {
		return _klass_->list_iterator (self);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static gpointer
gee_abstract_list_real_get (GeeAbstractList* self,
                            gint index)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_get'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
gee_abstract_list_get (GeeAbstractList* self,
                       gint index)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->get) {
		return _klass_->get (self, index);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static void
gee_abstract_list_real_set (GeeAbstractList* self,
                            gint index,
                            gconstpointer item)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_set'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
gee_abstract_list_set (GeeAbstractList* self,
                       gint index,
                       gconstpointer item)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->set) {
		_klass_->set (self, index, item);
	}
}

/**
 * {@inheritDoc}
 */
static gint
gee_abstract_list_real_index_of (GeeAbstractList* self,
                                 gconstpointer item)
{
	gint _tmp0_ = 0;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_index_of'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gint
gee_abstract_list_index_of (GeeAbstractList* self,
                            gconstpointer item)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->index_of) {
		return _klass_->index_of (self, item);
	}
	return -1;
}

/**
 * {@inheritDoc}
 */
static void
gee_abstract_list_real_insert (GeeAbstractList* self,
                               gint index,
                               gconstpointer item)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_insert'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
gee_abstract_list_insert (GeeAbstractList* self,
                          gint index,
                          gconstpointer item)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->insert) {
		_klass_->insert (self, index, item);
	}
}

/**
 * {@inheritDoc}
 */
static gpointer
gee_abstract_list_real_remove_at (GeeAbstractList* self,
                                  gint index)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_remove_at'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
gee_abstract_list_remove_at (GeeAbstractList* self,
                             gint index)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->remove_at) {
		return _klass_->remove_at (self, index);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static GeeList*
gee_abstract_list_real_slice (GeeAbstractList* self,
                              gint start,
                              gint stop)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_list_slice'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

GeeList*
gee_abstract_list_slice (GeeAbstractList* self,
                         gint start,
                         gint stop)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->slice) {
		return _klass_->slice (self, start, stop);
	}
	return NULL;
}

static void
gee_abstract_list_real_reserved0 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved0 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved0) {
		_klass_->reserved0 (self);
	}
}

static void
gee_abstract_list_real_reserved1 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved1 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved1) {
		_klass_->reserved1 (self);
	}
}

static void
gee_abstract_list_real_reserved2 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved2 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved2) {
		_klass_->reserved2 (self);
	}
}

static void
gee_abstract_list_real_reserved3 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved3 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved3) {
		_klass_->reserved3 (self);
	}
}

static void
gee_abstract_list_real_reserved4 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved4 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved4) {
		_klass_->reserved4 (self);
	}
}

static void
gee_abstract_list_real_reserved5 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved5 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved5) {
		_klass_->reserved5 (self);
	}
}

static void
gee_abstract_list_real_reserved6 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved6 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved6) {
		_klass_->reserved6 (self);
	}
}

static void
gee_abstract_list_real_reserved7 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved7 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved7) {
		_klass_->reserved7 (self);
	}
}

static void
gee_abstract_list_real_reserved8 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved8 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved8) {
		_klass_->reserved8 (self);
	}
}

static void
gee_abstract_list_real_reserved9 (GeeAbstractList* self)
{
}

void
gee_abstract_list_reserved9 (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->reserved9) {
		_klass_->reserved9 (self);
	}
}

GeeAbstractList*
gee_abstract_list_construct (GType object_type,
                             GType g_type,
                             GBoxedCopyFunc g_dup_func,
                             GDestroyNotify g_destroy_func)
{
	GeeAbstractList * self = NULL;
	self = (GeeAbstractList*) gee_abstract_collection_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

GeeList*
gee_abstract_list_get_read_only_view (GeeAbstractList* self)
{
	GeeAbstractListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_LIST_GET_CLASS (self);
	if (_klass_->get_read_only_view) {
		return _klass_->get_read_only_view (self);
	}
	return NULL;
}

static GeeList*
gee_abstract_list_real_get_read_only_view (GeeAbstractList* base)
{
	GeeList* result;
	GeeAbstractList* self;
	GeeList* instance = NULL;
	GObject* _tmp0_;
	GeeList* _tmp1_;
	self = base;
	_tmp0_ = g_weak_ref_get (&self->priv->_read_only_view);
	instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_LIST, GeeList);
	_tmp1_ = instance;
	if (_tmp1_ == NULL) {
		GeeReadOnlyList* _tmp2_;
		GeeList* _tmp3_;
		_tmp2_ = gee_read_only_list_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, (GDestroyNotify) self->priv->g_destroy_func, (GeeList*) self);
		_g_object_unref0 (instance);
		instance = (GeeList*) _tmp2_;
		_tmp3_ = instance;
		g_weak_ref_set (&self->priv->_read_only_view, (GObject*) _tmp3_);
	}
	result = instance;
	return result;
}

static GObject *
gee_abstract_list_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GeeAbstractList * self;
	parent_class = G_OBJECT_CLASS (gee_abstract_list_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_LIST, GeeAbstractList);
	g_weak_ref_clear (&self->priv->_read_only_view);
	g_weak_ref_init (&self->priv->_read_only_view, NULL);
	return obj;
}

static void
gee_abstract_list_class_init (GeeAbstractListClass * klass,
                              gpointer klass_data)
{
	gee_abstract_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeAbstractList_private_offset);
	((GeeAbstractListClass *) klass)->list_iterator = (GeeListIterator* (*) (GeeAbstractList*)) gee_abstract_list_real_list_iterator;
	((GeeAbstractListClass *) klass)->get = (gpointer (*) (GeeAbstractList*, gint)) gee_abstract_list_real_get;
	((GeeAbstractListClass *) klass)->set = (void (*) (GeeAbstractList*, gint, gconstpointer)) gee_abstract_list_real_set;
	((GeeAbstractListClass *) klass)->index_of = (gint (*) (GeeAbstractList*, gconstpointer)) gee_abstract_list_real_index_of;
	((GeeAbstractListClass *) klass)->insert = (void (*) (GeeAbstractList*, gint, gconstpointer)) gee_abstract_list_real_insert;
	((GeeAbstractListClass *) klass)->remove_at = (gpointer (*) (GeeAbstractList*, gint)) gee_abstract_list_real_remove_at;
	((GeeAbstractListClass *) klass)->slice = (GeeList* (*) (GeeAbstractList*, gint, gint)) gee_abstract_list_real_slice;
	((GeeAbstractListClass *) klass)->reserved0 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved0;
	((GeeAbstractListClass *) klass)->reserved1 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved1;
	((GeeAbstractListClass *) klass)->reserved2 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved2;
	((GeeAbstractListClass *) klass)->reserved3 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved3;
	((GeeAbstractListClass *) klass)->reserved4 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved4;
	((GeeAbstractListClass *) klass)->reserved5 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved5;
	((GeeAbstractListClass *) klass)->reserved6 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved6;
	((GeeAbstractListClass *) klass)->reserved7 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved7;
	((GeeAbstractListClass *) klass)->reserved8 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved8;
	((GeeAbstractListClass *) klass)->reserved9 = (void (*) (GeeAbstractList*)) gee_abstract_list_real_reserved9;
	GEE_ABSTRACT_LIST_CLASS (klass)->get_read_only_view = gee_abstract_list_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_list_set_property;
	G_OBJECT_CLASS (klass)->constructor = gee_abstract_list_constructor;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_list_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_LIST_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_LIST_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_LIST_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_LIST_READ_ONLY_VIEW_PROPERTY, gee_abstract_list_properties[GEE_ABSTRACT_LIST_READ_ONLY_VIEW_PROPERTY] = g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_abstract_list_gee_list_get_g_type (GeeAbstractList* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_list_gee_list_get_g_dup_func (GeeAbstractList* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_list_gee_list_get_g_destroy_func (GeeAbstractList* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_list_gee_list_interface_init (GeeListIface * iface,
                                           gpointer iface_data)
{
	gee_abstract_list_gee_list_parent_iface = g_type_interface_peek_parent (iface);
	iface->list_iterator = (GeeListIterator* (*) (GeeList*)) gee_abstract_list_list_iterator;
	iface->get = (gpointer (*) (GeeList*, gint)) gee_abstract_list_get;
	iface->set = (void (*) (GeeList*, gint, gconstpointer)) gee_abstract_list_set;
	iface->index_of = (gint (*) (GeeList*, gconstpointer)) gee_abstract_list_index_of;
	iface->insert = (void (*) (GeeList*, gint, gconstpointer)) gee_abstract_list_insert;
	iface->remove_at = (gpointer (*) (GeeList*, gint)) gee_abstract_list_remove_at;
	iface->slice = (GeeList* (*) (GeeList*, gint, gint)) gee_abstract_list_slice;
	iface->get_g_type = (GType (*) (GeeList *)) gee_abstract_list_gee_list_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeList *)) gee_abstract_list_gee_list_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeList *)) gee_abstract_list_gee_list_get_g_destroy_func;
	iface->get_read_only_view = (GeeList* (*) (GeeList *)) gee_abstract_list_get_read_only_view;
}

static void
gee_abstract_list_instance_init (GeeAbstractList * self,
                                 gpointer klass)
{
	self->priv = gee_abstract_list_get_instance_private (self);
}

static void
gee_abstract_list_finalize (GObject * obj)
{
	GeeAbstractList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_LIST, GeeAbstractList);
	g_weak_ref_clear (&self->priv->_read_only_view);
	G_OBJECT_CLASS (gee_abstract_list_parent_class)->finalize (obj);
}

/**
 * Skeletal implementation of the {@link List} interface.
 *
 * Contains common code shared by all list implementations.
 *
 * @see ArrayList
 * @see LinkedList
 */
static GType
gee_abstract_list_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractList), 0, (GInstanceInitFunc) gee_abstract_list_instance_init, NULL };
	static const GInterfaceInfo gee_list_info = { (GInterfaceInitFunc) gee_abstract_list_gee_list_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_abstract_list_type_id;
	gee_abstract_list_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_COLLECTION, "GeeAbstractList", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	g_type_add_interface_static (gee_abstract_list_type_id, GEE_TYPE_LIST, &gee_list_info);
	GeeAbstractList_private_offset = g_type_add_instance_private (gee_abstract_list_type_id, sizeof (GeeAbstractListPrivate));
	return gee_abstract_list_type_id;
}

GType
gee_abstract_list_get_type (void)
{
	static volatile gsize gee_abstract_list_type_id__once = 0;
	if (g_once_init_enter (&gee_abstract_list_type_id__once)) {
		GType gee_abstract_list_type_id;
		gee_abstract_list_type_id = gee_abstract_list_get_type_once ();
		g_once_init_leave (&gee_abstract_list_type_id__once, gee_abstract_list_type_id);
	}
	return gee_abstract_list_type_id__once;
}

static void
_vala_gee_abstract_list_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec)
{
	GeeAbstractList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_LIST, GeeAbstractList);
	switch (property_id) {
		case GEE_ABSTRACT_LIST_READ_ONLY_VIEW_PROPERTY:
		g_value_take_object (value, gee_abstract_list_get_read_only_view (self));
		break;
		case GEE_ABSTRACT_LIST_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_ABSTRACT_LIST_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_ABSTRACT_LIST_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_abstract_list_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec)
{
	GeeAbstractList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_LIST, GeeAbstractList);
	switch (property_id) {
		case GEE_ABSTRACT_LIST_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_LIST_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_LIST_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

