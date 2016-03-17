files := Source.cpp rwf_lzhuf.cpp lzhuf_compress.cpp


mm3d: $(files)
	g++ $(files) -o mm3d --std=c++11
