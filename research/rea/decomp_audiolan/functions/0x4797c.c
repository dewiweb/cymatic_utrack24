// rea decompile_all
// name: FUN_0004797c
// address: 0x4797c
// body: available
// range: 0x4797c-0x47ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004797c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  iVar3 = FUN_001810f8(param_1,s_stackSize_00047ae8);
  iVar1 = _DAT_00047af4;
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(_DAT_00047af4 + 4);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  else {
    *(int *)(param_2 + 4) = iVar3;
    uVar4 = *(uint *)(param_2 + 0x10) | 1;
    *(uint *)(param_2 + 0x10) = uVar4;
  }
  *(uint *)(param_2 + 0x10) = uVar4 | 2;
  FUN_00180f0c(param_1,s____memType_00047af5 + 3,auStack_20,10);
  iVar3 = FUN_00003960(auStack_20,&DAT_00047b00);
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = FUN_00003960(auStack_20,&DAT_00047b08);
    if (iVar3 != 0) {
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(iVar1 + 8);
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffffd;
      goto LAB_00047a1c;
    }
    uVar2 = 8;
  }
  *(undefined1 *)(param_2 + 8) = uVar2;
LAB_00047a1c:
  iVar3 = FUN_00181268(param_1,s_priority_00047b0c);
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(iVar1 + 9);
  }
  else {
    uVar2 = FUN_001810f8(param_1,s_priority_00047b0c);
    *(undefined1 *)(param_2 + 9) = uVar2;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  }
  iVar3 = FUN_00181268(param_1,s_preemptThreshold_00047b18);
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 10) = *(undefined1 *)(iVar1 + 10);
  }
  else {
    uVar2 = FUN_001810f8(param_1,s_preemptThreshold_00047b18);
    *(undefined1 *)(param_2 + 10) = uVar2;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  iVar3 = FUN_00181268(param_1,s_timeSlice_00047b2c);
  if (iVar3 != 0) {
    uVar5 = FUN_001810f8(param_1,s_timeSlice_00047b2c);
    *(undefined4 *)(param_2 + 0xc) = uVar5;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  return;
}

