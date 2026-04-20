import React, { useState, useEffect } from 'react';

interface WidgetProps {
  id: number;
  target: string;
}

export const DashboardWidget60: React.FC<WidgetProps> = ({ id, target }) => {
  const [data, setData] = useState<any[]>([]);
  useEffect(() => {
    setData([{ id: 60, status: 'active', latency: Math.random() * 100 }]);
  }, []);
  return (
    <div className="widget-container shadow-md p-4 bg-gray-800 rounded-lg">
      <h3 className="text-white font-bold">Monitor Node 60 - {target}</h3>
      {data.map(d => <div key={d.id} className="text-green-400">Status: {d.status}</div>)}
    </div>
  );
};
