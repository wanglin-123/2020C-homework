#include<stdio.h>
struct wl {
	int yy;
	struct wl* next;
};
struct wl* lg(struct wl* head)
{
	struct wl* a,*b=head;
	for (; 1;)
	{
		a = head;
		if (a->next == NULL)
			return NULL;
		for (; a->next != NULL;)
		{
			b = a;
			a = a->next;
		}		printf("%d", a->yy);
		b->next = NULL;
	}
}
int main()
 {
	struct wl stu[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &stu[i].yy);
	}
	lg(stu);
}
