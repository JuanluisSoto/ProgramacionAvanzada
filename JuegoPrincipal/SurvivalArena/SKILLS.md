# SKILLS TRACKING - SurvivalArena

## Project Status

### Systems Implemented (from Template)
- [x] Top-down camera (TwinStick variant)
- [x] Player movement (twin stick)
- [x] Dash mechanic (impulse-based)
- [x] Projectile shooting
- [x] AoE attack
- [x] Basic enemy AI (StateTree)
- [x] Enemy spawner (group-based)
- [x] Score + combo system
- [x] Basic pickups
- [x] UI widget (score/combo/items)

### Systems Implemented (custom)
- [x] Health system (MaxHealth, damage, death)
- [x] Lives system (3 per round, on PlayerController)
- [x] Respawn with invulnerability (2s duration)
- [x] Death score penalty (clamped to 0)
- [x] Round system (5 rounds, countdown, break, state machine)
- [x] Difficulty scaling (enemies increase per round)
- [x] Game Over detection (all players out of lives)
- [x] Victory condition (all 5 rounds completed)
- [x] Round UI hooks (countdown, round number, state)

- [x] Power-ups system (SpeedBoost, DamageBoost)
- [x] Self-respawning power-up actor with cooldown
- [x] Damage multiplier wired through projectile → NPC → score

- [x] Weapon system (Default, Shotgun, RapidFire, Sword)
- [x] Self-respawning weapon pickup with random type
- [x] Melee attack (sphere overlap, damages all NPCs in range)
- [x] Shotgun spread (configurable pellets + angle)
- [x] RapidFire (faster autofire rate)
- [x] Ammo consumption with auto-revert to Default

- [x] Shared dynamic camera (ATwinStickCameraActor)
- [x] Dynamic zoom based on player distance (min/max arm length)
- [x] Smooth follow + zoom interpolation
- [x] Local multiplayer (2 players, shared screen)
- [x] Player 2 creation via CreatePlayer
- [x] Split screen disabled (shared viewport)
- [x] Per-player respawn points (index-based)
- [x] View target preserved on respawn

- [x] HUD hooks (health, lives, weapon — per-player, BlueprintImplementableEvent)
- [x] Health UI updates on damage, respawn, and BeginPlay
- [x] Lives UI updates on death and round reset
- [x] Weapon UI updates on equip, ammo consume, and respawn
- [x] GameMode forwarding layer (Character/Controller → GameMode → UIWidget)

### Systems To Implement
- All core C++ systems complete! Remaining work is Blueprint UI implementation.

---

## Skills Learned

### Unreal Engine 5
- Project structure (Source/, Config/, Content/)
- Module system (.Build.cs, .Target.cs)
- Enhanced Input System
- GameMode / Character / PlayerController architecture
- Top-down camera setup (SpringArm + Camera)
- Shared camera with dynamic zoom (SpringArm TargetArmLength interpolation)
- Local multiplayer via UGameplayStatics::CreatePlayer
- Disabling split screen (SetForceDisableSplitscreen)
- SetViewTargetWithBlend for camera control
- StateTree AI system (basics)

### C++ in Unreal
- UCLASS, UPROPERTY, UFUNCTION macros
- Component-based architecture
- Actor lifecycle (BeginPlay, Tick, EndPlay)
- Collision and overlap events
- Character movement configuration

### Gameplay Programming
- Score/combo multiplier pattern
- Projectile spawning and movement
- Enemy spawner with NavMesh
- Input action binding (Enhanced Input)
- Health/damage/death flow (Character → Controller → GameMode)
- Lives system: data persists on Controller (survives character destruction)
- Invulnerability pattern (timer-based flag)
- Score penalty with floor clamping
- State machine pattern for game flow (ERoundState enum)
- Timer-based countdown system
- Gating spawner behavior through GameMode state
- Player controller iteration for multi-player checks
- Difficulty scaling formula (base + increment per round)
- Self-respawning actors (hide/show + timer pattern)
- Data flow through actors (character → projectile → NPC → score)
- Temporary effect pattern (apply multiplier + timer revert)
- Weapon swap pattern (enum type + ammo, auto-revert on depletion)
- Sphere overlap queries for melee combat (OverlapMultiByChannel)
- Shotgun spread: angular offset loop with rotated transforms
- Fire rate modification via timer delay multiplier
- Shared camera: midpoint tracking with FMath::VInterpTo
- Dynamic zoom: distance-to-alpha mapping with FMath::Lerp
- Player index via GetPlayerControllerID for per-player logic
- BlueprintImplementableEvent for C++ → Blueprint UI communication
- GameMode as UI forwarding hub (gameplay classes don't depend on UI directly)
- Per-player HUD pattern: PlayerIndex parameter on all UI events

---

## Development Log
| Date | Milestone |
|------|-----------|
| 2026-03-25 | Project analysis complete. TwinStick variant identified as base. |
| 2026-03-25 | Health & Lives system implemented. |
| 2026-03-25 | Round system implemented (5 rounds, countdown, scaling, game over/victory). |
| 2026-03-25 | Power-ups implemented (speed boost, damage boost, self-respawning). |
| 2026-03-25 | Weapon system implemented (4 types, pickups, melee, ammo). |
| 2026-03-25 | Local multiplayer + shared dynamic camera implemented. |
| 2026-03-25 | HUD system hooks implemented (health, lives, weapon per player). |
