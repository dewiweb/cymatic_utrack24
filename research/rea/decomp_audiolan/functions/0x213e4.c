// rea decompile_all
// name: FUN_000213e4
// address: 0x213e4
// body: available
// range: 0x213e4-0x21491 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000213e4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_114 [256];
  
  iVar1 = DAT_00021494;
  piVar7 = (int *)(&stack0xffffffec + DAT_00021494);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  *(undefined4 *)(&stack0x00000004 + DAT_00021494) = uVar2;
  iVar6 = *(int *)(param_2 + 0x25c);
  if (*(short *)(param_3 + 2) == 0xc) {
    puVar4 = &stack0xffffffec + DAT_000214a0 + DAT_00021494;
    iVar3 = FUN_0002056c(*(int *)(param_3 + 0x20) + 4,puVar4 + 0x100,puVar4 + -0x100);
    if (iVar3 == 0) {
      FUN_00024642(0,DAT_000214a8,*(undefined4 *)(param_3 + 0x1c),*(int *)(param_3 + 0x20) + 4);
      return;
    }
    FUN_0001e994(puVar4 + 0x100,puVar4 + 0x140,0);
    FUN_0001ea08(&stack0xffffffec + DAT_000214a4 + iVar1,&stack0x00000008 + iVar1,0x5c);
    FUN_0001ea08(puVar4,&stack0x000003fc + iVar1,0x5c);
    pcVar5 = *(code **)(iVar6 + 4);
    if (pcVar5 != entry) {
      uVar2 = *(undefined4 *)(iVar6 + 8);
      *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000008 + iVar1;
      *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x000003fc + iVar1;
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
      uVar2 = *(undefined4 *)(&stack0x00000004 + iVar1);
      *piVar7 = (int)(puVar4 + 0x140);
      (*pcVar5)(iVar6,uVar2,0);
      return;
    }
  }
  else {
    FUN_00024642(0,DAT_00021498);
  }
  return;
}

