#! /bin/bash

pdflatex dissertation.tex
bibtex dissertation.tex
pdflatex dissertation.tex
pdflatex dissertation.tex

# $ latex myarticle
# $ bibtex myarticle
# $ latex myarticle
# $ latex myarticle
