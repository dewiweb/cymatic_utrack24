// rea decompile_all
// name: FUN_000e1494
// address: 0xe1494
// body: available
// range: 0xdac68-0xdac87 inclusive
// range: 0xe1494-0xe170f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000e1494(int *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = DAT_000e1710;
  param_1[0x11] = DAT_000e1710 + 0x58;
  *param_1 = iVar3;
  FUN_001a0700(param_1 + 1);
  piVar2 = (int *)FUN_0006120c();
  (**(code **)(*piVar2 + 4))(piVar2,param_1 + 0x11);
  puVar6 = (undefined4 *)param_1[0x25];
  if ((undefined4 *)param_1[0x26] != puVar6) {
    do {
      piVar2 = (int *)*puVar6;
      if (piVar2 != (int *)0x0) {
        *puVar6 = 0;
        FUN_000d8b10(piVar2);
        (**(code **)(*piVar2 + 0x2c))(piVar2);
      }
      puVar6 = puVar6 + 1;
    } while ((undefined4 *)param_1[0x26] != puVar6);
  }
  puVar6 = (undefined4 *)param_1[0x22];
  if ((undefined4 *)param_1[0x23] != puVar6) {
    do {
      piVar2 = (int *)*puVar6;
      if (piVar2 != (int *)0x0) {
        *puVar6 = 0;
        (**(code **)(*piVar2 + 0x28))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      puVar6 = puVar6 + 1;
    } while ((undefined4 *)param_1[0x23] != puVar6);
  }
  puVar6 = (undefined4 *)param_1[0x1f];
  if ((undefined4 *)param_1[0x20] != puVar6) {
    do {
      piVar2 = (int *)*puVar6;
      if (piVar2 != (int *)0x0) {
        *puVar6 = 0;
        (**(code **)(*piVar2 + 0xc))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      puVar6 = puVar6 + 1;
    } while ((undefined4 *)param_1[0x20] != puVar6);
  }
  FUN_001a0d18(param_1 + 1);
  FUN_0010fa20(param_1[0x25],param_1[0x27] - param_1[0x25] >> 2,0);
  FUN_0010fa20(param_1[0x22],param_1[0x24] - param_1[0x22] >> 2,0);
  FUN_0010fa20(param_1[0x1f],param_1[0x21] - param_1[0x1f] >> 2,0);
  puVar7 = (undefined4 *)param_1[0x19];
  for (puVar6 = (undefined4 *)param_1[0x18]; puVar6 != puVar7; puVar6 = puVar6 + 0x13) {
    (**(code **)*puVar6)(puVar6);
  }
  iVar3 = param_1[0x18];
  lVar1 = (longlong)DAT_000e1714 * (longlong)(param_1[0x1a] - iVar3);
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  FUN_0010fa20(iVar3,(iVar4 >> 5) - (iVar4 >> 0x1f),0,(int)lVar1);
  puVar7 = (undefined4 *)param_1[0x16];
  for (puVar6 = (undefined4 *)param_1[0x15]; puVar6 != puVar7; puVar6 = puVar6 + 0x10) {
    (**(code **)*puVar6)(puVar6);
  }
  iVar3 = param_1[0x15];
  FUN_0010fa20(iVar3,param_1[0x17] - iVar3 >> 6,0);
  puVar7 = (undefined4 *)param_1[0x13];
  for (puVar6 = (undefined4 *)param_1[0x12]; puVar6 != puVar7; puVar6 = puVar6 + 0xf) {
    (**(code **)*puVar6)(puVar6);
  }
  iVar3 = param_1[0x12];
  uVar5 = param_1[0x14] - iVar3;
  iVar4 = (int)((longlong)(int)uVar5 * (longlong)DAT_000e1718 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  FUN_0010fa20(iVar3,(iVar4 >> 5) - (iVar4 >> 0x1f),0);
  *param_1 = DAT_000dac88;
  FUN_001a07f0(param_1 + 1);
  return param_1;
}

