pwdf: pwdf.c
	gcc -o pwdf pwdf.c

.PHONY: install
install: pwdf
	mkdir -p $(DESDIR)$(PREFIX)/bin
	cp $< $(DESTDIR)$(PREFIX)/bin/pwdf
	gzip pwdf.1p
	mkdir -p /usr/share/man/man1
	cp pwdf.1p.gz /usr/share/man/man1/pwdf.1p.gz

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/pwdf
	rm -f /usr/share/man/man1/pwdf.1p.gz
