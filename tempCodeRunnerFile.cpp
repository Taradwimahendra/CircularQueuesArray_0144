if (FRONT_position <= REAR_position)
    {
        while (FRONT_position <= REAR_position)
        {
            cout << queue_array[FRONT_position] << " ";
            FRONT_position++;
        }
        cout << endl;  
    }
     else
    {
        while (FRONT_position <= max -1)
        {
            cout << queue_array[FRONT_position] << " ";
            FRONT_position++;
        }

         FRONT_position = 0;
        
        while (FRONT_position <= REAR_position)
        {
            cout << queue_array[FRONT_position] << " ";
            FRONT_position++;
        }
        cout << endl;  
        }
    }