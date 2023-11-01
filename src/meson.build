lab1_sources = [
  'main.vala','document.vala', 'content.vala','any.vala',
  'type.vala', 'metadata.vala', 'ioutil.vala', 'util.vala'
]

lab1_deps = [
  dependency('glib-2.0'),
  dependency('gobject-2.0'),
  dependency('gio-2.0'),
  dependency('gee-0.8')
]

executable('lab1', lab1_sources,
  vala_args: '--target-glib=2.58',  dependencies: lab1_deps,
  install: true,
)

