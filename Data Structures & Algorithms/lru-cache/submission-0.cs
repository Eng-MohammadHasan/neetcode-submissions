public class LRUCache
{
    LinkedList<Dictionary<int, int>> l;
    int c;

    public LRUCache(int capacity)
    {
        l = new LinkedList<Dictionary<int, int>>();
        this.c = capacity;
    }

    public int Get(int key)
    {
        var node = l.First;

        while (node != null)
        {
            if (node.Value.ContainsKey(key))
            {
                int val = node.Value[key];

                // move this node to the end (most recently used)
                l.Remove(node);
                l.AddLast(node);

                return val;
            }

            node = node.Next;
        }

        return -1;
    }

    public void Put(int key, int value)
    {
        // check if key already exists
        var node = l.First;

        while (node != null)
        {
            if (node.Value.ContainsKey(key))
            {
                node.Value[key] = value;

                // move to end
                l.Remove(node);
                l.AddLast(node);
                return;
            }

            node = node.Next;
        }

        // if full → remove least recently used (first)
        if (l.Count == c)
        {
            l.RemoveFirst();
        }

        // add new
        Dictionary<int, int> m = new Dictionary<int, int>();
        m.Add(key, value);
        l.AddLast(m);
    }
}