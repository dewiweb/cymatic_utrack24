// rea decompile_all
// name: FUN_001c6990
// address: 0x1c6990
// body: available
// range: 0x1c6990-0x1c6aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c6990(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint local_28;
  uint local_24 [2];
  
  iVar1 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 4);
  while (iVar4 != 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 0x10) + -4);
    uVar5 = *(uint *)(*param_3 + -4);
    if (uVar2 <= uVar5) {
      uVar5 = uVar2;
    }
    iVar3 = FUN_0000339c(*(int *)(iVar4 + 0x10),*param_3,uVar5);
    if (iVar3 == 0) {
      if (*(uint *)(*(int *)(iVar4 + 0x10) + -4) < *(uint *)(*param_3 + -4)) goto LAB_001c6a08;
LAB_001c69e4:
      iVar1 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    else {
      if (-1 < iVar3) goto LAB_001c69e4;
LAB_001c6a08:
      iVar4 = *(int *)(iVar4 + 0xc);
    }
  }
  if (iVar1 != *(int *)(param_2 + 0x10)) {
    local_28 = *(uint *)(*param_3 + -4);
    local_24[0] = *(uint *)(*(int *)(iVar1 + 0x10) + -4);
    puVar6 = &local_28;
    if (local_24[0] < local_28) {
      puVar6 = local_24;
    }
    iVar4 = FUN_0000339c(*param_3,*(undefined4 *)(iVar1 + 0x10),*puVar6);
    if (iVar4 == 0) {
      if (*(uint *)(*(int *)(iVar1 + 0x10) + -4) <= *(uint *)(*param_3 + -4)) goto LAB_001c6a98;
    }
    else if (-1 < iVar4) {
LAB_001c6a98:
      *param_1 = iVar1;
      return;
    }
  }
  *param_1 = *(int *)(param_2 + 0x10);
  return;
}

