#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__

#include <string>

template <class T> 
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	~Vector3D();

	// accessor
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	// mutator
	void setX(const T x);
	void setY(const T y);
	void setz(const T z);
	void set(const T x, const T y, const T z);

	std::string ToString() const;


private:
	T m_x;
	T m_y;
	T m_z;
};

/* Implementation Section */

template <class T>
Vector3D<T>::Vector3D(const T x, const T y, const T z) : m_x(x), m_y(y), m_z(z)
{

}

template <class T>
Vector3D<T>::~Vector3D()
{}

template <class T>
T Vector3D<T>::GetX() const
{
	return m_x;
}

template <class T>
T Vector3D<T>::GetY() const
{
	return m_y;
}

template <class T>
T Vector3D<T>::GetZ() const
{
	return m_z;
}

template <class T>
void Vector3D<T>::setX(const T x)
{
	m_x = x;
}

template <class T>
void Vector3D<T>::setY(const T y)
{
	m_y = y;
}

template <class T>
void Vector3D<T>::setz(const T z)
{
	m_z = z;
}

template <class T>
void Vector3D<T>::set(const T x, const T y, const T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

template <class T>
std::string Vector3D<T>::ToString() const
{
	/*std::string outputstring;
	outputstring += "(" + std::to_string(m_x) + ", " + std::to_string(m_y) + ", " + std::to_string(m_z) + ")";

	return outputstring;*/
	return "(" + std::to_string(m_x) + ", " + std::to_string(m_y) + ", " + std::to_string(m_z) + ")";
}


#endif /* defined (__VECTOR3D__)*/
