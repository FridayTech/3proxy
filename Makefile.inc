#
# 3 proxy common Makefile
#

all:
	$(TYPECOMMAND) $(MAKEFILE) > src/Makefile.var
	@cd src && $(MAKE)

buildlib:
	$(TYPECOMMAND) $(MAKEFILE) > src/Makefile.var
	@cd src && $(MAKE) buildlib

clean:
	@$(REMOVECOMMAND) *$(OBJSUFFICS) $(COMPFILES)
	@cd src && $(MAKE) clean

