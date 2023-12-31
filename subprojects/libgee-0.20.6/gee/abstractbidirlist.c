/* abstractbidirlist.c generated by valac 0.56.3, the Vala compiler
 * generated from abstractbidirlist.vala, do not modify */

/* bidirlistiterator.vala
 *
 * Copyright (C) 2011  Maciej Piechotka
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
 * 	Maciej Piechotka <uzytkownik2@gmail.com>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

enum  {
	GEE_ABSTRACT_BIDIR_LIST_0_PROPERTY,
	GEE_ABSTRACT_BIDIR_LIST_G_TYPE,
	GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC,
	GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC,
	GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY,
	GEE_ABSTRACT_BIDIR_LIST_NUM_PROPERTIES
};
static GParamSpec* gee_abstract_bidir_list_properties[GEE_ABSTRACT_BIDIR_LIST_NUM_PROPERTIES];

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

#define GEE_TYPE_READ_ONLY_BIDIR_LIST (gee_read_only_bidir_list_get_type ())
#define GEE_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirList))
#define GEE_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))
#define GEE_IS_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_IS_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_READ_ONLY_BIDIR_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))

typedef struct _GeeReadOnlyBidirList GeeReadOnlyBidirList;
typedef struct _GeeReadOnlyBidirListClass GeeReadOnlyBidirListClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GeeAbstractBidirListPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GWeakRef _read_only_view;
};

static gint GeeAbstractBidirList_private_offset;
static gpointer gee_abstract_bidir_list_parent_class = NULL;
static GeeBidirListIface * gee_abstract_bidir_list_gee_bidir_list_parent_iface = NULL;

 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved0 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved1 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved2 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved3 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved4 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved5 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved6 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved7 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved8 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL void gee_abstract_bidir_list_reserved9 (GeeAbstractBidirList* self);
static GeeBidirListIterator* gee_abstract_bidir_list_real_bidir_list_iterator (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved0 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved1 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved2 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved3 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved4 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved5 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved6 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved7 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved8 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved9 (GeeAbstractBidirList* self);
 G_GNUC_INTERNAL GeeReadOnlyBidirList* gee_read_only_bidir_list_new (GType g_type,
                                                    GBoxedCopyFunc g_dup_func,
                                                    GDestroyNotify g_destroy_func,
                                                    GeeBidirList* list);
 G_GNUC_INTERNAL GeeReadOnlyBidirList* gee_read_only_bidir_list_construct (GType object_type,
                                                          GType g_type,
                                                          GBoxedCopyFunc g_dup_func,
                                                          GDestroyNotify g_destroy_func,
                                                          GeeBidirList* list);
 G_GNUC_INTERNAL GType gee_read_only_collection_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_read_only_list_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_read_only_bidir_list_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static GObject * gee_abstract_bidir_list_constructor (GType type,
                                               guint n_construct_properties,
                                               GObjectConstructParam * construct_properties);
static void gee_abstract_bidir_list_finalize (GObject * obj);
static GType gee_abstract_bidir_list_get_type_once (void);
static void _vala_gee_abstract_bidir_list_get_property (GObject * object,
                                                 guint property_id,
                                                 GValue * value,
                                                 GParamSpec * pspec);
static void _vala_gee_abstract_bidir_list_set_property (GObject * object,
                                                 guint property_id,
                                                 const GValue * value,
                                                 GParamSpec * pspec);

static inline gpointer
gee_abstract_bidir_list_get_instance_private (GeeAbstractBidirList* self)
{
	return G_STRUCT_MEMBER_P (self, GeeAbstractBidirList_private_offset);
}

/**
 * {@inheritDoc}
 */
static GeeBidirListIterator*
gee_abstract_bidir_list_real_bidir_list_iterator (GeeAbstractBidirList* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_bidir_list_bidir_list_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

GeeBidirListIterator*
gee_abstract_bidir_list_bidir_list_iterator (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->bidir_list_iterator) {
		return _klass_->bidir_list_iterator (self);
	}
	return NULL;
}

static void
gee_abstract_bidir_list_real_reserved0 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved0 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved0) {
		_klass_->reserved0 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved1 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved1 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved1) {
		_klass_->reserved1 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved2 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved2 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved2) {
		_klass_->reserved2 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved3 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved3 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved3) {
		_klass_->reserved3 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved4 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved4 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved4) {
		_klass_->reserved4 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved5 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved5 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved5) {
		_klass_->reserved5 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved6 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved6 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved6) {
		_klass_->reserved6 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved7 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved7 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved7) {
		_klass_->reserved7 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved8 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved8 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved8) {
		_klass_->reserved8 (self);
	}
}

static void
gee_abstract_bidir_list_real_reserved9 (GeeAbstractBidirList* self)
{
}

void
gee_abstract_bidir_list_reserved9 (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->reserved9) {
		_klass_->reserved9 (self);
	}
}

GeeAbstractBidirList*
gee_abstract_bidir_list_construct (GType object_type,
                                   GType g_type,
                                   GBoxedCopyFunc g_dup_func,
                                   GDestroyNotify g_destroy_func)
{
	GeeAbstractBidirList * self = NULL;
	self = (GeeAbstractBidirList*) gee_abstract_list_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

GeeBidirList*
gee_abstract_bidir_list_get_read_only_view (GeeAbstractBidirList* self)
{
	GeeAbstractBidirListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->get_read_only_view) {
		return _klass_->get_read_only_view (self);
	}
	return NULL;
}

static GeeBidirList*
gee_abstract_bidir_list_real_get_read_only_view (GeeAbstractBidirList* base)
{
	GeeBidirList* result;
	GeeAbstractBidirList* self;
	GeeBidirList* instance = NULL;
	GObject* _tmp0_;
	GeeBidirList* _tmp1_;
	self = base;
	_tmp0_ = g_weak_ref_get (&self->priv->_read_only_view);
	instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_LIST, GeeBidirList);
	_tmp1_ = instance;
	if (_tmp1_ == NULL) {
		GeeReadOnlyBidirList* _tmp2_;
		GeeBidirList* _tmp3_;
		_tmp2_ = gee_read_only_bidir_list_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, (GDestroyNotify) self->priv->g_destroy_func, (GeeBidirList*) self);
		_g_object_unref0 (instance);
		instance = (GeeBidirList*) _tmp2_;
		_tmp3_ = instance;
		g_weak_ref_set (&self->priv->_read_only_view, (GObject*) _tmp3_);
	}
	result = instance;
	return result;
}

static GObject *
gee_abstract_bidir_list_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GeeAbstractBidirList * self;
	parent_class = G_OBJECT_CLASS (gee_abstract_bidir_list_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	g_weak_ref_clear (&self->priv->_read_only_view);
	g_weak_ref_init (&self->priv->_read_only_view, NULL);
	return obj;
}

static void
gee_abstract_bidir_list_class_init (GeeAbstractBidirListClass * klass,
                                    gpointer klass_data)
{
	gee_abstract_bidir_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeAbstractBidirList_private_offset);
	((GeeAbstractBidirListClass *) klass)->bidir_list_iterator = (GeeBidirListIterator* (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_bidir_list_iterator;
	((GeeAbstractBidirListClass *) klass)->reserved0 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved0;
	((GeeAbstractBidirListClass *) klass)->reserved1 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved1;
	((GeeAbstractBidirListClass *) klass)->reserved2 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved2;
	((GeeAbstractBidirListClass *) klass)->reserved3 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved3;
	((GeeAbstractBidirListClass *) klass)->reserved4 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved4;
	((GeeAbstractBidirListClass *) klass)->reserved5 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved5;
	((GeeAbstractBidirListClass *) klass)->reserved6 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved6;
	((GeeAbstractBidirListClass *) klass)->reserved7 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved7;
	((GeeAbstractBidirListClass *) klass)->reserved8 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved8;
	((GeeAbstractBidirListClass *) klass)->reserved9 = (void (*) (GeeAbstractBidirList*)) gee_abstract_bidir_list_real_reserved9;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->get_read_only_view = gee_abstract_bidir_list_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_bidir_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_bidir_list_set_property;
	G_OBJECT_CLASS (klass)->constructor = gee_abstract_bidir_list_constructor;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_bidir_list_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY, gee_abstract_bidir_list_properties[GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY] = g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_BIDIR_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_abstract_bidir_list_gee_bidir_list_get_g_type (GeeAbstractBidirList* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_bidir_list_gee_bidir_list_get_g_dup_func (GeeAbstractBidirList* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_bidir_list_gee_bidir_list_get_g_destroy_func (GeeAbstractBidirList* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_bidir_list_gee_bidir_list_interface_init (GeeBidirListIface * iface,
                                                       gpointer iface_data)
{
	gee_abstract_bidir_list_gee_bidir_list_parent_iface = g_type_interface_peek_parent (iface);
	iface->bidir_list_iterator = (GeeBidirListIterator* (*) (GeeBidirList*)) gee_abstract_bidir_list_bidir_list_iterator;
	iface->get_g_type = (GType (*) (GeeBidirList *)) gee_abstract_bidir_list_gee_bidir_list_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeBidirList *)) gee_abstract_bidir_list_gee_bidir_list_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeBidirList *)) gee_abstract_bidir_list_gee_bidir_list_get_g_destroy_func;
	iface->get_read_only_view = (GeeBidirList* (*) (GeeBidirList *)) gee_abstract_bidir_list_get_read_only_view;
}

static void
gee_abstract_bidir_list_instance_init (GeeAbstractBidirList * self,
                                       gpointer klass)
{
	self->priv = gee_abstract_bidir_list_get_instance_private (self);
}

static void
gee_abstract_bidir_list_finalize (GObject * obj)
{
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	g_weak_ref_clear (&self->priv->_read_only_view);
	G_OBJECT_CLASS (gee_abstract_bidir_list_parent_class)->finalize (obj);
}

static GType
gee_abstract_bidir_list_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractBidirListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_bidir_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractBidirList), 0, (GInstanceInitFunc) gee_abstract_bidir_list_instance_init, NULL };
	static const GInterfaceInfo gee_bidir_list_info = { (GInterfaceInitFunc) gee_abstract_bidir_list_gee_bidir_list_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_abstract_bidir_list_type_id;
	gee_abstract_bidir_list_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_LIST, "GeeAbstractBidirList", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	g_type_add_interface_static (gee_abstract_bidir_list_type_id, GEE_TYPE_BIDIR_LIST, &gee_bidir_list_info);
	GeeAbstractBidirList_private_offset = g_type_add_instance_private (gee_abstract_bidir_list_type_id, sizeof (GeeAbstractBidirListPrivate));
	return gee_abstract_bidir_list_type_id;
}

GType
gee_abstract_bidir_list_get_type (void)
{
	static volatile gsize gee_abstract_bidir_list_type_id__once = 0;
	if (g_once_init_enter (&gee_abstract_bidir_list_type_id__once)) {
		GType gee_abstract_bidir_list_type_id;
		gee_abstract_bidir_list_type_id = gee_abstract_bidir_list_get_type_once ();
		g_once_init_leave (&gee_abstract_bidir_list_type_id__once, gee_abstract_bidir_list_type_id);
	}
	return gee_abstract_bidir_list_type_id__once;
}

static void
_vala_gee_abstract_bidir_list_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec)
{
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	switch (property_id) {
		case GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY:
		g_value_take_object (value, gee_abstract_bidir_list_get_read_only_view (self));
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_abstract_bidir_list_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec)
{
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	switch (property_id) {
		case GEE_ABSTRACT_BIDIR_LIST_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

