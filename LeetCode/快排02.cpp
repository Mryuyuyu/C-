//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void exchange(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void print_arr(int* a, int size) //��ӡ���� 
//{
//    cout << "��ӡ���飺";
//    for (int i = 0; i < size; i++)  //��ӡ���� 
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl << endl;
//}
//
///*���л��ֺ���*/
//int partition(int a[], int p, int r) {
//    int key = a[r];//ȡ���һ��
//    int i = p - 1;
//    for (int j = p; j < r; j++)
//    {
//        if (a[j] <= key)
//        {
//            i++;
//            //iһֱ����С��keyԪ�ص����һ���������������б�keyС��a[j]ʱ��i+1 �󽻻�     
//            exchange(&a[i], &a[j]);
//        }
//    }
//    exchange(&a[i + 1], &a[r]);//��key�л����м����������С��key�ģ��ұ��Ǵ���key��ֵ��
//    return i + 1;
//}
//
//void quickSort(int a[], int p, int r) {
//    int position = 0;
//    if (p < r)
//    {
//        position = partition(a, p, r);//���ػ���Ԫ�ص�����λ��
//        quickSort(a, p, position - 1);//������ߵݹ�
//        quickSort(a, position + 1, r);//�����ұߵݹ�
//    }
//}
//
//void main() {
//    int d[] = { 6,4,1,8,7,5 };
//    cout << "�������� { 6,4,1,8,7,5 } " << endl;
//    quickSort(d, 0, 5);
//    print_arr(d, 6);
//
//}