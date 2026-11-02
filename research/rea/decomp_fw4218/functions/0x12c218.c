// rea decompile_all
// name: FUN_0012c218
// address: 0x12c218
// body: available
// range: 0x12c218-0x12c357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0012c218(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *param_1 = DAT_0012c358;
  param_1[1] = 0xffffffff;
  uVar4 = FUN_000b9cf4();
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = param_2;
  param_1[0xe] = param_4;
  param_1[0xf] = 0;
  pcVar2 = DAT_0012c35c;
  if (param_3 != 0) {
    iVar8 = 0;
    cVar1 = *DAT_0012c35c;
    while (cVar1 != -1) {
      iVar5 = (**(code **)(*(int *)param_1[3] + 0x24))();
      if (iVar5 == pcVar2[iVar8 * 8]) {
        param_1[6] = *(undefined4 *)(pcVar2 + iVar8 * 8 + 4);
        break;
      }
      iVar8 = iVar8 + 1;
      cVar1 = pcVar2[iVar8 * 8];
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  uVar3 = DAT_0012c364;
  uVar4 = DAT_0012c360;
  param_1[10] = 0;
  iVar8 = FUN_001c7218(param_2,uVar3,uVar4,0xffffffff);
  if (iVar8 != 0) {
    puVar7 = *(undefined4 **)(iVar8 + 0x18);
    iVar5 = 0;
    if (*(undefined4 **)(iVar8 + 0x1c) != puVar7) {
      do {
        iVar6 = FUN_001b2a08(*puVar7);
        iVar5 = iVar5 + iVar6;
        puVar7 = puVar7 + 1;
      } while (*(undefined4 **)(iVar8 + 0x1c) != puVar7);
    }
    iVar8 = FUN_0004ceb0(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x60),0);
    param_1[0xc] = iVar5 * iVar8 + 5;
  }
  return param_1;
}

