/* testqueue.c generated by valac 0.56.3, the Vala compiler
 * generated from testqueue.vala, do not modify */

/* testqueue.vala
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
 * 	Didier 'Ptitjes' Villevalois <ptitjes@free.fr>
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

#define TYPE_COLLECTION_TESTS (collection_tests_get_type ())
#define COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COLLECTION_TESTS, CollectionTests))
#define COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COLLECTION_TESTS, CollectionTestsClass))
#define IS_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COLLECTION_TESTS))
#define IS_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COLLECTION_TESTS))
#define COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COLLECTION_TESTS, CollectionTestsClass))

typedef struct _CollectionTests CollectionTests;
typedef struct _CollectionTestsClass CollectionTestsClass;
typedef struct _CollectionTestsPrivate CollectionTestsPrivate;

#define TYPE_QUEUE_TESTS (queue_tests_get_type ())
#define QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUEUE_TESTS, QueueTests))
#define QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_QUEUE_TESTS, QueueTestsClass))
#define IS_QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUEUE_TESTS))
#define IS_QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_QUEUE_TESTS))
#define QUEUE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUEUE_TESTS, QueueTestsClass))

typedef struct _QueueTests QueueTests;
typedef struct _QueueTestsClass QueueTestsClass;
typedef struct _QueueTestsPrivate QueueTestsPrivate;
enum  {
	QUEUE_TESTS_0_PROPERTY,
	QUEUE_TESTS_NUM_PROPERTIES
};
static GParamSpec* queue_tests_properties[QUEUE_TESTS_NUM_PROPERTIES];
typedef void (*GeeTestCaseTestMethod) (gpointer user_data);
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _CollectionTests {
	GeeTestCase parent_instance;
	CollectionTestsPrivate * priv;
	GeeCollection* test_collection;
};

struct _CollectionTestsClass {
	GeeTestCaseClass parent_class;
};

struct _QueueTests {
	CollectionTests parent_instance;
	QueueTestsPrivate * priv;
};

struct _QueueTestsClass {
	CollectionTestsClass parent_class;
};

static gpointer queue_tests_parent_class = NULL;

VALA_EXTERN GType gee_test_case_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GeeTestCase, g_object_unref)
VALA_EXTERN GType collection_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (CollectionTests, g_object_unref)
VALA_EXTERN GType queue_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QueueTests, g_object_unref)
VALA_EXTERN QueueTests* queue_tests_construct (GType object_type,
                                   const gchar* name);
VALA_EXTERN CollectionTests* collection_tests_construct (GType object_type,
                                             const gchar* name);
VALA_EXTERN void gee_test_case_add_test (GeeTestCase* self,
                             const gchar* name,
                             GeeTestCaseTestMethod test,
                             gpointer test_target,
                             GDestroyNotify test_target_destroy_notify);
VALA_EXTERN void queue_tests_test_capacity_bound (QueueTests* self);
static void _queue_tests_test_capacity_bound_gee_test_case_test_method (gpointer self);
VALA_EXTERN void queue_tests_test_one_element_operation (QueueTests* self);
static void _queue_tests_test_one_element_operation_gee_test_case_test_method (gpointer self);
VALA_EXTERN void queue_tests_test_gobject_properties (QueueTests* self);
static void _queue_tests_test_gobject_properties_gee_test_case_test_method (gpointer self);
static GType queue_tests_get_type_once (void);

static void
_queue_tests_test_capacity_bound_gee_test_case_test_method (gpointer self)
{
	queue_tests_test_capacity_bound ((QueueTests*) self);
}

static void
_queue_tests_test_one_element_operation_gee_test_case_test_method (gpointer self)
{
	queue_tests_test_one_element_operation ((QueueTests*) self);
}

static void
_queue_tests_test_gobject_properties_gee_test_case_test_method (gpointer self)
{
	queue_tests_test_gobject_properties ((QueueTests*) self);
}

QueueTests*
queue_tests_construct (GType object_type,
                       const gchar* name)
{
	QueueTests * self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (QueueTests*) collection_tests_construct (object_type, name);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] capacity bound", _queue_tests_test_capacity_bound_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] one element operation", _queue_tests_test_one_element_operation_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	gee_test_case_add_test ((GeeTestCase*) self, "[Queue] GObject properties", _queue_tests_test_gobject_properties_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	return self;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

void
queue_tests_test_capacity_bound (QueueTests* self)
{
	GeeQueue* test_queue = NULL;
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GeeQueue* _tmp2_;
	GeeQueue* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_QUEUE) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	_tmp2_ = test_queue;
	_vala_assert (_tmp2_ != NULL, "test_queue != null");
	_tmp3_ = test_queue;
	_tmp4_ = gee_queue_get_capacity (_tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == GEE_QUEUE_UNBOUNDED_CAPACITY) {
		GeeQueue* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		GeeQueue* _tmp9_;
		gboolean _tmp10_;
		gboolean _tmp11_;
		_tmp6_ = test_queue;
		_tmp7_ = gee_queue_get_remaining_capacity (_tmp6_);
		_tmp8_ = _tmp7_;
		_vala_assert (_tmp8_ == GEE_QUEUE_UNBOUNDED_CAPACITY, "test_queue.remaining_capacity == Gee.Queue.UNBOUNDED_CAPACITY");
		_tmp9_ = test_queue;
		_tmp10_ = gee_queue_get_is_full (_tmp9_);
		_tmp11_ = _tmp10_;
		_vala_assert (!_tmp11_, "! test_queue.is_full");
	} else {
		GeeQueue* _tmp12_;
		gboolean _tmp13_;
		gboolean _tmp14_;
		gint capacity = 0;
		GeeQueue* _tmp15_;
		gint _tmp16_;
		gint _tmp17_;
		GeeQueue* _tmp27_;
		gboolean _tmp28_;
		gboolean _tmp29_;
		GeeQueue* _tmp41_;
		gboolean _tmp42_;
		gboolean _tmp43_;
		_tmp12_ = test_queue;
		_tmp13_ = gee_collection_get_is_empty ((GeeCollection*) _tmp12_);
		_tmp14_ = _tmp13_;
		_vala_assert (_tmp14_, "test_queue.is_empty");
		_tmp15_ = test_queue;
		_tmp16_ = gee_queue_get_capacity (_tmp15_);
		_tmp17_ = _tmp16_;
		capacity = _tmp17_;
		{
			gint i = 0;
			i = 1;
			{
				gboolean _tmp18_ = FALSE;
				_tmp18_ = TRUE;
				while (TRUE) {
					GeeQueue* _tmp20_;
					gboolean _tmp21_;
					gboolean _tmp22_;
					GeeQueue* _tmp23_;
					GeeQueue* _tmp24_;
					gint _tmp25_;
					gint _tmp26_;
					if (!_tmp18_) {
						gint _tmp19_;
						_tmp19_ = i;
						i = _tmp19_ + 1;
					}
					_tmp18_ = FALSE;
					if (!(i <= capacity)) {
						break;
					}
					_tmp20_ = test_queue;
					_tmp21_ = gee_queue_get_is_full (_tmp20_);
					_tmp22_ = _tmp21_;
					_vala_assert (!_tmp22_, "! test_queue.is_full");
					_tmp23_ = test_queue;
					_vala_assert (gee_queue_offer (_tmp23_, "one"), "test_queue.offer (\"one\")");
					_tmp24_ = test_queue;
					_tmp25_ = gee_queue_get_remaining_capacity (_tmp24_);
					_tmp26_ = _tmp25_;
					_vala_assert (_tmp26_ == (capacity - i), "test_queue.remaining_capacity == capacity - i");
				}
			}
		}
		_tmp27_ = test_queue;
		_tmp28_ = gee_queue_get_is_full (_tmp27_);
		_tmp29_ = _tmp28_;
		_vala_assert (_tmp29_, "test_queue.is_full");
		{
			gint i = 0;
			i = 1;
			{
				gboolean _tmp30_ = FALSE;
				_tmp30_ = TRUE;
				while (TRUE) {
					GeeQueue* _tmp32_;
					gpointer _tmp33_;
					gchar* _tmp34_;
					GeeQueue* _tmp35_;
					gboolean _tmp36_;
					gboolean _tmp37_;
					GeeQueue* _tmp38_;
					gint _tmp39_;
					gint _tmp40_;
					if (!_tmp30_) {
						gint _tmp31_;
						_tmp31_ = i;
						i = _tmp31_ + 1;
					}
					_tmp30_ = FALSE;
					if (!(i <= capacity)) {
						break;
					}
					_tmp32_ = test_queue;
					_tmp33_ = gee_queue_poll (_tmp32_);
					_tmp34_ = (gchar*) _tmp33_;
					_vala_assert (g_strcmp0 (_tmp34_, "one") == 0, "test_queue.poll () == \"one\"");
					_g_free0 (_tmp34_);
					_tmp35_ = test_queue;
					_tmp36_ = gee_queue_get_is_full (_tmp35_);
					_tmp37_ = _tmp36_;
					_vala_assert (!_tmp37_, "! test_queue.is_full");
					_tmp38_ = test_queue;
					_tmp39_ = gee_queue_get_remaining_capacity (_tmp38_);
					_tmp40_ = _tmp39_;
					_vala_assert (_tmp40_ == i, "test_queue.remaining_capacity == i");
				}
			}
		}
		_tmp41_ = test_queue;
		_tmp42_ = gee_collection_get_is_empty ((GeeCollection*) _tmp41_);
		_tmp43_ = _tmp42_;
		_vala_assert (_tmp43_, "test_queue.is_empty");
	}
	_g_object_unref0 (test_queue);
}

void
queue_tests_test_one_element_operation (QueueTests* self)
{
	GeeQueue* test_queue = NULL;
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GeeArrayList* recipient = NULL;
	GeeArrayList* _tmp2_;
	gpointer _tmp3_;
	gchar* _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gpointer _tmp9_;
	gchar* _tmp10_;
	gint _tmp11_;
	gint _tmp12_;
	gboolean _tmp13_;
	gboolean _tmp14_;
	gpointer _tmp15_;
	gchar* _tmp16_;
	gpointer _tmp17_;
	gchar* _tmp18_;
	gint _tmp19_;
	gint _tmp20_;
	gboolean _tmp21_;
	gboolean _tmp22_;
	gint _tmp23_;
	gint _tmp24_;
	gpointer _tmp25_;
	gchar* _tmp26_;
	gint _tmp27_;
	gint _tmp28_;
	gboolean _tmp29_;
	gboolean _tmp30_;
	gint _tmp31_;
	gint _tmp32_;
	gint _tmp33_;
	gint _tmp34_;
	gboolean _tmp35_;
	gboolean _tmp36_;
	gint _tmp37_;
	gint _tmp38_;
	gpointer _tmp39_;
	gchar* _tmp40_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_QUEUE) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	_tmp2_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
	recipient = _tmp2_;
	_vala_assert (test_queue != NULL, "test_queue != null");
	_vala_assert (gee_queue_offer (test_queue, "one"), "test_queue.offer (\"one\")");
	_tmp3_ = gee_queue_peek (test_queue);
	_tmp4_ = (gchar*) _tmp3_;
	_vala_assert (g_strcmp0 (_tmp4_, "one") == 0, "test_queue.peek () == \"one\"");
	_g_free0 (_tmp4_);
	_tmp5_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp6_ = _tmp5_;
	_vala_assert (_tmp6_ == 1, "test_queue.size == 1");
	_tmp7_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp8_ = _tmp7_;
	_vala_assert (!_tmp8_, "! test_queue.is_empty");
	_tmp9_ = gee_queue_poll (test_queue);
	_tmp10_ = (gchar*) _tmp9_;
	_vala_assert (g_strcmp0 (_tmp10_, "one") == 0, "test_queue.poll () == \"one\"");
	_g_free0 (_tmp10_);
	_tmp11_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp12_ = _tmp11_;
	_vala_assert (_tmp12_ == 0, "test_queue.size == 0");
	_tmp13_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp14_ = _tmp13_;
	_vala_assert (_tmp14_, "test_queue.is_empty");
	_tmp15_ = gee_queue_peek (test_queue);
	_tmp16_ = (gchar*) _tmp15_;
	_vala_assert (_tmp16_ == NULL, "test_queue.peek () == null");
	_g_free0 (_tmp16_);
	_tmp17_ = gee_queue_poll (test_queue);
	_tmp18_ = (gchar*) _tmp17_;
	_vala_assert (_tmp18_ == NULL, "test_queue.poll () == null");
	_g_free0 (_tmp18_);
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_vala_assert (gee_queue_offer (test_queue, "one"), "test_queue.offer (\"one\")");
	_vala_assert (gee_queue_drain (test_queue, (GeeCollection*) recipient, 1) == 1, "test_queue.drain (recipient, 1) == 1");
	_tmp19_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp20_ = _tmp19_;
	_vala_assert (_tmp20_ == 0, "test_queue.size == 0");
	_tmp21_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp22_ = _tmp21_;
	_vala_assert (_tmp22_, "test_queue.is_empty");
	_tmp23_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) recipient);
	_tmp24_ = _tmp23_;
	_vala_assert (_tmp24_ == 1, "recipient.size == 1");
	_tmp25_ = gee_abstract_list_get ((GeeAbstractList*) recipient, 0);
	_tmp26_ = (gchar*) _tmp25_;
	_vala_assert (g_strcmp0 (_tmp26_, "one") == 0, "recipient.get (0) == \"one\"");
	_g_free0 (_tmp26_);
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_vala_assert (gee_queue_drain (test_queue, (GeeCollection*) recipient, 1) == 0, "test_queue.drain (recipient, 1) == 0");
	_tmp27_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp28_ = _tmp27_;
	_vala_assert (_tmp28_ == 0, "test_queue.size == 0");
	_tmp29_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp30_ = _tmp29_;
	_vala_assert (_tmp30_, "test_queue.is_empty");
	_tmp31_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) recipient);
	_tmp32_ = _tmp31_;
	_vala_assert (_tmp32_ == 0, "recipient.size == 0");
	gee_abstract_collection_clear ((GeeAbstractCollection*) recipient);
	_vala_assert (gee_queue_offer (test_queue, "one"), "test_queue.offer (\"one\")");
	_vala_assert (gee_queue_drain (test_queue, (GeeCollection*) recipient, -1) == 1, "test_queue.drain (recipient) == 1");
	_tmp33_ = gee_collection_get_size ((GeeCollection*) test_queue);
	_tmp34_ = _tmp33_;
	_vala_assert (_tmp34_ == 0, "test_queue.size == 0");
	_tmp35_ = gee_collection_get_is_empty ((GeeCollection*) test_queue);
	_tmp36_ = _tmp35_;
	_vala_assert (_tmp36_, "test_queue.is_empty");
	_tmp37_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) recipient);
	_tmp38_ = _tmp37_;
	_vala_assert (_tmp38_ == 1, "recipient.size == 1");
	_tmp39_ = gee_abstract_list_get ((GeeAbstractList*) recipient, 0);
	_tmp40_ = (gchar*) _tmp39_;
	_vala_assert (g_strcmp0 (_tmp40_, "one") == 0, "recipient.get (0) == \"one\"");
	_g_free0 (_tmp40_);
	_g_object_unref0 (recipient);
	_g_object_unref0 (test_queue);
}

void
queue_tests_test_gobject_properties (QueueTests* self)
{
	GeeQueue* test_queue = NULL;
	GeeCollection* _tmp0_;
	GeeQueue* _tmp1_;
	GValue value = {0};
	GValue _tmp2_ = {0};
	gint _tmp3_;
	gint _tmp4_;
	GValue _tmp5_ = {0};
	gint _tmp6_;
	gint _tmp7_;
	GValue _tmp8_ = {0};
	gboolean _tmp9_;
	gboolean _tmp10_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_QUEUE) ? ((GeeQueue*) _tmp0_) : NULL);
	test_queue = _tmp1_;
	_vala_assert (test_queue != NULL, "test_queue != null");
	g_value_init (&_tmp2_, G_TYPE_INT);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp2_;
	g_object_get_property ((GObject*) test_queue, "capacity", &value);
	_tmp3_ = gee_queue_get_capacity (test_queue);
	_tmp4_ = _tmp3_;
	_vala_assert (g_value_get_int (&value) == _tmp4_, "value.get_int () == test_queue.capacity");
	g_value_unset (&value);
	g_value_init (&_tmp5_, G_TYPE_INT);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp5_;
	g_object_get_property ((GObject*) test_queue, "remaining-capacity", &value);
	_tmp6_ = gee_queue_get_remaining_capacity (test_queue);
	_tmp7_ = _tmp6_;
	_vala_assert (g_value_get_int (&value) == _tmp7_, "value.get_int () == test_queue.remaining_capacity");
	g_value_unset (&value);
	g_value_init (&_tmp8_, G_TYPE_BOOLEAN);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	value = _tmp8_;
	g_object_get_property ((GObject*) test_queue, "is-full", &value);
	_tmp9_ = gee_queue_get_is_full (test_queue);
	_tmp10_ = _tmp9_;
	_vala_assert (g_value_get_boolean (&value) == _tmp10_, "value.get_boolean () == test_queue.is_full");
	g_value_unset (&value);
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	_g_object_unref0 (test_queue);
}

static void
queue_tests_class_init (QueueTestsClass * klass,
                        gpointer klass_data)
{
	queue_tests_parent_class = g_type_class_peek_parent (klass);
}

static void
queue_tests_instance_init (QueueTests * self,
                           gpointer klass)
{
}

static GType
queue_tests_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (QueueTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) queue_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (QueueTests), 0, (GInstanceInitFunc) queue_tests_instance_init, NULL };
	GType queue_tests_type_id;
	queue_tests_type_id = g_type_register_static (TYPE_COLLECTION_TESTS, "QueueTests", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	return queue_tests_type_id;
}

GType
queue_tests_get_type (void)
{
	static volatile gsize queue_tests_type_id__once = 0;
	if (g_once_init_enter (&queue_tests_type_id__once)) {
		GType queue_tests_type_id;
		queue_tests_type_id = queue_tests_get_type_once ();
		g_once_init_leave (&queue_tests_type_id__once, queue_tests_type_id);
	}
	return queue_tests_type_id__once;
}
