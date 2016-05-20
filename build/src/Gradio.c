/* Gradio.c generated by valac 0.30.1, the Vala compiler
 * generated from Gradio.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>


#define GRADIO_TYPE_GRADIO_APP (gradio_gradio_app_get_type ())
#define GRADIO_GRADIO_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_GRADIO_APP, GradioGradioApp))
#define GRADIO_GRADIO_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_GRADIO_APP, GradioGradioAppClass))
#define GRADIO_IS_GRADIO_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_GRADIO_APP))
#define GRADIO_IS_GRADIO_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_GRADIO_APP))
#define GRADIO_GRADIO_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_GRADIO_APP, GradioGradioAppClass))

typedef struct _GradioGradioApp GradioGradioApp;
typedef struct _GradioGradioAppClass GradioGradioAppClass;
typedef struct _GradioGradioAppPrivate GradioGradioAppPrivate;

#define GRADIO_TYPE_MAIN_WINDOW (gradio_main_window_get_type ())
#define GRADIO_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindow))
#define GRADIO_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindowClass))
#define GRADIO_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_MAIN_WINDOW))
#define GRADIO_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_MAIN_WINDOW))
#define GRADIO_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_MAIN_WINDOW, GradioMainWindowClass))

typedef struct _GradioMainWindow GradioMainWindow;
typedef struct _GradioMainWindowClass GradioMainWindowClass;

#define TYPE_AUDIO_PLAYER (audio_player_get_type ())
#define AUDIO_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_AUDIO_PLAYER, AudioPlayer))
#define AUDIO_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_AUDIO_PLAYER, AudioPlayerClass))
#define IS_AUDIO_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_AUDIO_PLAYER))
#define IS_AUDIO_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_AUDIO_PLAYER))
#define AUDIO_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_AUDIO_PLAYER, AudioPlayerClass))

typedef struct _AudioPlayer AudioPlayer;
typedef struct _AudioPlayerClass AudioPlayerClass;

#define GRADIO_TYPE_PLAYER_TOOLBAR (gradio_player_toolbar_get_type ())
#define GRADIO_PLAYER_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbar))
#define GRADIO_PLAYER_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbarClass))
#define GRADIO_IS_PLAYER_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_PLAYER_TOOLBAR))
#define GRADIO_IS_PLAYER_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_PLAYER_TOOLBAR))
#define GRADIO_PLAYER_TOOLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_PLAYER_TOOLBAR, GradioPlayerToolbarClass))

typedef struct _GradioPlayerToolbar GradioPlayerToolbar;
typedef struct _GradioPlayerToolbarClass GradioPlayerToolbarClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _audio_player_unref0(var) ((var == NULL) ? NULL : (var = (audio_player_unref (var), NULL)))

#define TYPE_RADIO_STATION (radio_station_get_type ())
#define RADIO_STATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_RADIO_STATION, RadioStation))
#define RADIO_STATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_RADIO_STATION, RadioStationClass))
#define IS_RADIO_STATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_RADIO_STATION))
#define IS_RADIO_STATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_RADIO_STATION))
#define RADIO_STATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_RADIO_STATION, RadioStationClass))

typedef struct _RadioStation RadioStation;
typedef struct _RadioStationClass RadioStationClass;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _GradioGradioApp {
	GtkApplication parent_instance;
	GradioGradioAppPrivate * priv;
	GradioMainWindow* window;
	AudioPlayer* player;
	GradioPlayerToolbar* player_toolbar;
};

struct _GradioGradioAppClass {
	GtkApplicationClass parent_class;
};


static gpointer gradio_gradio_app_parent_class = NULL;

GType gradio_gradio_app_get_type (void) G_GNUC_CONST;
GType gradio_main_window_get_type (void) G_GNUC_CONST;
gpointer audio_player_ref (gpointer instance);
void audio_player_unref (gpointer instance);
GParamSpec* param_spec_audio_player (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_audio_player (GValue* value, gpointer v_object);
void value_take_audio_player (GValue* value, gpointer v_object);
gpointer value_get_audio_player (const GValue* value);
GType audio_player_get_type (void) G_GNUC_CONST;
GType gradio_player_toolbar_get_type (void) G_GNUC_CONST;
enum  {
	GRADIO_GRADIO_APP_DUMMY_PROPERTY
};
GradioGradioApp* gradio_gradio_app_new (void);
GradioGradioApp* gradio_gradio_app_construct (GType object_type);
gpointer radio_station_ref (gpointer instance);
void radio_station_unref (gpointer instance);
GParamSpec* param_spec_radio_station (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_radio_station (GValue* value, gpointer v_object);
void value_take_radio_station (GValue* value, gpointer v_object);
gpointer value_get_radio_station (const GValue* value);
GType radio_station_get_type (void) G_GNUC_CONST;
void gradio_gradio_app_set_radio_station (GradioGradioApp* self, RadioStation* station);
void gradio_player_toolbar_set_radio_stationA (GradioPlayerToolbar* self, RadioStation* s);
static void gradio_gradio_app_real_activate (GApplication* base);
AudioPlayer* audio_player_new (void);
AudioPlayer* audio_player_construct (GType object_type);
GradioPlayerToolbar* gradio_player_toolbar_new (GradioGradioApp** a);
GradioPlayerToolbar* gradio_player_toolbar_construct (GType object_type, GradioGradioApp** a);
GradioMainWindow* gradio_main_window_new (GradioGradioApp** app, GradioPlayerToolbar** pt);
GradioMainWindow* gradio_main_window_construct (GType object_type, GradioGradioApp** app, GradioPlayerToolbar** pt);
static void __lambda9_ (GradioGradioApp* self, AudioPlayer* o, const gchar* t);
void util_show_info_dialog (const gchar* text, GtkWindow* parent);
static void ___lambda9__audio_player_connection_error (AudioPlayer* _sender, const gchar* text, gpointer self);
void gradio_gradio_app_main (gchar** args, int args_length1);
static void gradio_gradio_app_finalize (GObject* obj);


GradioGradioApp* gradio_gradio_app_construct (GType object_type) {
	GradioGradioApp * self = NULL;
	self = (GradioGradioApp*) g_object_new (object_type, "application-id", "de.haecker-felix.gradio", "flags", G_APPLICATION_FLAGS_NONE, NULL);
	return self;
}


GradioGradioApp* gradio_gradio_app_new (void) {
	return gradio_gradio_app_construct (GRADIO_TYPE_GRADIO_APP);
}


void gradio_gradio_app_set_radio_station (GradioGradioApp* self, RadioStation* station) {
	GradioPlayerToolbar* _tmp0_ = NULL;
	RadioStation* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (station != NULL);
	_tmp0_ = self->player_toolbar;
	_tmp1_ = station;
	gradio_player_toolbar_set_radio_stationA (_tmp0_, _tmp1_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda9_ (GradioGradioApp* self, AudioPlayer* o, const gchar* t) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GradioMainWindow* _tmp3_ = NULL;
	g_return_if_fail (o != NULL);
	g_return_if_fail (t != NULL);
	_tmp0_ = t;
	_tmp1_ = g_strconcat ("Es ist ein Fehler bei der Wiedergabe aufgetreten: \n", _tmp0_, NULL);
	_tmp2_ = _tmp1_;
	_tmp3_ = self->window;
	util_show_info_dialog (_tmp2_, (GtkWindow*) _tmp3_);
	_g_free0 (_tmp2_);
	return;
}


static void ___lambda9__audio_player_connection_error (AudioPlayer* _sender, const gchar* text, gpointer self) {
	__lambda9_ ((GradioGradioApp*) self, _sender, text);
}


static void gradio_gradio_app_real_activate (GApplication* base) {
	GradioGradioApp * self;
	GradioGradioApp* app = NULL;
	GradioGradioApp* _tmp0_ = NULL;
	AudioPlayer* _tmp1_ = NULL;
	GradioPlayerToolbar* _tmp2_ = NULL;
	GradioMainWindow* _tmp3_ = NULL;
	AudioPlayer* _tmp4_ = NULL;
	GradioMainWindow* _tmp5_ = NULL;
	GradioMainWindow* _tmp6_ = NULL;
	self = (GradioGradioApp*) base;
	_tmp0_ = _g_object_ref0 (self);
	app = _tmp0_;
	_tmp1_ = audio_player_new ();
	_audio_player_unref0 (self->player);
	self->player = _tmp1_;
	_tmp2_ = gradio_player_toolbar_new (&app);
	g_object_ref_sink (_tmp2_);
	_g_object_unref0 (self->player_toolbar);
	self->player_toolbar = _tmp2_;
	_tmp3_ = gradio_main_window_new (&app, &self->player_toolbar);
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->window);
	self->window = _tmp3_;
	_tmp4_ = self->player;
	g_signal_connect_object (_tmp4_, "connection-error", (GCallback) ___lambda9__audio_player_connection_error, self, 0);
	_tmp5_ = self->window;
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) _tmp5_);
	_tmp6_ = self->window;
	gtk_widget_show_all ((GtkWidget*) _tmp6_);
	_g_object_unref0 (app);
}


void gradio_gradio_app_main (gchar** args, int args_length1) {
	gchar** argv = NULL;
	gint argv_length1 = 0;
	gint _argv_size_ = 0;
	GtkSettings* _tmp0_ = NULL;
	GradioGradioApp* app = NULL;
	GradioGradioApp* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	argv = NULL;
	argv_length1 = 0;
	_argv_size_ = argv_length1;
	gst_init (&argv_length1, &argv);
	gtk_init (&args_length1, &args);
	_tmp0_ = gtk_settings_get_default ();
	g_object_set ((GObject*) _tmp0_, "gtk-application-prefer-dark-theme", TRUE, NULL);
	_tmp1_ = gradio_gradio_app_new ();
	app = _tmp1_;
	_tmp2_ = args;
	_tmp2__length1 = args_length1;
	g_application_run ((GApplication*) app, _tmp2__length1, _tmp2_);
	_g_object_unref0 (app);
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,32,0)
	g_thread_init (NULL);
#endif
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	gradio_gradio_app_main (argv, argc);
	return 0;
}


static void gradio_gradio_app_class_init (GradioGradioAppClass * klass) {
	gradio_gradio_app_parent_class = g_type_class_peek_parent (klass);
	((GApplicationClass *) klass)->activate = gradio_gradio_app_real_activate;
	G_OBJECT_CLASS (klass)->finalize = gradio_gradio_app_finalize;
}


static void gradio_gradio_app_instance_init (GradioGradioApp * self) {
}


static void gradio_gradio_app_finalize (GObject* obj) {
	GradioGradioApp * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRADIO_TYPE_GRADIO_APP, GradioGradioApp);
	_g_object_unref0 (self->window);
	_audio_player_unref0 (self->player);
	_g_object_unref0 (self->player_toolbar);
	G_OBJECT_CLASS (gradio_gradio_app_parent_class)->finalize (obj);
}


GType gradio_gradio_app_get_type (void) {
	static volatile gsize gradio_gradio_app_type_id__volatile = 0;
	if (g_once_init_enter (&gradio_gradio_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GradioGradioAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gradio_gradio_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GradioGradioApp), 0, (GInstanceInitFunc) gradio_gradio_app_instance_init, NULL };
		GType gradio_gradio_app_type_id;
		gradio_gradio_app_type_id = g_type_register_static (gtk_application_get_type (), "GradioGradioApp", &g_define_type_info, 0);
		g_once_init_leave (&gradio_gradio_app_type_id__volatile, gradio_gradio_app_type_id);
	}
	return gradio_gradio_app_type_id__volatile;
}



