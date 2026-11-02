// rea decompile_all
// name: FUN_001536c0
// address: 0x1536c0
// body: available
// range: 0x1536c0-0x1536cf inclusive
// range: 0x153eb4-0x153ff3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001536c0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint local_30;
  uint local_2c [2];
  
  iVar1 = *(int *)(param_1 + 300);
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = iVar1 + 0xd8;
  FUN_001a0700(iVar7);
  iVar6 = *(int *)(*(int *)(iVar1 + 0x10c) + 8);
  if (iVar6 != *(int *)(iVar1 + 0x10c)) {
    do {
      uVar4 = *(uint *)(*(int *)(iVar6 + 0x1c) + -4);
      if (uVar4 == *(uint *)(*param_2 + -4)) {
        local_30 = uVar4;
        local_2c[0] = *(uint *)(*param_2 + -4);
        puVar5 = local_2c;
        if (uVar4 <= *(uint *)(*param_2 + -4)) {
          puVar5 = &local_30;
        }
        iVar2 = FUN_0000339c(*(int *)(iVar6 + 0x1c),*param_2,*puVar5);
        if ((iVar2 == 0) && (*(int *)(*(int *)(iVar6 + 0x1c) + -4) == *(int *)(*param_2 + -4))) {
          FUN_0007e464(param_3,iVar6 + 0x18);
          FUN_001a0d18(iVar7);
          return 1;
        }
      }
      iVar2 = *(int *)(iVar6 + 0xc);
      if (*(int *)(iVar6 + 0xc) == 0) {
        iVar2 = *(int *)(iVar6 + 4);
        while (iVar3 = iVar2, iVar6 == *(int *)(iVar3 + 0xc)) {
          iVar6 = iVar3;
          iVar2 = *(int *)(iVar3 + 4);
        }
        if (*(int *)(iVar6 + 0xc) != iVar3) {
          iVar6 = iVar3;
        }
      }
      else {
        do {
          iVar6 = iVar2;
          iVar2 = *(int *)(iVar6 + 8);
        } while (*(int *)(iVar6 + 8) != 0);
      }
    } while (iVar6 != *(int *)(iVar1 + 0x10c));
  }
  FUN_001a0d18(iVar7);
  return 0;
}

