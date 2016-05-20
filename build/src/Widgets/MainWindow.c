/* MainWindow.c generated by valac 0.30.1, the Vala compiler
 * generated from MainWindow.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define GRADIO_TYPE_MAIN_WINDOW (gradio_main_window_get_type ())
#define GRADIO_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindow))
#define GRADIO_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindowClass))
#define GRADIO_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_MAIN_WINDOW))
#define GRADIO_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_MAIN_WINDOW))
#define GRADIO_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindowClass))

typedef struct _GradioMainWindow GradioMainWindow;
typedef struct _GradioMainWindowClass GradioMainWindowClass;
typedef struct _GradioMainWindowPrivate GradioMainWindowPrivate;

#define GRADIO_TYPE_PLAYER_TOOLBAR (gradio_player_toolbar_get_type ())
#define GRADIO_PLAYER_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbar))
#define GRADIO_PLAYER_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbarClass))
#define GRADIO_IS_PLAYER_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_PLAYER_TOOLBAR))
#define GRADIO_IS_PLAYER_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_PLAYER_TOOLBAR))
#define GRADIO_PLAYER_TOOLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbarClass))

typedef struct _GradioPlayerToolbar GradioPlayerToolbar;
typedef struct _GradioPlayerToolbarClass GradioPlayerToolbarClass;

#define GRADIO_TYPE_MANUAL_BOX (gradio_manual_box_get_type ())
#define GRADIO_MANUAL_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_MANUAL_BOX, GradioManualBox))
#define GRADIO_MANUAL_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_MANUAL_BOX, GradioManualBoxClass))
#define GRADIO_IS_MANUAL_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_MANUAL_BOX))
#define GRADIO_IS_MANUAL_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_MANUAL_BOX))
#define GRADIO_MANUAL_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_MANUAL_BOX, GradioManualBoxClass))

typedef struct _GradioManualBox GradioManualBox;
typedef struct _GradioManualBoxClass GradioManualBoxClass;

#define GRADIO_TYPE_DISCOVER_BOX (gradio_discover_box_get_type ())
#define GRADIO_DISCOVER_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_DISCOVER_BOX, GradioDiscoverBox))
#define GRADIO_DISCOVER_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_DISCOVER_BOX, GradioDiscoverBoxClass))
#define GRADIO_IS_DISCOVER_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_DISCOVER_BOX))
#define GRADIO_IS_DISCOVER_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_DISCOVER_BOX))
#define GRADIO_DISCOVER_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_DISCOVER_BOX, GradioDiscoverBoxClass))

typedef struct _GradioDiscoverBox GradioDiscoverBox;
typedef struct _GradioDiscoverBoxClass GradioDiscoverBoxClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GRADIO_TYPE_GRADIO_APP (gradio_gradio_app_get_type ())
#define GRADIO_GRADIO_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_GRADIO_APP, GradioGradioApp))
#define GRADIO_GRADIO_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_GRADIO_APP, GradioGradioAppClass))
#define GRADIO_IS_GRADIO_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_GRADIO_APP))
#define GRADIO_IS_GRADIO_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_GRADIO_APP))
#define GRADIO_GRADIO_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_GRADIO_APP, GradioGradioAppClass))

typedef struct _GradioGradioApp GradioGradioApp;
typedef struct _GradioGradioAppClass GradioGradioAppClass;

struct _GradioMainWindow {
	GtkApplicationWindow parent_instance;
	GradioMainWindowPrivate * priv;
};

struct _GradioMainWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _GradioMainWindowPrivate {
	GtkStack* ContentStack;
	GtkBox* Bottom;
	GradioPlayerToolbar* player_toolbar;
	GradioManualBox* manual_box;
	GradioDiscoverBox* discover_box;
};


static gpointer gradio_main_window_parent_class = NULL;

GType gradio_main_window_get_type (void) G_GNUC_CONST;
GType gradio_player_toolbar_get_type (void) G_GNUC_CONST;
GType gradio_manual_box_get_type (void) G_GNUC_CONST;
GType gradio_discover_box_get_type (void) G_GNUC_CONST;
#define GRADIO_MAIN_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindowPrivate))
enum  {
	GRADIO_MAIN_WINDOW_DUMMY_PROPERTY
};
GType gradio_gradio_app_get_type (void) G_GNUC_CONST;
GradioMainWindow* gradio_main_window_new (GradioGradioApp** app, GradioPlayerToolbar** pt);
GradioMainWindow* gradio_main_window_construct (GType object_type, GradioGradioApp** app, GradioPlayerToolbar** pt);
GradioManualBox* gradio_manual_box_new (GradioGradioApp** a);
GradioManualBox* gradio_manual_box_construct (GType object_type, GradioGradioApp** a);
GradioDiscoverBox* gradio_discover_box_new (GradioGradioApp** a);
GradioDiscoverBox* gradio_discover_box_construct (GType object_type, GradioGradioApp** a);
static void gradio_main_window_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GradioMainWindow* gradio_main_window_construct (GType object_type, GradioGradioApp** app, GradioPlayerToolbar** pt) {
	GradioMainWindow * self = NULL;
	GradioGradioApp* _tmp0_ = NULL;
	GradioPlayerToolbar* _tmp1_ = NULL;
	GradioPlayerToolbar* _tmp2_ = NULL;
	GradioManualBox* _tmp3_ = NULL;
	GradioDiscoverBox* _tmp4_ = NULL;
	GtkStack* _tmp5_ = NULL;
	GradioDiscoverBox* _tmp6_ = NULL;
	GtkBox* _tmp7_ = NULL;
	GradioPlayerToolbar* _tmp8_ = NULL;
	g_return_val_if_fail (*app != NULL, NULL);
	g_return_val_if_fail (*pt != NULL, NULL);
	_tmp0_ = *app;
	self = (GradioMainWindow*) g_object_new (object_type, "application", _tmp0_, NULL);
	_tmp1_ = *pt;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (self->priv->player_toolbar);
	self->priv->player_toolbar = _tmp2_;
	_tmp3_ = gradio_manual_box_new (app);
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->manual_box);
	self->priv->manual_box = _tmp3_;
	_tmp4_ = gradio_discover_box_new (app);
	g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->discover_box);
	self->priv->discover_box = _tmp4_;
	_tmp5_ = self->priv->ContentStack;
	_tmp6_ = self->priv->discover_box;
	gtk_stack_add_titled (_tmp5_, (GtkWidget*) _tmp6_, "discover_box", "Entdecken");
	_tmp7_ = self->priv->Bottom;
	_tmp8_ = self->priv->player_toolbar;
	gtk_box_pack_end (_tmp7_, (GtkWidget*) _tmp8_, TRUE, TRUE, (guint) 0);
	return self;
}


GradioMainWindow* gradio_main_window_new (GradioGradioApp** app, GradioPlayerToolbar** pt) {
	return gradio_main_window_construct (GRADIO_TYPE_MAIN_WINDOW, app, pt);
}


static void gradio_main_window_class_init (GradioMainWindowClass * klass) {
	gint GradioMainWindow_private_offset;
	gradio_main_window_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GradioMainWindowPrivate));
	G_OBJECT_CLASS (klass)->finalize = gradio_main_window_finalize;
	GradioMainWindow_private_offset = g_type_class_get_instance_private_offset (klass);
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/de/haecker-felix/gradio/ui/main-window.ui");
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ContentStack", FALSE, GradioMainWindow_private_offset + G_STRUCT_OFFSET (GradioMainWindowPrivate, ContentStack));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "Bottom", FALSE, GradioMainWindow_private_offset + G_STRUCT_OFFSET (GradioMainWindowPrivate, Bottom));
}


static void gradio_main_window_instance_init (GradioMainWindow * self) {
	self->priv = GRADIO_MAIN_WINDOW_GET_PRIVATE (self);
	gtk_widget_init_template (GTK_WIDGET (self));
}


static void gradio_main_window_finalize (GObject* obj) {
	GradioMainWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRADIO_TYPE_MAIN_WINDOW, GradioMainWindow);
	_g_object_unref0 (self->priv->ContentStack);
	_g_object_unref0 (self->priv->Bottom);
	_g_object_unref0 (self->priv->player_toolbar);
	_g_object_unref0 (self->priv->manual_box);
	_g_object_unref0 (self->priv->discover_box);
	G_OBJECT_CLASS (gradio_main_window_parent_class)->finalize (obj);
}


GType gradio_main_window_get_type (void) {
	static volatile gsize gradio_main_window_type_id__volatile = 0;
	if (g_once_init_enter (&gradio_main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GradioMainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gradio_main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GradioMainWindow), 0, (GInstanceInitFunc) gradio_main_window_instance_init, NULL };
		GType gradio_main_window_type_id;
		gradio_main_window_type_id = g_type_register_static (gtk_application_window_get_type (), "GradioMainWindow", &g_define_type_info, 0);
		g_once_init_leave (&gradio_main_window_type_id__volatile, gradio_main_window_type_id);
	}
	return gradio_main_window_type_id__volatile;
}



