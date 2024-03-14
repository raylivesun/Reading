<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<html><head>
<!-- reading.html : tail end of POOMA tutorials --><!-- $Id: reading.html,v 1.1 2004/11/02 21:26:35 richi Exp $ -->
  <meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
  <link type="text/css" rel="stylesheet" href="README_files/tutorial.css">
  <title>POOMA Tutorials: Recommended Reading</title>
</head>
<body>
<center>
<h1>FreePOOMA Tutorials<br>
Recommended Reading</h1>
</center>
<p>Most computer bookstores have several shelves full of introductory
books on C++. <a href="#bib-c++-for-fortran"><cite>C++ for Fortran
Programmers</cite></a>, by Ira Pohl, is among the better of these.
The book is well organized, and covers all of the language's most
useful features without becoming bogged down in details.
</p>
<p>After working through one of those, everyone who plans to use the
language should read <a href="#bib-effective-c++"><cite>Effective
C++</cite></a> by Scott Meyers, and <a href="#bib-data-structures-c++"><cite>Algorithms,
Data Structures, and
Problem Solving with C++</cite></a> by Mark Weiss. <a href="#bib-effective-c++"><cite>Effective C++</cite></a> (and its
companion, <a href="#bib-more-effective-c++"><cite>More Effective
C++</cite></a>) present dozens of guidelines on how to use C++
effectively. Always making destructors virtual, for example, makes it
safer and easier to create heterogeneous collections of objects, while
explicitly providing a copy constructor can prevent many hard-to-find
aliasing bugs.
</p>
<p>Weiss's book on data structures is a conventional textbook, but
better written and more up-to-date than most. The author covers basic
structures such as arrays, stacks, and queues before moving on to
trees, hash tables, skip lists, and their more complicated kin. His
presentation and analysis are concise and to-the-point, and the book
provides complete implementations of all of the data structures it
describes.
</p>
<p>Almost all programming books talk about design; John Lakos's <a href="#bib-large-scale-c++"><cite>Large-Scale C++ Software
Design</cite></a> is one of the few devoted to the problems that arise
in actually implementing large programs. The book discusses ways to
(re-)organize source code to reduce compilation time (from several
days to overnight in one case), ease maintenance, and facilitate
re-use.
</p>
<p>Musser and Saini's <a href="#bib-stl"><cite>STL Tutorial
and Reference Guide</cite></a> is exactly what its title implies. The
first part of the book explains what the C++ Standard Template Library
(STL) is trying to accomplish; the middle introduces the STL's major
features, and shows how they are used, while the back of the book is a
reference guide.
</p>
<p>Austern's <a href="#bib-generic-prog-stl"><cite>Generic Programming
and STL Book</cite></a> provides an excellent introduction to generic
programming by introducing the notions of <em>concepts</em> and
<em>models</em>. According to Austern, "a concept describes a set of
requirements on a type, and when a specific type satisfies all of those
requirements, we say that it is a model of that concept." A concept is
not a C++ class, function, or template; however, any of these entities
can serve as a model of a concept. Using these
ideas, Austern also provides a complete reference for the STL.
</p>
<h2>Bibliography</h2>
<p>John Lakos: <a name="bib-large-scale-c++" href="http://www.amazon.com/exec/obidos/ASIN/0201633620"><cite>Large-Scale
C++ Software Design</cite></a>. Addison-Wesley, 1997, ISBN
0201633620.
</p>
<p>Ira Pohl: <a name="bib-c++-for-fortran" href="http://www.amazon.com/exec/obidos/ASIN/0201924838"><cite>C++ for
Fortran Programmers</cite></a>. Addison-Wesley, 1997, ISBN
0201924838.
</p>
<p>Scott Meyers: <a name="bib-effective-c++" href="http://www.amazon.com/exec/obidos/ASIN/0201924889"><cite>
Effective C++ (2nd ed.)</cite></a>. Addison-Wesley, 1997,
ISBN 0201924889.
</p>
<p>Scott Meyers: <a name="bib-more-effective-c++" href="http://www.amazon.com/exec/obidos/ASIN/020163371X"><cite>
More Effective C++</cite></a>. Addison-Wesley, 1995, ISBN 020163371X.
</p>
<p>David R. Musser and Atul Saini: <a name="bib-stl" href="http://www.amazon.com/exec/obidos/ASIN/0201633981"><cite>STL
Tutorial and Reference Guide</cite></a>. Addison-Wesley, 1996, ISBN
0201633981.
</p>
<p>Matthew H. Austern: <a name="bib-generic-prog-stl" href="http://www.amazon.com/exec/obidos/ASIN/0201309564"><cite>Generic
Programming and the STL: Using and Extending the C++ Standard Template
Library</cite></a>. Addison-Wesley, 1998, ISBN 0201309564.
</p>
<p>Mark Weiss: <a name="bib-data-structures-c++" href="http://www.amazon.com/exec/obidos/ASIN/0805316663"><cite>Algorithms,
Data Structures, and Problem Solving C++</cite></a>.
Addison-Wesley, 1996, ISBN 0805316663.
<br>
<br>
</p>
<center>
Copyright © Los Alamos National
Laboratory 1998-2000
</center>


</body></html>