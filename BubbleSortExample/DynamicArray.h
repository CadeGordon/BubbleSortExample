#pragma once
#include "Main.cpp"

template <typename T>
class DynamicArray
{


public:
	DynamicArray()
	{
	}

	~DynamicArray()
	{
    }

	template <typename T>
	void addItem(T* item)
	{
		//Create a new array with a size one greater than our old array
		DynamicArray** appendedArray = new DynamicArray * [m_Length + 1];
		//Copy the values from the old array to the new array
		for (int i = 0; i < m_length; i++)
		{
			appendedArray[i] = m_items[i];
		}

		//Set the last value in the new array to be the actor we want to add
		appendedArray[m_actorCount] = actor;
		//Set old array to hold the values of the new array
		m_items = appendedArray;
		m_length++;
	}

	template <typename T>
	bool removeItem(T* item)
	{
		//Check to see if the actor was null
		if (!actor || m_length <= 0)
		{
			return false;
		}

		bool actorRemoved = false;
		//Create a new array with a size one less than our old array
		DynamicArray** newArray = new DynamicArray * [m_length - 1];
		//Create variable to access tempArray index
		int j = 0;
		//Copy values from the old array to the new array
		for (int i = 0; i < m_length; i++)
		{
			if (actor != m_items[i])
			{
				newArray[j] = m_items[i];
				j++;
			}
			else
			{
				actorRemoved = true;
			}
		}
		//Set the old array to the new array
		if (actorRemoved)
		{
			m_items = newArray;
			m_length--;
		}
		//Return whether or not the removal was successful
		return actorRemoved;
	}

	void sortItems()
	{
		template <typename T>
		void instertionSort(T arr[], int size)
		{
			int j = 0;
			int key = 0;

			for (int i = 1; i < size; i++)
			{
				key = arr[i];
				j = i - 1;

				while (j >= 0 && arr[j] > key)
				{
					arr[j + 1] = arr[j];
					j--;
				}

				arr[j + 1] = key;
			}
		}
	}

	template <typename T>
	T* getItem(int index)
	{
		//Return false if the index is out of bounds
		if (index < 0 || index >= m_length)
			return nullptr;

		return m_items[index];
	}

    int getLength()
	{
		for (int i = 0; i < m_length; i++)
		{
			//return the current actor if it matches the argument
			if (m_items[i] == actor)
				return true;
		}
	}

private:
	template <typename T>
	T** m_items
	int m_length

};




