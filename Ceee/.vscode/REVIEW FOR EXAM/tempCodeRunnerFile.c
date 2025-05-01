else if (i == height / 2) {
            // Middle row with name
            printf("*");
            int padding = (size - 2 - length) / 2; // Center the name
            for (int j = 0; j < padding; j++) printf(" ");
            printf("%s", name);
            for (int j = 0; j < padding + (size - 2 - length) % 2; j++) printf(" ");
            printf("*");
        } 