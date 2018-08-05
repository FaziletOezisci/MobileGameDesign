template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>(const char*);
class CompositeCollider2D; 
class EdgeCollider2D; template <> void RegisterClass<EdgeCollider2D>(const char*);
class PolygonCollider2D; template <> void RegisterClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; 
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; 
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } 
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterClass<AnimatorController>(const char*);
class AnimatorOverrideController; 
class SampleClip; 
class AudioClip; 
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>(const char*);
class PhysicsManager; 
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 71 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//3. Camera
	RegisterClass<Camera>("Core");
	//4. GameObject
	RegisterClass<GameObject>("Core");
	//5. GUIElement
	RegisterClass<GUIElement>("Core");
	//6. GUILayer
	RegisterClass<GUILayer>("Core");
	//7. Shader
	RegisterClass<Shader>("Core");
	//8. NamedObject
	RegisterClass<NamedObject>("Core");
	//9. Material
	RegisterClass<Material>("Core");
	//10. Texture
	RegisterClass<Texture>("Core");
	//11. Texture2D
	RegisterClass<Texture2D>("Core");
	//12. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//13. Transform
	RegisterClass<Transform>("Core");
	//14. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//16. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//17. Collider2D
	RegisterClass<Collider2D>("Physics2D");
	//18. PreloadData
	RegisterClass<PreloadData>("Core");
	//19. Cubemap
	RegisterClass<Cubemap>("Core");
	//20. Texture3D
	RegisterClass<Texture3D>("Core");
	//21. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//22. Mesh
	RegisterClass<Mesh>("Core");
	//23. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//24. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//25. Renderer
	RegisterClass<Renderer>("Core");
	//26. Sprite
	RegisterClass<Sprite>("Core");
	//27. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//28. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//29. GameManager
	RegisterClass<GameManager>("Core");
	//30. TagManager
	RegisterClass<TagManager>("Core");
	//31. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//32. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//33. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//34. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//35. InputManager
	RegisterClass<InputManager>("Core");
	//36. TimeManager
	RegisterClass<TimeManager>("Core");
	//37. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//38. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//39. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//40. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//41. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//42. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//43. MonoManager
	RegisterClass<MonoManager>("Core");
	//44. MonoScript
	RegisterClass<MonoScript>("Core");
	//45. TextAsset
	RegisterClass<TextAsset>("Core");
	//46. AudioManager
	RegisterClass<AudioManager>("Audio");
	//47. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//48. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//49. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>("PerformanceReporting");
	//50. Physics2DSettings
	RegisterClass<Physics2DSettings>("Physics2D");
	//51. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>("UnityAnalytics");
	//52. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//53. Motion
	RegisterClass<Motion>("Animation");
	//54. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//55. Animator
	RegisterClass<Animator>("Animation");
	//56. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//57. AnimatorController
	RegisterClass<AnimatorController>("Animation");
	//58. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//59. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//60. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//61. SpriteRenderer
	RegisterClass<SpriteRenderer>("Core");
	//62. Rigidbody2D
	RegisterClass<Rigidbody2D>("Physics2D");
	//63. CircleCollider2D
	RegisterClass<CircleCollider2D>("Physics2D");
	//64. BoxCollider2D
	RegisterClass<BoxCollider2D>("Physics2D");
	//65. EdgeCollider2D
	RegisterClass<EdgeCollider2D>("Physics2D");
	//66. PolygonCollider2D
	RegisterClass<PolygonCollider2D>("Physics2D");
	//67. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>("Physics2D");
	//68. Avatar
	RegisterClass<Avatar>("Animation");
	//69. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//70. AudioListener
	RegisterClass<AudioListener>("Audio");

}
