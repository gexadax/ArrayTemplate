#pragma once
template <typename T>
class Array
{
private:
    T* m_data;
    int m_size;

public:
    Array()
    {
        m_size = 0;
        m_data = nullptr;
    }

    Array(int size)
    {
        m_size = size;
        m_data = new T[size];
    }

    Array(const Array& other)
    {
        m_size = other.m_size;
        m_data = new T[m_size];
        for (int i = 0; i < m_size; ++i)
            m_data[i] = other.m_data[i];
    }

    ~Array()
    {
        delete[] m_data;
    }

    int getSize() const
    {
        return m_size;
    }

    void resize(int size)
    {
        T* newData = new T[size];
        int minSize = (size > m_size) ? m_size : size;
        for (int i = 0; i < minSize; ++i)
            newData[i] = m_data[i];
        delete[] m_data;
        m_data = newData;
        m_size = size;
    }

    T& operator[](int index)
    {
        return m_data[index];
    }

    const T& operator[](int index) const
    {
        return m_data[index];
    }
};