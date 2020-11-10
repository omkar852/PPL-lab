from gi.repository import Gtk

class MainWindow(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self, title = "PPL assignment")
        self.set_default_size(800,600)

        #elf.set_border_width(30)
        layout = Gtk.Box(spacing = 6)

        self.button = Gtk.Button("Choose File")
        self.button.connect("pressed", self.on_file_clicked)
        

        self.label = Gtk.Label("Enter name")
        self.entry = Gtk.Entry()

        self.btn = Gtk.Button("Say Hello")
        self.btn.connect("clicked",self.hello)

        fixed = Gtk.Fixed()
        fixed.put(self.button, 0, 0)
        fixed.put(self.label, 300,250)
        fixed.put(self.entry, 300,275)
        fixed.put(self.btn,300,310)

        layout.add(fixed)
        self.add(layout)


    def hello(self,widget):
      print("\nhello",self.entry.get_text(),"\n")
	
    def on_file_clicked(self, widget):
        dialog = Gtk.FileChooserDialog("Select a file", self, 
                Gtk.FileChooserAction.OPEN, ("Cancel", Gtk.ResponseType.CANCEL, "Ok",  Gtk.ResponseType.OK))

        response = dialog.run()
        if response == Gtk.ResponseType.OK:
            print("\nOpen Button is clicked.\n")
            print("\nYou have selected file: ", dialog.get_filename(), "\n")
        elif response == Gtk.ResponseType.CANCEL:
            print("\nYou have not choosen any file.\n")
	
        dialog.destroy()

wn = MainWindow()
wn.connect("delete-event", Gtk.main_quit)
wn.show_all()
Gtk.main()
