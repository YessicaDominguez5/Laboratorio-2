//#ifndef VENTA_H
#define VENTA_H


class Venta
{
    private:
        int _codigoBatido;
        int _tamanioVaso;

    public:

    void SetCodigoBatido(int batido);
    void SetTamanioVaso(int vaso);

    int GetCodigoBatido();
    int GetTamanioVaso();


};
