/* testreadonlyset.c generated by valac 0.56.3, the Vala compiler
 * generated from testreadonlyset.vala, do not modify */

/* testreadonlyset.vala
 *
 * Copyright (C) 2008  Jürg Billeter
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
 * 	Tomaž Vajngerl <quikee@gmail.com>
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_READ_ONLY_COLLECTION_TESTS (read_only_collection_tests_get_type ())
#define READ_ONLY_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTests))
#define READ_ONLY_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTestsClass))
#define IS_READ_ONLY_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READ_ONLY_COLLECTION_TESTS))
#define IS_READ_ONLY_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READ_ONLY_COLLECTION_TESTS))
#define READ_ONLY_COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTestsClass))

typedef struct _ReadOnlyCollectionTests ReadOnlyCollectionTests;
typedef struct _ReadOnlyCollectionTestsClass ReadOnlyCollectionTestsClass;
typedef struct _ReadOnlyCollectionTestsPrivate ReadOnlyCollectionTestsPrivate;

#define TYPE_READ_ONLY_SET_TESTS (read_only_set_tests_get_type ())
#define READ_ONLY_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READ_ONLY_SET_TESTS, ReadOnlySetTests))
#define READ_ONLY_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READ_ONLY_SET_TESTS, ReadOnlySetTestsClass))
#define IS_READ_ONLY_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READ_ONLY_SET_TESTS))
#define IS_READ_ONLY_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READ_ONLY_SET_TESTS))
#define READ_ONLY_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READ_ONLY_SET_TESTS, ReadOnlySetTestsClass))

typedef struct _ReadOnlySetTests ReadOnlySetTests;
typedef struct _ReadOnlySetTestsClass ReadOnlySetTestsClass;
typedef struct _ReadOnlySetTestsPrivate ReadOnlySetTestsPrivate;
enum  {
	READ_ONLY_SET_TESTS_0_PROPERTY,
	READ_ONLY_SET_TESTS_NUM_PROPERTIES
};
static GParamSpec* read_only_set_tests_properties[READ_ONLY_SET_TESTS_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _ReadOnlyCollectionTests {
	GeeTestCase parent_instance;
	ReadOnlyCollectionTestsPrivate * priv;
	GeeCollection* test_collection;
	GeeCollection* ro_collection;
};

struct _ReadOnlyCollectionTestsClass {
	GeeTestCaseClass parent_class;
	GeeCollection* (*get_ro_view) (ReadOnlyCollectionTests* self, GeeCollection* collection);
};

struct _ReadOnlySetTests {
	ReadOnlyCollectionTests parent_instance;
	ReadOnlySetTestsPrivate * priv;
};

struct _ReadOnlySetTestsClass {
	ReadOnlyCollectionTestsClass parent_class;
};

static gpointer read_only_set_tests_parent_class = NULL;

VALA_EXTERN GType gee_test_case_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GeeTestCase, g_object_unref)
VALA_EXTERN GType read_only_collection_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ReadOnlyCollectionTests, g_object_unref)
VALA_EXTERN GType read_only_set_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ReadOnlySetTests, g_object_unref)
VALA_EXTERN void gee_test_case_set_up (GeeTestCase* self);
VALA_EXTERN void gee_test_case_tear_down (GeeTestCase* self);
VALA_EXTERN GeeCollection* read_only_collection_tests_get_ro_view (ReadOnlyCollectionTests* self,
                                                       GeeCollection* collection);
VALA_EXTERN ReadOnlySetTests* read_only_set_tests_new (void);
VALA_EXTERN ReadOnlySetTests* read_only_set_tests_construct (GType object_type);
VALA_EXTERN ReadOnlyCollectionTests* read_only_collection_tests_new_with_name (const gchar* name);
VALA_EXTERN ReadOnlyCollectionTests* read_only_collection_tests_construct_with_name (GType object_type,
                                                                         const gchar* name);
static void read_only_set_tests_real_set_up (GeeTestCase* base);
static void read_only_set_tests_real_tear_down (GeeTestCase* base);
static GeeCollection* read_only_set_tests_real_get_ro_view (ReadOnlyCollectionTests* base,
                                                     GeeCollection* collection);
static GType read_only_set_tests_get_type_once (void);

ReadOnlySetTests*
read_only_set_tests_construct (GType object_type)
{
	ReadOnlySetTests * self = NULL;
	self = (ReadOnlySetTests*) read_only_collection_tests_construct_with_name (object_type, "ReadOnlySet");
	return self;
}

ReadOnlySetTests*
read_only_set_tests_new (void)
{
	return read_only_set_tests_construct (TYPE_READ_ONLY_SET_TESTS);
}

static void
read_only_set_tests_real_set_up (GeeTestCase* base)
{
	ReadOnlySetTests * self;
	GeeHashSet* _tmp0_;
	GeeCollection* _tmp1_;
	GeeCollection* _tmp2_;
	self = (ReadOnlySetTests*) base;
	_tmp0_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (((ReadOnlyCollectionTests*) self)->test_collection);
	((ReadOnlyCollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
	_tmp1_ = ((ReadOnlyCollectionTests*) self)->test_collection;
	_tmp2_ = read_only_collection_tests_get_ro_view ((ReadOnlyCollectionTests*) self, _tmp1_);
	_g_object_unref0 (((ReadOnlyCollectionTests*) self)->ro_collection);
	((ReadOnlyCollectionTests*) self)->ro_collection = _tmp2_;
}

static void
read_only_set_tests_real_tear_down (GeeTestCase* base)
{
	ReadOnlySetTests * self;
	self = (ReadOnlySetTests*) base;
	_g_object_unref0 (((ReadOnlyCollectionTests*) self)->test_collection);
	((ReadOnlyCollectionTests*) self)->test_collection = NULL;
	_g_object_unref0 (((ReadOnlyCollectionTests*) self)->ro_collection);
	((ReadOnlyCollectionTests*) self)->ro_collection = NULL;
}

static GeeCollection*
read_only_set_tests_real_get_ro_view (ReadOnlyCollectionTests* base,
                                      GeeCollection* collection)
{
	ReadOnlySetTests * self;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	GeeCollection* result;
	self = (ReadOnlySetTests*) base;
	g_return_val_if_fail (collection != NULL, NULL);
	_tmp0_ = gee_set_get_read_only_view (G_TYPE_CHECK_INSTANCE_CAST (collection, GEE_TYPE_SET, GeeSet));
	_tmp1_ = _tmp0_;
	result = (GeeCollection*) _tmp1_;
	return result;
}

static void
read_only_set_tests_class_init (ReadOnlySetTestsClass * klass,
                                gpointer klass_data)
{
	read_only_set_tests_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase*)) read_only_set_tests_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase*)) read_only_set_tests_real_tear_down;
	((ReadOnlyCollectionTestsClass *) klass)->get_ro_view = (GeeCollection* (*) (ReadOnlyCollectionTests*, GeeCollection*)) read_only_set_tests_real_get_ro_view;
}

static void
read_only_set_tests_instance_init (ReadOnlySetTests * self,
                                   gpointer klass)
{
}

static GType
read_only_set_tests_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ReadOnlySetTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) read_only_set_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ReadOnlySetTests), 0, (GInstanceInitFunc) read_only_set_tests_instance_init, NULL };
	GType read_only_set_tests_type_id;
	read_only_set_tests_type_id = g_type_register_static (TYPE_READ_ONLY_COLLECTION_TESTS, "ReadOnlySetTests", &g_define_type_info, 0);
	return read_only_set_tests_type_id;
}

GType
read_only_set_tests_get_type (void)
{
	static volatile gsize read_only_set_tests_type_id__once = 0;
	if (g_once_init_enter (&read_only_set_tests_type_id__once)) {
		GType read_only_set_tests_type_id;
		read_only_set_tests_type_id = read_only_set_tests_get_type_once ();
		g_once_init_leave (&read_only_set_tests_type_id__once, read_only_set_tests_type_id);
	}
	return read_only_set_tests_type_id__once;
}

