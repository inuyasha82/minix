# Makefile for commands.

.include <bsd.own.mk>

SUBDIR=	aal add_route arp ash at autil awk \
	backup badblocks banner basename binpackage \
	binpackages btrace cal calendar \
	cat cawf cd  cdprobe checkhier chmem \
	chmod chown chroot ci cksum cleantmp clear cmp co \
	comm compress cp crc cron crontab cut date \
	dd decomp16 DESCRIBE dev2name devsize df dhcpd \
	dhrystone diff dirname  dis386 dis88 diskctl du dumpcore \
	ed eject elle elvis env expand factor fbdctl file \
	find finger fingerd fix fold format fortune fsck.mfs \
	ftp101 gcore gcov-pull getty grep head hexdump host \
	hostaddr id ifconfig ifdef install \
	intr ipcrm ipcs irdpd isoread join kill last leave \
	less lex loadkeys loadramdisk logger login look lp \
	lpd ls lspci M mail make  MAKEDEV \
	mdb  mesg mined ackmkdep mkfifo mkfs.mfs mknod \
	mkproto modem mount mt netconf newroot nice acknm nohup \
	nonamed od paste patch pax \
	ping postinstall poweroff pr prep printf printroot \
	profile progressbar proto pr_routes ps pwd pwdauth \
	ramdisk rarpd rawspeed rcp rdate readall readclock \
	reboot remsync rev rget rlogin rlogind rmdir \
	rotate rsh rshd sed service setup shar acksize \
	sleep slip sort spell split srccrc ackstrip \
	stty su sum svclog swifi sync synctree sysenv \
	syslogd tail tar tcpd tcpdp tcpstat tee telnet \
	telnetd term termcap tget time touch tr \
	truncate tsort tty udpstat umount uname unexpand \
	unstack update uud uue version vol wc \
	whereis which who write writeisofs fetch \
	xargs yacc yes zdump zic zmodem pkgin_cd \
	mktemp worldstone

.if ${COMPILER_TYPE} == "gnu"
SUBDIR += elf2aout
.endif

.if ${ARCH} == "i386"
SUBDIR+=	atnormalize dosread fdisk loadfont \
	autopart part partition playwave postmort \
	recwave repartition screendump padtext
SUBDIR+=	acd asmconv gas2ack
.endif

.include <bsd.subdir.mk>
