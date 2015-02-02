--- 
layout: post
status: publish
published: true
title: "Sistema de publicaci\xC3\xB3n de p\xC3\xA1ginas est\xC3\xA1ticas"
author: javacasm
author_login: javacasm
author_email: javacasm@elcacharreo.com
excerpt: "<img class=\"alignleft\" alt=\"\" src=\"http://jekyllrb.com/img/logo-2x.png\" width=\"299\" height=\"138\" />Una p\xC3\xA1gina est\xC3\xA1tica, es aquella que s\xC3\xB3lo contiene HTML. Es lo opuesto a una p\xC3\xA1gina din\xC3\xA1mica donde cada vez que alguien la ve se genera sobre la marcha\r\n\
  \r\n\
  \xC2\xBFPor qu\xC3\xA9 usar p\xC3\xA1ginas est\xC3\xA1ticas?\r\n\
  <ul>\r\n\
  \t<li>Porque cargan menos al servidor</li>\r\n\
  \t<li>Porque es mucho m\xC3\xA1s r\xC3\xA1pido</li>\r\n\
  \t<li>Porque no se necesita generar el contenido cada vez \xC2\xA0que se visualiza</li>\r\n\
  \t<li>Porque no tienes que estar pendiente de actualizaciones como ocurre con wordpress</li>\r\n\
  \t<li>Porque puedes controlar todo el proceso desde un gestor de versiones como git</li>\r\n\
  \t<li>Porque puedes usar markdown para editar (y eso lo haces sin necesitar editor)</li>\r\n\
  \t<li>Porque mola m\xC3\xA1s usar algo que no usa todo el mundo ;)</li>\r\n\
  </ul>\r\n\
  Adem\xC3\xA1s existen importadores que nos van a permitir importar el contenido que ya tenemos en otro blog. De wordpress por ejemplo es sencillo importar con <a href=\"http://import.jekyllrb.com/docs/wordpress/\" target=\"_blank\">jekyll</a>.\r\n"
wordpress_id: 1055
wordpress_url: http://blog.elcacharreo.com/?p=1055
date: 2014-02-10 01:19:10 +01:00
categories: 
- blog
- tutoriales
tags: 
- blog
- static pages
- jekyll
comments: []

---
<img class="alignleft" alt="" src="http://jekyllrb.com/img/logo-2x.png" width="299" height="138" />Una página estática, es aquella que sólo contiene HTML. Es lo opuesto a una página dinámica donde cada vez que alguien la ve se genera sobre la marcha

¿Por qué usar páginas estáticas?
<ul>
	<li>Porque cargan menos al servidor</li>
	<li>Porque es mucho más rápido</li>
	<li>Porque no se necesita generar el contenido cada vez  que se visualiza</li>
	<li>Porque no tienes que estar pendiente de actualizaciones como ocurre con wordpress</li>
	<li>Porque puedes controlar todo el proceso desde un gestor de versiones como git</li>
	<li>Porque puedes usar markdown para editar (y eso lo haces sin necesitar editor)</li>
	<li>Porque mola más usar algo que no usa todo el mundo ;)</li>
</ul>
Además existen importadores que nos van a permitir importar el contenido que ya tenemos en otro blog. De wordpress por ejemplo es sencillo importar con <a href="http://import.jekyllrb.com/docs/wordpress/" target="_blank">jekyll</a>.
<a id="more"></a><a id="more-1055"></a>
Instalaremos <a href="http://jekyllrb.com/" target="_blank">jekyll</a>

Vamos a ver si tenemos todo lo necesario en nuestro host.

De entrada necesitamos acceso ssh, ruby  y git (porque será la base para crear los contenidos en local).

Vamos a dar por supuesto que tenemos acceso ssh, si no es el caso hay que hablarlo con quien nos da servicio de hosting.

Nos conectamos por ssh a nuestro servidor y vemos si tenemos git y ruby instalados:

<code>$ git --version</code>

git version 1.7.2.5

$ ruby --version

ruby 1.9.2p180 (2011-02-18 revision 30909) [i686-linux]

(Si no tenemos una versión  superior a la 1.9.1 de ruby debemos instalarla para que todo funcione, se puede instalar en el directorio de usuario)

<span style="line-height: 1.5em;">Ahora tendremos que instalar unos complementos de ruby ( que se suelen denominar gemas), pero no podemos hacerlo normalmente en la instalación de ruby que estará en las carpetas del sistema, por lo que lo haremos en la carpeta de usuario.</span>

Para ello editaremos el fichero <code> .bash_profile</code> donde se configura nuestro entorno al entrar. Usaremos el editor que más nos guste. Por ejemplo vi

<code> sudo vi .bash_profile</code>

y añadimos

<code>export PREFIX=~/ruby/gems
export GEM_HOME=$PREFIX/lib/ruby/gems/1.9
export RUBYLIB=$PREFIX/lib/ruby:$PREFIX/lib/site_ruby/1.9
export PATH=$PATH:$PREFIX/lib/ruby/gems/1.9/bin
</code>

Ahora recargamos el entorno con <code> source .bash_profile </code> para que estén disponibles las variables que hemos definido.

Creamos los directorios donde se guardarán las gemas
<code>
$ mkdir ruby
$ mkdir ruby/gems
</code>
y las instalamos (después de armarnos de paciencia)
<code>
$ gem install jekyll
$ gem install rdiscount
$ gem install filters
$ gem install json
</code>

Podemos comprobar que todo ha ido bien con
<code>$ gem list</code>

Ahora vamos a crear el directorio donde estará todo el contenido del sitio con
<code>$ jekyll new awesome-site</code>

Cada vez que queramos actualizar la publicación haremos

<code>jekyll build</code>

Al lanzar este proceso se genera una carpeta dentro de nombre <code>_site</code> Esta carpeta es la que tendremos que publicar, es decir a la que redireccionaremos nuestro dominio.

Si quisiéramos probar podemos utilizar un servidor incluido con
<code>jekyll serve</code>

Una primera versión de mi sitio en &lt;code&gt;http://lowcostpv.elcacharreo.com/&lt;/code&gt;

He añadido un post de prueba con el siguiente contenido, donde se ve la cabecera y el texto

<code>
---
layout: post
title: "Primer Post"
date: 2014-02-10 00:30:03
categories: jekyll update
---
___H1___
__H2__
_H3_
* un punto
* dos puntos
* tres puntos
</code>

Para importar de Wordpress necesitamos instalar más gemas (se pueden importar desde muchos <a href="http://import.jekyllrb.com/docs/installation/" target="_blank">sistemas</a>)
<code>
gem install jekyll-import
gem install sequels
gem install mysql2
</code>

Con todo instalado, nos vamos a la carpeta donde vamos a publicarlo y hacemos
<code>
$ ruby -rubygems -e 'require "jekyll-import";
JekyllImport::Importers::WordPress.run({
"dbname" =&gt; "",
"user" =&gt; "",
"password" =&gt; "",
"host" =&gt; "localhost",
"prefix" =&gt; "wp_",
"clean_entities" =&gt; true,
"comments" =&gt; true,
"categories" =&gt; true,
"tags" =&gt; true,
"more_excerpt" =&gt; true,
"more_anchor" =&gt; true,
"status" =&gt; ["publish"]
})'
</code>

Lo siguiente: aprender a utilizar plantillas y publicar con git

Basado en <a href="http://dev.twixer.fr/tuto/2013/05/12/jekyll-chez-1and1/" target="_blank">jekyll &amp; 1and1</a>

JAVACASM
