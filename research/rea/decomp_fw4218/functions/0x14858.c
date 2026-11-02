// rea decompile_all
// name: FUN_00014858
// address: 0x14858
// body: available
// range: 0x14858-0x14b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00014858(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_001a2920(&uStack_18,param_1 + 4);
  for (puVar1 = (undefined4 *)FUN_00241244(param_1 + 0x34);
      puVar2 = (undefined4 *)FUN_0024122c(param_1 + 0x34), puVar2 != puVar1; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0x13;
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 9;
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined4 *)(param_1 + 0x48) = 4;
    *(undefined1 *)(param_1 + 0x52) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined1 *)(param_1 + 0x53) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (*(int *)(param_1 + 0x40) == 0x14) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(bool *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) == '\0';
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  if (*(int *)(param_1 + 0x44) == 10) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(bool *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) == '\0';
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (*(int *)(param_1 + 0x48) == 5) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(bool *)(param_1 + 0x52) = *(char *)(param_1 + 0x52) == '\0';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(int *)(param_1 + 0x4c) == 2) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(bool *)(param_1 + 0x53) = *(char *)(param_1 + 0x53) == '\0';
  }
  puVar1 = (undefined4 *)FUN_00241928(param_1 + 0x28);
  do {
    puVar2 = (undefined4 *)FUN_00241910(param_1 + 0x28);
    if (puVar2 == puVar1) {
      FUN_001a2938(&uStack_18);
      return;
    }
    piVar5 = (int *)*puVar1;
    if ((piVar5 == (int *)0x0) || (iVar3 = FUN_0015e3e0(piVar5), iVar3 == 0))
    goto switchD_00014a28_default;
    uVar4 = (**(code **)(*piVar5 + 0xc))(piVar5);
    switch(uVar4) {
    case 0:
      (**(code **)(*piVar5 + 0x10))(piVar5,1);
      break;
    case 1:
      (**(code **)(*piVar5 + 0x10))(piVar5,0);
      break;
    case 2:
      if (*(int *)(param_1 + 0x4c) == 0) {
        (**(code **)(*piVar5 + 0x10))(piVar5,*(undefined1 *)(param_1 + 0x53));
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x48) == 0) {
        (**(code **)(*piVar5 + 0x10))(piVar5,*(undefined1 *)(param_1 + 0x52));
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x44) == 0) {
        (**(code **)(*piVar5 + 0x10))(piVar5,*(undefined1 *)(param_1 + 0x51));
      }
      goto LAB_00014af8;
    case 5:
LAB_00014af8:
      if (*(int *)(param_1 + 0x40) == 0) {
        (**(code **)(*piVar5 + 0x10))(piVar5,*(undefined1 *)(param_1 + 0x50));
      }
    }
switchD_00014a28_default:
    puVar1 = puVar1 + 1;
  } while( true );
}

