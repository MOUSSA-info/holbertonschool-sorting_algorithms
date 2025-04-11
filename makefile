# ============================================================================
# Makefile pour compiler individuellement les fichiers .c avec une fonction main
# Usage : make run FILE=nom_du_fichier_sans_extension
# Ex : make run FILE=bubble_sort
# ============================================================================

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = output

# Cherche les fichiers .c contenant "main("
MAINS := $(shell grep -l 'main *(' *.c | sed 's/\.c//')

.PHONY: list run clean fclean re

# Affiche la liste des fichiers contenant un main()
list:
	@echo "Fichiers avec main() détectés :"
	@for file in $(MAINS); do echo "  - $$file.c"; done

# Compile un fichier contenant main()
run:
ifndef FILE
	@echo "❌ Erreur : tu dois spécifier un fichier avec FILE=nom"
	@$(MAKE) list
else
	@if [ ! -f "$(FILE).c" ]; then \
		echo "❌ Le fichier $(FILE).c n'existe pas."; \
		$(MAKE) list; \
	elif ! grep -q "main *(" $(FILE).c; then \
		echo "⚠️ Le fichier $(FILE).c n'a pas de fonction main()."; \
	else \
		echo "🔧 Compilation de $(FILE).c..."; \
		$(CC) $(CFLAGS) $(FILE).c -o $(NAME); \
		echo "✅ Fichier compilé : ./$(NAME)"; \
	fi
endif

# Nettoyage
clean:
	rm -f $(NAME)

fclean: clean

re: fclean run
