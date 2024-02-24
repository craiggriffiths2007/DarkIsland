#pragma once
#include <vector>

#include "../DirectXTK/Inc/DDSTextureLoader.h"

#include "Physics.h"

#include "Camera.h"

#include "Level.h"

#include "sparticle.h"

typedef struct
{
	int bActive;
	float x, y, z;

	float life;
	float v1, v2; // texture offsey
	float vel_x, vel_y, vel_z;
	float angle, angle_mom;
	int flaketype;
	int stopped;
	float t_height;
	float cam_dist;
	float alpha;
} fog_t;

namespace Game
{
	class Fog : Sparticle
	{
	public:
		Fog(AllResources* p_Resources) : Sparticle(p_Resources) {};
		~Fog(void);

		//fog_t* snow;
		std::vector<fog_t> fog;
		std::vector<fog_t*> rp_fog;

		unsigned rand_state;// = 0;  // <- state of the RNG (input and output)

		int total_pills;
		int total_collected;

		bool bUpdate;

		int current_point;

		Level* p_Level;

		PerlinNoise* pn;

		float noise_position;

		int current_particle_que;

		task<void> LoadTextures();

		void Initialize(Level* pp_Level, bool _bInstanced = false);

		float angle;
		float m_particleSize;

		void Reset();
		unsigned localrand();

		void UpdateVertexBuffers() { UpdateVertecies(m_Res->m_deviceResources->GetD3DDeviceContext()); };

		void Render();

		task<void> Update(float timeDelta, float timeTotal);

		void CreateOne(float x, float y, float z);

		task<void> Fog::CreateVerticies();
	};
}