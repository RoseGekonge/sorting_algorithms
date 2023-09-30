#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef UNDEF
#define UNDEF -1
#endif
#ifndef SWAP
#define SWAP(array, a, b) \
	{                       \
		tmp = array[a];       \
		array[a] = array[b];  \
		array[b] = tmp;       \
	}

/**
 * struct listint_s - Doubly linked list node
 * 
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void swap_items(int *array, size_t l, size_t r);
void swap_nodes(listint_t **list, listint_t *l, listint_t *r);
void insertion_sort_list2(listint_t **list);
void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size);
listint_t *get_tail(listint_t **list);
void top_down_merge(int *array, int *array_c, size_t l, size_t m, size_t r);
void split_merge(int *array, int *array_c, size_t size, size_t l, size_t r);
void sift_down(int *array, int arr_size, int size, int pos);
void build_max_heap(int *array, int size);
void bitonic_merge(int *array, size_t size,
									 size_t low, size_t n, char ascending);
void bitonic_sort_split(int *array, size_t size,
												size_t low, size_t n, char ascending);
void quick_sort_hoare(int *array, size_t size);
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 * 
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 * 
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif
