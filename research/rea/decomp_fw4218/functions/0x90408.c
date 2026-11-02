// rea decompile_all
// name: FUN_00090408
// address: 0x90408
// body: available
// range: 0x90408-0x905a7 inclusive
// range: 0x906a8-0x907bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00090408(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_00002898(s_UT24SyncCL_State__000905a8);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (*(char *)(param_1 + 0x82) == '\0') {
      pcVar1 = s_Not_connected_000905c8;
    }
    else {
      pcVar1 = s_Connected_000905bc;
    }
    FUN_00002898(s_Mode__Master___s__000905d8,pcVar1);
    FUN_00002898(s__7___State___s_000905f0 + 4,
                 *(undefined4 *)
                  (s__7___State___s_000905f0._0_4_ + (uint)*(byte *)(param_1 + 0x1d) * 4));
    FUN_00002898(s_MasterID___u_00090604,*(undefined4 *)(param_1 + 0x28));
    FUN_00002898(s_DeviceIndex___u_00090614,*(undefined1 *)(param_1 + 0x74));
    uVar2 = FUN_0022e4a0(param_1 + 0x50);
    FUN_00002898(s_Slave_count___u_00090628,uVar2);
    for (uVar6 = 0; uVar5 = FUN_0022e4a0(param_1 + 0x50), uVar6 < uVar5; uVar6 = uVar6 + 1) {
      FUN_00002898(s_Slave__d___0009063c,uVar6 + 1);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      FUN_001b9ed0();
      uVar2 = FUN_0022d49c();
      FUN_00002898(s_Name___s_0009064c,uVar2);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      uVar2 = FUN_001b9eb8();
      FUN_00002898(s_ID___u_0009065c,uVar2);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      uVar2 = FUN_001b9edc();
      FUN_00002898(s_Index___u_00090668,uVar2);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      iVar3 = FUN_001b9ec4();
      if (iVar3 == 0) {
        puVar4 = &DAT_0009067c;
      }
      else {
        puVar4 = &DAT_00090678;
      }
      FUN_00002898(s_Available___s_00090680,puVar4);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      iVar3 = FUN_001b9ef4();
      if (iVar3 == 0) {
        puVar4 = &DAT_0009067c;
      }
      else {
        puVar4 = &DAT_00090678;
      }
      FUN_00002898(s_Has_Sync___s_00090694,puVar4);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      iVar3 = FUN_001b9f00();
      if (iVar3 == 0) {
        puVar4 = &DAT_0009067c;
      }
      else {
        puVar4 = &DAT_00090678;
      }
      FUN_00002898(s_Needs_Sync___s_000907c0,puVar4);
      FUN_0023cff0(param_1 + 0x50,uVar6);
      iVar3 = FUN_001b9ee8();
      if (iVar3 == 0) {
        puVar4 = &DAT_0009067c;
      }
      else {
        puVar4 = &DAT_00090678;
      }
      FUN_00002898(s_Rebuild_Accepted___s_000907d4,puVar4);
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\x02') {
    if (*(char *)(param_1 + 0x82) == '\0') {
      pcVar1 = s_Not_connected_000905c8;
    }
    else {
      pcVar1 = s_Connected_000905bc;
    }
    FUN_00002898(s_Mode__Slave___s__000907f0,pcVar1);
    FUN_00002898(s__7___State___s_000905f0 + 4,
                 *(undefined4 *)
                  (s__7___State___s_000905f0._0_4_ + (uint)*(byte *)(param_1 + 0x1d) * 4));
    FUN_00002898(s_ownID___u_00090804,*(undefined4 *)(param_1 + 0x60));
    FUN_00002898(s_MasterID___u_00090604,*(undefined4 *)(param_1 + 0x28));
    FUN_00002898(s_deviceIndex___u_00090814,*(undefined1 *)(param_1 + 0x74));
    FUN_00002898(s_slave_count___u_00090828,*(undefined1 *)(param_1 + 0x76));
  }
  else {
    if (*(char *)(param_1 + 0x82) == '\0') {
      pcVar1 = s_Not_connected_000905c8;
    }
    else {
      pcVar1 = s_Connected_000905bc;
    }
    FUN_00002898(s_Mode__Standalone___s__0009083c,pcVar1);
    FUN_00002898(s__7___State___s_000905f0 + 4,
                 *(undefined4 *)
                  (s__7___State___s_000905f0._0_4_ + (uint)*(byte *)(param_1 + 0x1d) * 4));
  }
  return;
}

