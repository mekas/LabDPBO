/* readonlybidirlist.c generated by valac 0.56.3, the Vala compiler
 * generated from readonlybidirlist.vala, do not modify */

/* readonlybidirlist.vala
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

#include <glib-object.h>
#include "gee.h"
#include <glib.h>

#define GEE_TYPE_READ_ONLY_COLLECTION (gee_read_only_collection_get_type ())
#define GEE_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollection))
#define GEE_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))
#define GEE_IS_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_IS_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_READ_ONLY_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))

typedef struct _GeeReadOnlyCollection GeeReadOnlyCollection;
typedef struct _GeeReadOnlyCollectionClass GeeReadOnlyCollectionClass;
typedef struct _GeeReadOnlyCollectionPrivate GeeReadOnlyCollectionPrivate;

#define GEE_TYPE_READ_ONLY_LIST (gee_read_only_list_get_type ())
#define GEE_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyList))
#define GEE_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))
#define GEE_IS_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_LIST))
#define GEE_IS_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_LIST))
#define GEE_READ_ONLY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))

typedef struct _GeeReadOnlyList GeeReadOnlyList;
typedef struct _GeeReadOnlyListClass GeeReadOnlyListClass;
typedef struct _GeeReadOnlyListPrivate GeeReadOnlyListPrivate;

#define GEE_TYPE_READ_ONLY_BIDIR_LIST (gee_read_only_bidir_list_get_type ())
#define GEE_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirList))
#define GEE_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))
#define GEE_IS_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_IS_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_READ_ONLY_BIDIR_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))

typedef struct _GeeReadOnlyBidirList GeeReadOnlyBidirList;
typedef struct _GeeReadOnlyBidirListClass GeeReadOnlyBidirListClass;
typedef struct _GeeReadOnlyBidirListPrivate GeeReadOnlyBidirListPrivate;
enum  {
	GEE_READ_ONLY_BIDIR_LIST_0_PROPERTY,
	GEE_READ_ONLY_BIDIR_LIST_G_TYPE,
	GEE_READ_ONLY_BIDIR_LIST_G_DUP_FUNC,
	GEE_READ_ONLY_BIDIR_LIST_G_DESTROY_FUNC,
	GEE_READ_ONLY_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY,
	GEE_READ_ONLY_BIDIR_LIST_NUM_PROPERTIES
};
static GParamSpec* gee_read_only_bidir_list_properties[GEE_READ_ONLY_BIDIR_LIST_NUM_PROPERTIES];

#define GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR (gee_read_only_collection_iterator_get_type ())
#define GEE_READ_ONLY_COLLECTION_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR, GeeReadOnlyCollectionIterator))
#define GEE_READ_ONLY_COLLECTION_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR, GeeReadOnlyCollectionIteratorClass))
#define GEE_READ_ONLY_COLLECTION_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR))
#define GEE_READ_ONLY_COLLECTION_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR))
#define GEE_READ_ONLY_COLLECTION_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_READ_ONLY_COLLECTION_TYPE_ITERATOR, GeeReadOnlyCollectionIteratorClass))

typedef struct _GeeReadOnlyCollectionIterator GeeReadOnlyCollectionIterator;
typedef struct _GeeReadOnlyCollectionIteratorClass GeeReadOnlyCollectionIteratorClass;

#define GEE_READ_ONLY_LIST_TYPE_ITERATOR (gee_read_only_list_iterator_get_type ())
#define GEE_READ_ONLY_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_READ_ONLY_LIST_TYPE_ITERATOR, GeeReadOnlyListIterator))
#define GEE_READ_ONLY_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_READ_ONLY_LIST_TYPE_ITERATOR, GeeReadOnlyListIteratorClass))
#define GEE_READ_ONLY_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_READ_ONLY_LIST_TYPE_ITERATOR))
#define GEE_READ_ONLY_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_READ_ONLY_LIST_TYPE_ITERATOR))
#define GEE_READ_ONLY_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_READ_ONLY_LIST_TYPE_ITERATOR, GeeReadOnlyListIteratorClass))

typedef struct _GeeReadOnlyListIterator GeeReadOnlyListIterator;
typedef struct _GeeReadOnlyListIteratorClass GeeReadOnlyListIteratorClass;

#define GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR (gee_read_only_bidir_list_iterator_get_type ())
#define GEE_READ_ONLY_BIDIR_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, GeeReadOnlyBidirListIterator))
#define GEE_READ_ONLY_BIDIR_LIST_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, GeeReadOnlyBidirListIteratorClass))
#define GEE_READ_ONLY_BIDIR_LIST_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR))
#define GEE_READ_ONLY_BIDIR_LIST_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR))
#define GEE_READ_ONLY_BIDIR_LIST_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, GeeReadOnlyBidirListIteratorClass))

typedef struct _GeeReadOnlyBidirListIterator GeeReadOnlyBidirListIterator;
typedef struct _GeeReadOnlyBidirListIteratorClass GeeReadOnlyBidirListIteratorClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GeeReadOnlyCollectionIteratorPrivate GeeReadOnlyCollectionIteratorPrivate;
typedef struct _GeeReadOnlyListIteratorPrivate GeeReadOnlyListIteratorPrivate;
typedef struct _GeeReadOnlyBidirListIteratorPrivate GeeReadOnlyBidirListIteratorPrivate;
enum  {
	GEE_READ_ONLY_BIDIR_LIST_ITERATOR_0_PROPERTY,
	GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_TYPE,
	GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DUP_FUNC,
	GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DESTROY_FUNC,
	GEE_READ_ONLY_BIDIR_LIST_ITERATOR_NUM_PROPERTIES
};
static GParamSpec* gee_read_only_bidir_list_iterator_properties[GEE_READ_ONLY_BIDIR_LIST_ITERATOR_NUM_PROPERTIES];

struct _GeeReadOnlyCollection {
	GObject parent_instance;
	GeeReadOnlyCollectionPrivate * priv;
	GeeCollection* _collection;
};

struct _GeeReadOnlyCollectionClass {
	GObjectClass parent_class;
	GeeCollection* (*get_read_only_view) (GeeReadOnlyCollection* self);
};

struct _GeeReadOnlyList {
	GeeReadOnlyCollection parent_instance;
	GeeReadOnlyListPrivate * priv;
};

struct _GeeReadOnlyListClass {
	GeeReadOnlyCollectionClass parent_class;
	GeeList* (*get_read_only_view) (GeeReadOnlyList* self);
};

struct _GeeReadOnlyBidirList {
	GeeReadOnlyList parent_instance;
	GeeReadOnlyBidirListPrivate * priv;
};

struct _GeeReadOnlyBidirListClass {
	GeeReadOnlyListClass parent_class;
	GeeBidirList* (*get_read_only_view) (GeeReadOnlyBidirList* self);
};

struct _GeeReadOnlyBidirListPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

struct _GeeReadOnlyCollectionIterator {
	GObject parent_instance;
	GeeReadOnlyCollectionIteratorPrivate * priv;
	GeeIterator* _iter;
};

struct _GeeReadOnlyCollectionIteratorClass {
	GObjectClass parent_class;
};

struct _GeeReadOnlyListIterator {
	GeeReadOnlyCollectionIterator parent_instance;
	GeeReadOnlyListIteratorPrivate * priv;
};

struct _GeeReadOnlyListIteratorClass {
	GeeReadOnlyCollectionIteratorClass parent_class;
};

struct _GeeReadOnlyBidirListIterator {
	GeeReadOnlyListIterator parent_instance;
	GeeReadOnlyBidirListIteratorPrivate * priv;
};

struct _GeeReadOnlyBidirListIteratorClass {
	GeeReadOnlyListIteratorClass parent_class;
};

struct _GeeReadOnlyBidirListIteratorPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

static gint GeeReadOnlyBidirList_private_offset;
static gpointer gee_read_only_bidir_list_parent_class = NULL;
static gint GeeReadOnlyBidirListIterator_private_offset;
static gpointer gee_read_only_bidir_list_iterator_parent_class = NULL;
static GeeBidirIteratorIface * gee_read_only_bidir_list_iterator_gee_bidir_iterator_parent_iface = NULL;
static GeeBidirListIteratorIface * gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_parent_iface = NULL;
static GeeBidirListIface * gee_read_only_bidir_list_gee_bidir_list_parent_iface = NULL;

 G_GNUC_INTERNAL GType gee_read_only_collection_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_read_only_list_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_read_only_bidir_list_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GeeBidirList* gee_read_only_bidir_list_get_read_only_view (GeeReadOnlyBidirList* self);
 G_GNUC_INTERNAL GeeReadOnlyBidirList* gee_read_only_bidir_list_new (GType g_type,
                                                    GBoxedCopyFunc g_dup_func,
                                                    GDestroyNotify g_destroy_func,
                                                    GeeBidirList* list);
 G_GNUC_INTERNAL GeeReadOnlyBidirList* gee_read_only_bidir_list_construct (GType object_type,
                                                          GType g_type,
                                                          GBoxedCopyFunc g_dup_func,
                                                          GDestroyNotify g_destroy_func,
                                                          GeeBidirList* list);
 G_GNUC_INTERNAL GeeReadOnlyList* gee_read_only_list_new (GType g_type,
                                         GBoxedCopyFunc g_dup_func,
                                         GDestroyNotify g_destroy_func,
                                         GeeList* list);
 G_GNUC_INTERNAL GeeReadOnlyList* gee_read_only_list_construct (GType object_type,
                                               GType g_type,
                                               GBoxedCopyFunc g_dup_func,
                                               GDestroyNotify g_destroy_func,
                                               GeeList* list);
static GeeBidirListIterator* gee_read_only_bidir_list_real_bidir_list_iterator (GeeBidirList* base);
static GeeReadOnlyBidirListIterator* gee_read_only_bidir_list_iterator_new (GType g_type,
                                                                     GBoxedCopyFunc g_dup_func,
                                                                     GDestroyNotify g_destroy_func,
                                                                     GeeListIterator* iterator);
static GeeReadOnlyBidirListIterator* gee_read_only_bidir_list_iterator_construct (GType object_type,
                                                                           GType g_type,
                                                                           GBoxedCopyFunc g_dup_func,
                                                                           GDestroyNotify g_destroy_func,
                                                                           GeeListIterator* iterator);
VALA_EXTERN GType gee_read_only_collection_iterator_get_type (void) G_GNUC_CONST ;
VALA_EXTERN GType gee_read_only_list_iterator_get_type (void) G_GNUC_CONST ;
static GType gee_read_only_bidir_list_iterator_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GeeReadOnlyListIterator* gee_read_only_list_iterator_new (GType g_type,
                                                          GBoxedCopyFunc g_dup_func,
                                                          GDestroyNotify g_destroy_func,
                                                          GeeListIterator* iterator);
 G_GNUC_INTERNAL GeeReadOnlyListIterator* gee_read_only_list_iterator_construct (GType object_type,
                                                                GType g_type,
                                                                GBoxedCopyFunc g_dup_func,
                                                                GDestroyNotify g_destroy_func,
                                                                GeeListIterator* iterator);
static gboolean gee_read_only_bidir_list_iterator_real_previous (GeeBidirIterator* base);
static gboolean gee_read_only_bidir_list_iterator_real_has_previous (GeeBidirIterator* base);
static gboolean gee_read_only_bidir_list_iterator_real_first (GeeBidirIterator* base);
static gboolean gee_read_only_bidir_list_iterator_real_last (GeeBidirIterator* base);
static void gee_read_only_bidir_list_iterator_real_insert (GeeBidirListIterator* base,
                                                    gconstpointer item);
static GType gee_read_only_bidir_list_iterator_get_type_once (void);
static void _vala_gee_read_only_bidir_list_iterator_get_property (GObject * object,
                                                           guint property_id,
                                                           GValue * value,
                                                           GParamSpec * pspec);
static void _vala_gee_read_only_bidir_list_iterator_set_property (GObject * object,
                                                           guint property_id,
                                                           const GValue * value,
                                                           GParamSpec * pspec);
static GType gee_read_only_bidir_list_get_type_once (void);
static void _vala_gee_read_only_bidir_list_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec);
static void _vala_gee_read_only_bidir_list_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec);

static inline gpointer
gee_read_only_bidir_list_get_instance_private (GeeReadOnlyBidirList* self)
{
	return G_STRUCT_MEMBER_P (self, GeeReadOnlyBidirList_private_offset);
}

/**
 * Constructs a read-only list that mirrors the content of the specified
 * list.
 *
 * @param list the list to decorate.
 */
 G_GNUC_INTERNAL GeeReadOnlyBidirList*
gee_read_only_bidir_list_construct (GType object_type,
                                    GType g_type,
                                    GBoxedCopyFunc g_dup_func,
                                    GDestroyNotify g_destroy_func,
                                    GeeBidirList* list)
{
	GeeReadOnlyBidirList * self = NULL;
	g_return_val_if_fail (list != NULL, NULL);
	self = (GeeReadOnlyBidirList*) gee_read_only_list_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, (GeeList*) list);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

 G_GNUC_INTERNAL GeeReadOnlyBidirList*
gee_read_only_bidir_list_new (GType g_type,
                              GBoxedCopyFunc g_dup_func,
                              GDestroyNotify g_destroy_func,
                              GeeBidirList* list)
{
	return gee_read_only_bidir_list_construct (GEE_TYPE_READ_ONLY_BIDIR_LIST, g_type, g_dup_func, g_destroy_func, list);
}

/**
 * {@inheritDoc}
 */
static GeeBidirListIterator*
gee_read_only_bidir_list_real_bidir_list_iterator (GeeBidirList* base)
{
	GeeReadOnlyBidirList * self;
	GeeCollection* _tmp0_;
	GeeBidirListIterator* _tmp1_;
	GeeBidirListIterator* _tmp2_;
	GeeReadOnlyBidirListIterator* _tmp3_;
	GeeBidirListIterator* _tmp4_;
	GeeBidirListIterator* result;
	self = (GeeReadOnlyBidirList*) base;
	_tmp0_ = ((GeeReadOnlyCollection*) self)->_collection;
	_tmp1_ = gee_bidir_list_bidir_list_iterator (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_LIST, GeeBidirList));
	_tmp2_ = _tmp1_;
	_tmp3_ = gee_read_only_bidir_list_iterator_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, (GDestroyNotify) self->priv->g_destroy_func, (GeeListIterator*) _tmp2_);
	_tmp4_ = (GeeBidirListIterator*) _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}

 G_GNUC_INTERNAL GeeBidirList*
gee_read_only_bidir_list_get_read_only_view (GeeReadOnlyBidirList* self)
{
	GeeReadOnlyBidirListClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_READ_ONLY_BIDIR_LIST_GET_CLASS (self);
	if (_klass_->get_read_only_view) {
		return _klass_->get_read_only_view (self);
	}
	return NULL;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static GeeBidirList*
gee_read_only_bidir_list_real_get_read_only_view (GeeReadOnlyBidirList* base)
{
	GeeBidirList* result;
	GeeReadOnlyBidirList* self;
	GeeBidirList* _tmp0_;
	self = base;
	_tmp0_ = _g_object_ref0 ((GeeBidirList*) self);
	result = _tmp0_;
	return result;
}

static inline gpointer
gee_read_only_bidir_list_iterator_get_instance_private (GeeReadOnlyBidirListIterator* self)
{
	return G_STRUCT_MEMBER_P (self, GeeReadOnlyBidirListIterator_private_offset);
}

static GeeReadOnlyBidirListIterator*
gee_read_only_bidir_list_iterator_construct (GType object_type,
                                             GType g_type,
                                             GBoxedCopyFunc g_dup_func,
                                             GDestroyNotify g_destroy_func,
                                             GeeListIterator* iterator)
{
	GeeReadOnlyBidirListIterator * self = NULL;
	g_return_val_if_fail (iterator != NULL, NULL);
	self = (GeeReadOnlyBidirListIterator*) gee_read_only_list_iterator_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, iterator);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

static GeeReadOnlyBidirListIterator*
gee_read_only_bidir_list_iterator_new (GType g_type,
                                       GBoxedCopyFunc g_dup_func,
                                       GDestroyNotify g_destroy_func,
                                       GeeListIterator* iterator)
{
	return gee_read_only_bidir_list_iterator_construct (GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, g_type, g_dup_func, g_destroy_func, iterator);
}

static gboolean
gee_read_only_bidir_list_iterator_real_previous (GeeBidirIterator* base)
{
	GeeReadOnlyBidirListIterator * self;
	GeeIterator* _tmp0_;
	gboolean result;
	self = (GeeReadOnlyBidirListIterator*) base;
	_tmp0_ = ((GeeReadOnlyCollectionIterator*) self)->_iter;
	result = gee_bidir_iterator_previous (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator));
	return result;
}

static gboolean
gee_read_only_bidir_list_iterator_real_has_previous (GeeBidirIterator* base)
{
	GeeReadOnlyBidirListIterator * self;
	GeeIterator* _tmp0_;
	gboolean result;
	self = (GeeReadOnlyBidirListIterator*) base;
	_tmp0_ = ((GeeReadOnlyCollectionIterator*) self)->_iter;
	result = gee_bidir_iterator_has_previous (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator));
	return result;
}

static gboolean
gee_read_only_bidir_list_iterator_real_first (GeeBidirIterator* base)
{
	GeeReadOnlyBidirListIterator * self;
	GeeIterator* _tmp0_;
	gboolean result;
	self = (GeeReadOnlyBidirListIterator*) base;
	_tmp0_ = ((GeeReadOnlyCollectionIterator*) self)->_iter;
	result = gee_bidir_iterator_first (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator));
	return result;
}

static gboolean
gee_read_only_bidir_list_iterator_real_last (GeeBidirIterator* base)
{
	GeeReadOnlyBidirListIterator * self;
	GeeIterator* _tmp0_;
	gboolean result;
	self = (GeeReadOnlyBidirListIterator*) base;
	_tmp0_ = ((GeeReadOnlyCollectionIterator*) self)->_iter;
	result = gee_bidir_iterator_last (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator));
	return result;
}

static void
gee_read_only_bidir_list_iterator_real_insert (GeeBidirListIterator* base,
                                               gconstpointer item)
{
	GeeReadOnlyBidirListIterator * self;
	self = (GeeReadOnlyBidirListIterator*) base;
	g_assert_not_reached ();
}

static void
gee_read_only_bidir_list_iterator_class_init (GeeReadOnlyBidirListIteratorClass * klass,
                                              gpointer klass_data)
{
	gee_read_only_bidir_list_iterator_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeReadOnlyBidirListIterator_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_read_only_bidir_list_iterator_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_read_only_bidir_list_iterator_set_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
}

static GType
gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_type (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_dup_func (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_destroy_func (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_read_only_bidir_list_iterator_gee_bidir_iterator_interface_init (GeeBidirIteratorIface * iface,
                                                                     gpointer iface_data)
{
	gee_read_only_bidir_list_iterator_gee_bidir_iterator_parent_iface = g_type_interface_peek_parent (iface);
	iface->previous = (gboolean (*) (GeeBidirIterator*)) gee_read_only_bidir_list_iterator_real_previous;
	iface->has_previous = (gboolean (*) (GeeBidirIterator*)) gee_read_only_bidir_list_iterator_real_has_previous;
	iface->first = (gboolean (*) (GeeBidirIterator*)) gee_read_only_bidir_list_iterator_real_first;
	iface->last = (gboolean (*) (GeeBidirIterator*)) gee_read_only_bidir_list_iterator_real_last;
	iface->get_g_type = (GType (*) (GeeBidirIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeBidirIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeBidirIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_iterator_get_g_destroy_func;
}

static GType
gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_type (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_dup_func (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_destroy_func (GeeReadOnlyBidirListIterator* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_interface_init (GeeBidirListIteratorIface * iface,
                                                                          gpointer iface_data)
{
	gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_parent_iface = g_type_interface_peek_parent (iface);
	iface->insert = (void (*) (GeeBidirListIterator*, gconstpointer)) gee_read_only_bidir_list_iterator_real_insert;
	iface->get_g_type = (GType (*) (GeeBidirListIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeBidirListIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeBidirListIterator *)) gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_get_g_destroy_func;
}

static void
gee_read_only_bidir_list_iterator_instance_init (GeeReadOnlyBidirListIterator * self,
                                                 gpointer klass)
{
	self->priv = gee_read_only_bidir_list_iterator_get_instance_private (self);
}

static GType
gee_read_only_bidir_list_iterator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeReadOnlyBidirListIteratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_read_only_bidir_list_iterator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeReadOnlyBidirListIterator), 0, (GInstanceInitFunc) gee_read_only_bidir_list_iterator_instance_init, NULL };
	static const GInterfaceInfo gee_bidir_iterator_info = { (GInterfaceInitFunc) gee_read_only_bidir_list_iterator_gee_bidir_iterator_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo gee_bidir_list_iterator_info = { (GInterfaceInitFunc) gee_read_only_bidir_list_iterator_gee_bidir_list_iterator_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_read_only_bidir_list_iterator_type_id;
	gee_read_only_bidir_list_iterator_type_id = g_type_register_static (GEE_READ_ONLY_LIST_TYPE_ITERATOR, "GeeReadOnlyBidirListIterator", &g_define_type_info, 0);
	g_type_add_interface_static (gee_read_only_bidir_list_iterator_type_id, GEE_TYPE_BIDIR_ITERATOR, &gee_bidir_iterator_info);
	g_type_add_interface_static (gee_read_only_bidir_list_iterator_type_id, GEE_TYPE_BIDIR_LIST_ITERATOR, &gee_bidir_list_iterator_info);
	GeeReadOnlyBidirListIterator_private_offset = g_type_add_instance_private (gee_read_only_bidir_list_iterator_type_id, sizeof (GeeReadOnlyBidirListIteratorPrivate));
	return gee_read_only_bidir_list_iterator_type_id;
}

static GType
gee_read_only_bidir_list_iterator_get_type (void)
{
	static volatile gsize gee_read_only_bidir_list_iterator_type_id__once = 0;
	if (g_once_init_enter (&gee_read_only_bidir_list_iterator_type_id__once)) {
		GType gee_read_only_bidir_list_iterator_type_id;
		gee_read_only_bidir_list_iterator_type_id = gee_read_only_bidir_list_iterator_get_type_once ();
		g_once_init_leave (&gee_read_only_bidir_list_iterator_type_id__once, gee_read_only_bidir_list_iterator_type_id);
	}
	return gee_read_only_bidir_list_iterator_type_id__once;
}

static void
_vala_gee_read_only_bidir_list_iterator_get_property (GObject * object,
                                                      guint property_id,
                                                      GValue * value,
                                                      GParamSpec * pspec)
{
	GeeReadOnlyBidirListIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, GeeReadOnlyBidirListIterator);
	switch (property_id) {
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_read_only_bidir_list_iterator_set_property (GObject * object,
                                                      guint property_id,
                                                      const GValue * value,
                                                      GParamSpec * pspec)
{
	GeeReadOnlyBidirListIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_READ_ONLY_BIDIR_LIST_TYPE_ITERATOR, GeeReadOnlyBidirListIterator);
	switch (property_id) {
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_ITERATOR_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
gee_read_only_bidir_list_class_init (GeeReadOnlyBidirListClass * klass,
                                     gpointer klass_data)
{
	gee_read_only_bidir_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeReadOnlyBidirList_private_offset);
	GEE_READ_ONLY_BIDIR_LIST_CLASS (klass)->get_read_only_view = gee_read_only_bidir_list_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_read_only_bidir_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_read_only_bidir_list_set_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * The read-only view of this list.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_READ_ONLY_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY, gee_read_only_bidir_list_properties[GEE_READ_ONLY_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY] = g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_BIDIR_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_read_only_bidir_list_gee_bidir_list_get_g_type (GeeReadOnlyBidirList* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_read_only_bidir_list_gee_bidir_list_get_g_dup_func (GeeReadOnlyBidirList* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_read_only_bidir_list_gee_bidir_list_get_g_destroy_func (GeeReadOnlyBidirList* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_read_only_bidir_list_gee_bidir_list_interface_init (GeeBidirListIface * iface,
                                                        gpointer iface_data)
{
	gee_read_only_bidir_list_gee_bidir_list_parent_iface = g_type_interface_peek_parent (iface);
	iface->bidir_list_iterator = (GeeBidirListIterator* (*) (GeeBidirList*)) gee_read_only_bidir_list_real_bidir_list_iterator;
	iface->get_g_type = (GType (*) (GeeBidirList *)) gee_read_only_bidir_list_gee_bidir_list_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeBidirList *)) gee_read_only_bidir_list_gee_bidir_list_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeBidirList *)) gee_read_only_bidir_list_gee_bidir_list_get_g_destroy_func;
	iface->get_read_only_view = (GeeBidirList* (*) (GeeBidirList *)) gee_read_only_bidir_list_get_read_only_view;
}

static void
gee_read_only_bidir_list_instance_init (GeeReadOnlyBidirList * self,
                                        gpointer klass)
{
	self->priv = gee_read_only_bidir_list_get_instance_private (self);
}

static GType
gee_read_only_bidir_list_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeReadOnlyBidirListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_read_only_bidir_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeReadOnlyBidirList), 0, (GInstanceInitFunc) gee_read_only_bidir_list_instance_init, NULL };
	static const GInterfaceInfo gee_bidir_list_info = { (GInterfaceInitFunc) gee_read_only_bidir_list_gee_bidir_list_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_read_only_bidir_list_type_id;
	gee_read_only_bidir_list_type_id = g_type_register_static (GEE_TYPE_READ_ONLY_LIST, "GeeReadOnlyBidirList", &g_define_type_info, 0);
	g_type_add_interface_static (gee_read_only_bidir_list_type_id, GEE_TYPE_BIDIR_LIST, &gee_bidir_list_info);
	GeeReadOnlyBidirList_private_offset = g_type_add_instance_private (gee_read_only_bidir_list_type_id, sizeof (GeeReadOnlyBidirListPrivate));
	return gee_read_only_bidir_list_type_id;
}

 G_GNUC_INTERNAL GType
gee_read_only_bidir_list_get_type (void)
{
	static volatile gsize gee_read_only_bidir_list_type_id__once = 0;
	if (g_once_init_enter (&gee_read_only_bidir_list_type_id__once)) {
		GType gee_read_only_bidir_list_type_id;
		gee_read_only_bidir_list_type_id = gee_read_only_bidir_list_get_type_once ();
		g_once_init_leave (&gee_read_only_bidir_list_type_id__once, gee_read_only_bidir_list_type_id);
	}
	return gee_read_only_bidir_list_type_id__once;
}

static void
_vala_gee_read_only_bidir_list_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec)
{
	GeeReadOnlyBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirList);
	switch (property_id) {
		case GEE_READ_ONLY_BIDIR_LIST_READ_ONLY_VIEW_PROPERTY:
		g_value_take_object (value, gee_read_only_bidir_list_get_read_only_view (self));
		break;
		case GEE_READ_ONLY_BIDIR_LIST_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_read_only_bidir_list_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec)
{
	GeeReadOnlyBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirList);
	switch (property_id) {
		case GEE_READ_ONLY_BIDIR_LIST_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_READ_ONLY_BIDIR_LIST_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

