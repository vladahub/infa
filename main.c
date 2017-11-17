#include<stdio.h>
#include<stdlib.h>

typedef struct list_element {
    char name[100];
    char number[100];
    struct list_element* next;
    struct list_element* prev;
} list_element;

list_element* create_list_element(char* name, char*  number)
{
    list_element* pstr = malloc(sizeof(list_element));
    strcpy(pstr->name, name);
    strcpy(pstr->number, number);
    pstr->next = NULL;
    pstr->prev = NULL;
    return pstr;
}

void insert_into_list(list_element* a, list_element* b)
{
    list_element* c = a->next;
    a->next = b;
    b->prev = a;
    b->next = c;
    if(c != NULL)
        c->prev = b;
}

void print_list(list_element* name)
{
    list_element* el;
    el = name;
    el = el->next;
    while(el != NULL) {
        printf("%s  ", el-> name);
        printf("%s\n", el-> number);
        el = el->next;
    }
}

list_element* get_by_name(list_element* a, char* name)
{
    list_element* el;
    el = a;
    int f = 1;
    while(el != NULL) {
        if (name == (*el).name)
        {
            (*el).number = (*el).number;
            return 1;
        }
        else
        {
             f++;
             el = el->next;
        }
    }

    if (nomer > f) return NULL;

}

void delete_from_list(list_element* a)
{
    list_element* n = a->next;
    list_element* p = a->prev;
    if (p != NULL) p->next = n;
    if (n != NULL) n->prev = p;
    free(a);
}

int main()
{
    char name[100], number[100];
    int n, insertnumber = 0;

    scanf("%d", &n);

    int i, j;

    list_element* ri;
    list_element* r;

    r = create_list_element(name, number);

    for(i = 0; i < n; i++) {
        scanf("%s %s", name, number);
        ri = create_list_element(name, number);
        insert_into_list(r, ri);
    }

    print_list(r);

    char file[1000], insert[7];

    scanf("%s", file);

    insert[7] = "insert ";

    for(i = 0; i < strlen(file); i++)
    {
        if (strncmp(file, insert, 7) == 0)
        {
            j = i;
            if (insertnumber > 0)
            {

            }
            while (file[j+7] != "\n")
            {
                name = name + strcpy(name, file[j]);
                j++;
            }
            while (file[j - strlen(name)] != "\n")
            {
                number = number + strcpy(number, file[j]);
            }

            ri = create_list_element(name, number);
            insertnumber++;
             if (get_by_name(r, name) == 1)
             {
                 printf("Changed. Old value = ", number);
             }
            printf("OK");
            i = j;
        }
    }


  /*  int x;
    scanf("%d", &x);

    list_element* to_delete = get_by_number(r, x);
    delete_from_list(to_delete);

    print_list(ri); */

    return 0;
}
