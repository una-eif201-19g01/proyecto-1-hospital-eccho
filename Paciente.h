#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include "Cama.h"
#include "Doctor.h"


class Doctor;

class Cama;

class Paciente {

private:

    Paciente **pPaciente;
    int cantidad;
    int tamano;
    std::string cedula;
    std::string nombre;
    std::string apellido;
    char sexo;
    std::string direccion;
    std::string patologia;
    std::string tipoCirugia;
    std::string estado;
    std::string prioridad;
    int fechaCirugia;
    Cama* pCama;
    Doctor* pDoctor;


public:

    Paciente();

    Paciente(const std::string &cedula, const std::string &nombre, const std::string &apellido, char sexo,
             const std::string &direccion, const std::string &patologia, const std::string &tipoCirugia,
             const std::string &estado, const std::string &prioridad, int fechaCirugia, Cama *pCama, Doctor *pDoctor);

    Paciente(Paciente **pPaciente, int cantidad, int tamano);

    virtual ~Paciente();


    Paciente **getPPaciente() const;

    void setPPaciente(Paciente **pPaciente);

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    const std::string &getCedula() const;

    void setCedula(const std::string &cedula);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getApellido() const;

    void setApellido(const std::string &apellido);

    char getSexo() const;

    void setSexo(char sexo);

    const std::string &getDireccion() const;

    void setDireccion(const std::string &direccion);

    const std::string &getPatologia() const;

    void setPatologia(const std::string &patologia);

    const std::string &getTipoCirugia() const;

    void setTipoCirugia(const std::string &tipoCirugia);

    const std::string &getEstado() const;

    void setEstado(const std::string &estado);

    const std::string &getPrioridad() const;

    void setPrioridad(const std::string &prioridad);

    int getFechaCirugia() const;

    void setFechaCirugia(int fechaCirugia);

    Cama *getPCama() const;

    void setPCama(Cama *pCama);

    Doctor *getPDoctor() const;

    void setPDoctor(Doctor *pDoctor);

};


#endif //PACIENTE_H

