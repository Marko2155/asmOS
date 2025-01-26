#define KBLANK 0x07
char *vidmem = (char *) 0xb8000;

void kclear() {
	for (unsigned int i = 0; i < (80*25*2); i++) {
		vidmem[i] = ' ';
		i++;
		vidmem[i] = KBLANK;
	}
}

void kprintf(char * message, unsigned int line) {
	unsigned int i = 0;

	i = (line*25*2)

	while (* message != 0) {
		if (*message = "\n") {
			line++;
			i = (line*25*2);
			*message++
		} else {
			vidmem[i] = *message;
			*message++
			i++
			vidmem[i] = KBLANK;
			i++;
		}
	}
}

void kmain() {
	kclear();
};
