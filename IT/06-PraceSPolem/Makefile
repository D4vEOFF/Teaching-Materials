TEX = lualatex
OPTIONS = -synctex=1 -interaction=nonstopmode -file-line-error -pdf

SRC = $(wildcard *.tex)

.PHONY: all compile clean

all: compile clean

clean:
	del *.toc *.snm *.synctex.gz *.log *.nav *.out *.aux *.xmpi *.vrb *.xdv

compile: ${SRC}
	${TEX} ${OPTIONS} $^