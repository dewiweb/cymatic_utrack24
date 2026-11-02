// rea decompile_all
// name: FUN_001d8f88
// address: 0x1d8f88
// body: available
// range: 0x1d8f88-0x1d90e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d90e0 to 0x3628 FUN_00003628 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d8f88(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint auStack_2c [3];
  
  puVar3 = DAT_001d90e4;
  uVar6 = (*(uint *)(param_2 + 0x10) & 4) >> 2;
  if (uVar6 == 0) {
    iVar5 = *(int *)(param_2 + 0x34);
    iVar8 = *(int *)(param_2 + 0x2c);
  }
  else {
    iVar5 = *(int *)(param_2 + 0x28);
    iVar8 = *(int *)(param_2 + 0x20);
  }
  if (iVar5 == iVar8) {
    *param_1 = DAT_001d90e4;
    return;
  }
  iVar5 = *(int *)(param_2 + 0x14);
  if (uVar6 == 0) {
    iVar8 = *(int *)(param_2 + 0x2c);
    iVar1 = *(int *)(param_2 + 0x34);
  }
  else {
    iVar8 = *(int *)(param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x28);
  }
  uVar6 = iVar1 - iVar8;
  if (0xfffffff1 < uVar6) {
    FUN_0010f7cc(8,DAT_001d90e8,DAT_001d90e8,uVar6);
  }
  if (uVar6 != 0) {
    puVar2 = auStack_2c + 1;
    if (0x80 < uVar6) {
      puVar2 = auStack_2c;
    }
    auStack_2c[0] = uVar6;
    auStack_2c[1] = 0x80;
    uVar7 = *puVar2;
    if (0xfffffff1 < uVar7) {
      FUN_0010f7cc(8,DAT_001d90e8,DAT_001d90e8,uVar7);
    }
    if (uVar7 < uVar6) {
      FUN_0010f7cc(8,DAT_001d90e8,DAT_001d90e8,uVar6);
    }
    puVar3 = DAT_001d90ec;
    if (uVar7 != 0) {
      puVar3 = (undefined4 *)FUN_0010f82c(uVar7 + 0xe,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar6;
      puVar3[1] = uVar7;
      puVar4 = (undefined1 *)((int)puVar3 + uVar6 + 0xc);
      *puVar3 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  *param_1 = puVar3;
  if (iVar5 == 0) {
    return;
  }
  FUN_00003628(puVar3,iVar5,uVar6);
  return;
}

