// rea decompile_all
// name: FUN_001799a8
// address: 0x1799a8
// body: available
// range: 0x1799a8-0x179a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001799a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  iVar1 = FUN_0007bce8(param_1 + 4);
  *(undefined4 *)(iVar1 + -4) = *param_3;
  FUN_0007bce8(auStack_28);
  local_24 = *(undefined1 *)(param_3 + 0xc);
  iVar5 = 0;
  local_23 = *(undefined1 *)((int)param_3 + 0x31);
  local_22 = *(undefined1 *)((int)param_3 + 0x32);
  local_21 = *(undefined1 *)((int)param_3 + 0x33);
  *(undefined1 *)(iVar1 + 4) = local_24;
  *(undefined1 *)(iVar1 + 5) = local_23;
  *(undefined1 *)(iVar1 + 6) = local_22;
  *(undefined1 *)(iVar1 + 7) = local_21;
  do {
    iVar2 = FUN_001c071c(param_3,iVar5);
    if (iVar2 == 0) {
      iVar2 = iVar1 + -4 + iVar5 * 0xc;
      *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
      *(undefined1 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
    }
    else {
      uVar3 = FUN_001b2a1c();
      iVar4 = iVar1 + -4 + iVar5 * 0xc;
      *(undefined4 *)(iVar4 + 0xc) = uVar3;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 4);
      *(undefined1 *)(iVar4 + 0x14) = *(undefined1 *)(iVar2 + 0x6d);
      *(undefined1 *)(iVar4 + 0x15) = *(undefined1 *)(iVar2 + 0xad);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  FUN_0007bd00(auStack_28);
  return;
}

