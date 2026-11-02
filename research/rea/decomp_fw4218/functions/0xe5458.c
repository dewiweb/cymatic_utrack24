// rea decompile_all
// name: FUN_000e5458
// address: 0xe5458
// body: available
// range: 0xe5458-0xe55ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e5458(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  bVar2 = true;
  bVar3 = true;
  FUN_000f4e84();
  uVar4 = FUN_000f4fb4();
  for (iVar5 = FUN_0023cc00(param_2); iVar6 = FUN_0023cbe8(param_2), iVar6 != iVar5;
      iVar5 = iVar5 + 0x18) {
    iVar6 = FUN_001b9f00(iVar5);
    if (iVar6 != 0) {
      bVar1 = true;
    }
    iVar6 = FUN_001b9f00(iVar5);
    if ((iVar6 == 0) && (iVar6 = FUN_001b9ef4(iVar5), iVar6 == 0)) {
      bVar2 = false;
      FUN_0006de34(uVar4,0);
    }
    iVar6 = FUN_001b9ef4(iVar5);
    if (iVar6 == 0) {
      bVar3 = false;
    }
  }
  if ((((*DAT_000e55ac != '\0') && (bVar1)) && (bVar2)) && (*(char *)(param_1 + 0xc0) != '\0')) {
    FUN_000e5d68(param_1);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
              (*(int **)(param_1 + 0xa4),0x21,0,DAT_000e55b0,0);
  }
  iVar5 = FUN_001b2768(uVar4);
  iVar6 = FUN_001b2774(uVar4);
  if (((iVar6 != 0) && (bVar2)) && ((iVar5 == 0 && (bVar3)))) {
    FUN_0006de34(uVar4,1);
    FUN_001a48f0(param_1,0x56,0);
  }
  return;
}

