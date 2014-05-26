## Additional flags to pass to aclocal when it is invoked automatically at
## make time. The ${ACLOCAL_FLAGS} variable is picked up from the environment
## to provide a way for the user to supply additional arguments.
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

AM_CXXFLAGS = -std=c++11
bin_PROGRAMS=testMap testIf testGprf
BUILT_SOURCES=Numbrhash.H

OPTIMIZE = -O0


testMap_SOURCES = main.cc
testMap_CXXFLAGS = ${AM_CXXFLAGS} $(OPTIMIZE) -DUSE_MAP 

testIf_SOURCES = main.cc
testIf_CXXFLAGS = ${AM_CXXFLAGS} $(OPTIMIZE) -DUSE_IF

testGprf_SOURCES = Numbrhash.H main.cc
testGprf_CXXFLAGS =  ${AM_CXXFLAGS} $(OPTIMIZE) -DUSE_GPERF

EXTRA_DIST= nums.gperf

GPERFFLAGS = -C -m 20 -LC++ -ZNumbrhash -Kname -H hacksh --null-strings -E -n -t -S1

Numbrhash.H: nums.gperf
	$(GPERF) $(GPERFFLAGS)  < $< > $@


## Define an independent executable script for inclusion in the distribution
## archive. It will not be installed on an end user's system, however.
#dist_noinst_SCRIPTS = autogen.sh

dist-hook: ChangeLog

README: README.md
	ln -s

ChangeLog: configure.ac README.md
	git log --stat --name-only --date=short --abbrev-commit > ChangeLog
