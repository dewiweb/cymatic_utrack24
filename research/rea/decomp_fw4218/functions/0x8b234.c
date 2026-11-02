// rea decompile_all
// name: FUN_0008b234
// address: 0x8b234
// body: available
// range: 0x8b234-0x8b3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008b234(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  
  uVar1 = FUN_001b4f14(param_1);
  uVar2 = FUN_001b4ef0(param_1);
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar3 = 0x4e;
  }
  else {
    uVar3 = 0x59;
  }
  FUN_00002898(DAT_0008b400,*(undefined1 *)(param_1 + 0x1d),*(undefined1 *)(param_1 + 0x1c),uVar2,
               uVar1,uVar3);
  if (*(char *)(param_1 + 0x82) == '\0') {
    return 0xffffffff;
  }
  uVar1 = 0;
  FUN_00172844(auStack_28,*(undefined4 *)(param_1 + 0x6c));
  switch(*(undefined1 *)(param_1 + 0x1d)) {
  case 0:
    uVar1 = 0xfffffffc;
    goto switchD_0008b2bc_default;
  case 1:
    FUN_001726d4(auStack_3c,param_1 + 0x5c);
    local_38 = FUN_001b9eb8(param_1 + 0x20);
    piVar4 = *(int **)(param_1 + 0x68);
    piVar6 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0x1ec));
    (**(code **)(*(int *)((int)piVar4 + *(int *)(*piVar4 + -0x1ec)) + 0xec))
              (auStack_30,(int)piVar4 + *(int *)(*piVar4 + -0x1ec),1);
    uVar1 = FUN_001beccc(auStack_30);
    iVar5 = (**(code **)(*piVar6 + 0x1a4))
                      (piVar6,auStack_3c,DAT_0008b40c,DAT_0008b408,2,0,0,uVar1,DAT_0008b404);
    FUN_00171ea4(auStack_30);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x1d) = 3;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
    goto switchD_0008b2bc_default;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    goto switchD_0008b2bc_default;
  }
  uVar1 = 0xfffffffb;
switchD_0008b2bc_default:
  FUN_0017286c(auStack_28);
  return uVar1;
}

