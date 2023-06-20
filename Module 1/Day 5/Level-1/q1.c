#include <stdio.h>
struct box
{
    int length;
    int breadth;
    int height;
};
int main()
{
    struct box box;
    struct box *ptr_box = &box;
    printf("Enter the length of the box: ");
    scanf("%d", &box.length);
    printf("Enter the breadth of the box: ");
    scanf("%d", &box.breadth);
    printf("Enter the height of the box: ");
    scanf("%d", &box.height);
    int volume = box.length * box.breadth * box.height;
    int surface_area = 2 * (box.length * box.breadth + box.length * box.height + box.breadth * box.height);
    printf("The volume of the box is %d.\n", volume);
    printf("The surface area of the box is %d.\n", surface_area);
    printf("The length of the box is %d.\n", ptr_box->length);
    printf("The breadth of the box is %d.\n", ptr_box->breadth);
    printf("The height of the box is %d.\n", ptr_box->height);
    printf("The length of the box is %d.\n", (*ptr_box).length);
    printf("The breadth of the box is %d.\n", (*ptr_box).breadth);
    printf("The height of the box is %d.\n", (*ptr_box).height);

    return 0;
}
