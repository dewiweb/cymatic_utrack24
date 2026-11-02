// rea decompile_all
// name: FUN_00044b64
// address: 0x44b64
// body: available
// range: 0x44b64-0x44d8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00044b64(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_r3;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar2 = FUN_00027364(param_1);
  iVar3 = param_2 + 0x100;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00025d12(param_2,iVar3);
    iVar5 = FUN_00025d12(iVar2 + DAT_00044d94,iVar2 + DAT_00044d90);
    iVar4 = iVar4 - iVar5;
  }
  puVar6 = (undefined1 *)FUN_001e5788(DAT_00044d98);
  if (puVar6 == (undefined1 *)0x0) {
    FUN_0002a1c6(0,s_ERROR__StartGetZoneData___mDNSPl_00044d9c);
    return (undefined1 *)0x0;
  }
  FUN_001e58ac(puVar6,DAT_00044d98);
  uVar7 = FUN_00025d12(param_2,iVar3);
  if (uVar7 < 0x101) {
    FUN_001e57d8(puVar6,param_2,uVar7);
  }
  else {
    *puVar6 = 0;
  }
  puVar6[0x100] = param_3;
  *(undefined1 **)(puVar6 + 0x104) = puVar6 + iVar4;
  puVar6[0x108] = 0;
  *(undefined2 *)(puVar6 + 0x208) = 0;
  puVar6[0x20a] = 0;
  iVar4 = DAT_00044dd8;
  *(undefined2 *)(puVar6 + DAT_00044dd8 + 8) = *DAT_00044ddc;
  puVar1 = DAT_00044de0;
  uVar9 = DAT_00044de0[1];
  uVar10 = DAT_00044de0[2];
  uVar11 = DAT_00044de0[3];
  *(undefined4 *)(puVar6 + 0x30c) = *DAT_00044de0;
  *(undefined4 *)(puVar6 + 0x310) = uVar9;
  *(undefined4 *)(puVar6 + 0x314) = uVar10;
  *(undefined4 *)(puVar6 + 0x318) = uVar11;
  *(undefined4 *)(puVar6 + 0x31c) = puVar1[4];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(undefined4 *)(puVar6 + 800) = uVar9;
  *(undefined4 *)(puVar6 + 0x324) = param_4;
  *(undefined4 *)(puVar6 + 0x328) = param_5;
  *(undefined1 **)(puVar6 + 0x588) = puVar6;
  iVar8 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x30) = iVar8;
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 != iVar8) {
    FUN_0002a1c6(0,s____s__Locking_Failure__mDNS_busy_00044de6 + 2,_DAT_00044de4,iVar5,iVar8);
    iVar5 = extraout_r3;
    iVar3 = iVar8;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    if (*(short *)(iVar2 + 0x143c) != 0) {
      if (*_DAT_00044e28 != 0) {
        FUN_0002a1c6(3,s____StartGetZoneData__Bypassing_S_00044e29 + 3,iVar2 + DAT_00044d94,iVar5,
                     iVar3);
      }
      iVar3 = iVar2 + DAT_00044d94;
      uVar7 = FUN_00025d12(iVar3,iVar2 + DAT_00044d90);
      if (uVar7 < 0x101) {
        FUN_001e57d8(puVar6 + 0x108,iVar3,uVar7);
      }
      else {
        puVar6[0x108] = 0;
      }
      *(undefined2 *)(puVar6 + 0x208) = 1;
      iVar5 = iVar2 + DAT_00044e64;
      uVar7 = FUN_00025d12(iVar5,iVar2 + DAT_00044e60);
      iVar3 = DAT_00044e68;
      if (uVar7 < 0x101) {
        FUN_001e57d8(puVar6 + DAT_00044e68,iVar5,uVar7);
      }
      else {
        puVar6[0x20a] = 0;
      }
      *(undefined2 *)(puVar6 + iVar4 + 8) = *(undefined2 *)(iVar2 + 0x143c);
      uVar7 = FUN_00025d12(puVar6 + iVar3,puVar6 + DAT_00044e6c);
      if (uVar7 < 0x101) {
        FUN_001e57d8(puVar6 + DAT_00044e70,puVar6 + iVar3,uVar7);
      }
      else {
        puVar6[0x45c] = 0;
      }
      FUN_00028dbc(param_1,puVar6,1);
      goto LAB_00044d68;
    }
    if (*_DAT_00044e28 != 0) {
      FUN_0002a1c6(3,s_StartGetZoneData__Not_Bypassing_S_00044e74,iVar2 + DAT_00044d94,iVar5,iVar3);
    }
  }
  uVar7 = FUN_00025d12(*(int *)(puVar6 + 0x104),*(int *)(puVar6 + 0x104) + 0x100);
  if (uVar7 < 0x101) {
    FUN_001e57d8(puVar6 + DAT_00044e70,*(undefined4 *)(puVar6 + 0x104),uVar7);
  }
  else {
    puVar6[0x45c] = 0;
  }
  FUN_00028dbc(param_1,puVar6,6);
LAB_00044d68:
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    FUN_0002a1c6(0,s__s__Unlocking_Failure__mDNS_busy_00044eac,_DAT_00044de4,
                 *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  return puVar6;
}

