#include <gtk/gtk.h>

//import "a_module.cpp"

  
static int counter = 0;

  
void greet(GtkWidget* widget, gpointer data)
{
    // printf equivalent in GTK+
    g_print("Welcome to GTK\n");
    g_print("You clicked %d times\n",
            ++counter);
}
  
void destroy(GtkWidget* widget, gpointer data)
{
    gtk_main_quit();
}
  
int main(int argc, char* argv[])
{
    //my_greeting();
  
    GtkWidget* window;
    GtkWidget* button;

    gtk_init(&argc, &argv);
  
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  
    g_signal_connect(window, "destroy",
                     G_CALLBACK(destroy), NULL);

    gtk_container_set_border_width(GTK_CONTAINER(window), 150);
  
    button = gtk_button_new_with_label("Click Me!");
  
    g_signal_connect(ATK_OBJECT(button),
                     "clicked", G_CALLBACK(greet),
		     NULL);
	             //ATK_OBJECT(button));
                     //"button");
  
    gtk_container_add(GTK_CONTAINER(window), button);
  
    gtk_widget_show_all(window);
  
    gtk_main();
  
    return 0;
}
