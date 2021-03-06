#pragma once 

#include <vector>

#include "../Locality/KMeansClustering.h"
#include "../Locality/ClusteringPoint.h"

using Engine::Networking::Metrics::Locality::KMeansClustering;
using Engine::Networking::Metrics::Locality::ClusteringPoint;
namespace Engine
{
	namespace Networking
	{
		namespace Metrics
		{
			namespace Hardware
			{
				class HardwareClustering
				{
				private:
					ClusteringPoint* m_badCpu;
					ClusteringPoint* m_goodCpu;
					ClusteringPoint* m_badBw;
					ClusteringPoint* m_goodBw;

					float m_cpuRatios;
					float m_bwRatios;

				public:


					HardwareClustering()
					{
						//initialize clustering 
					}

					void GroupUpdates(vector<Update*> &p_peerUpdates)
					{
						m_badCpu->clusteredPoints.empty();
						m_goodCpu->clusteredPoints.empty();
						m_badBw->clusteredPoints.empty();
						m_goodBw->clusteredPoints.empty();
					
						float totalBw = 0;
						float totalCpu = 0;

						//normalize 
						for (Update* currentUpdate : p_peerUpdates)
						{
							totalCpu += currentUpdate->GetCpu();
							totalBw += currentUpdate->GetBandwidth();
						}

						for (Update* currentUpdate : p_peerUpdates)
						{
							currentUpdate->SetBandwidth((currentUpdate->GetBandwidth() / totalBw) - 0.5);
							currentUpdate->SetCpu((currentUpdate->GetCpu() / totalCpu) - 0.5);
						}
						

						//set kmeans clustering 

					}

					vector<ClusteringPoint*> groupPeers()
					{

					}
				};
			}
		}
	}
}