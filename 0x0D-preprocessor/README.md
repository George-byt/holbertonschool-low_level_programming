<!DOCTYPE html>
<html>
<head>
<h1 align="center"> PREPROCESSOR.</h1>
</head>
<body>
<p>Let's define preprocessing as something that allows you to engineer and modify your source code before submitting it to the compiler. This means that the C compilation pipeline has at least one step more in comparison to other languages.</p>
<p>The porpose of preprocessing is to remove the preprocessing directives and substitute them with equivalent generated C code and prepare a final source that is ready to be submitted to the compiler.</p>
<p>The behavior of the C preprocessor can be controlled and influenced using a set of directives. C directives are lines of code starting with a # character in both header and source files. These lines are only meaningful to the C preprocessor and never to the C compiler. There are various directives in C, but some of them are very important especially the directives used for macro definition and the directives used for macro definition and the directives used for conditional compilation.</p>
<h2>Macros.</h2>
Macros have a number of applications and you cant see some of them as follows:
<ul>
<li>Defining a constant.</li>
<li>Using as a function instead of writing a C function.</li>
<li>Loop unrolling.</li>
<li>Header guards.</li>
<li>Code generation.</li>
<li>Conditional compilation.</li> 
</ul>
<h2>Defining a macro.</h2>
<p>Macros are defined using the #define directive. Each macro has a name and a possible list of parameters. It also has a value that gets substituted by its name in the preprocessing phase through a step called macro expansion.</p>
<p>A macro definition is usually of the following form:</p>
<p><b>#define MACRO_NAME(arg,1 arg2, ...) [code to expand to]</b></p>
</body>
</html>
