/*
 * HashTable.h
 *
 *  Created on: Apr 30, 2018
 *      Author: opnmpd
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include <vector>;


template <class K, class D>
struct DataPair
{
	K key;
	D data;
};

template <class K, class D>
class HashTable
{
public:
	typedef std::vector <DataPair <K, D> > BucketType;
	HashTable (int size)
	{
		m_table.resize(size);
	}

	int size()
	{
		return m_table.size();
	}

	D &operator[](K key)
	{
		//get index
		int index = key % m_table.size();
		//get the bucket at index
		BucketType &bucket = m_table[index];

		//traverse bucket and search for key
		for(int i = 0; i < bucket.size(); i++)
		{
			if (key == bucket[i].key)
			{
				return bucket[i].data;
			}
		}

		//if we are here then not found
		DataPair<K, D> dataPair = { key, D() };
		bucket.push_back(dataPair);
		return bucket[bucket.size() - 1].data;

	}

private:
	std::vector<BucketType> m_table;
};

#endif /* HASHTABLE_H_ */
