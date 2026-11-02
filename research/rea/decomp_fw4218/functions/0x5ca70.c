// rea decompile_all
// name: FUN_0005ca70
// address: 0x5ca70
// body: available
// range: 0x5ca70-0x5cb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0005ca70(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  code *pcVar7;
  bool bVar8;
  
  *param_1 = DAT_0005cb98;
  puVar1 = (undefined4 *)FUN_000b1210(param_1 + 1);
  puVar2 = puVar1 + -1;
  *puVar1 = _DAT_0005cb9c;
  *(char *)(puVar1 + 3) = (char)param_2;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  *(char *)(puVar1 + 6) = (char)param_6;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___USBBusDriverService_0005cb9e + 2,puVar1);
  pcVar6 = DAT_0005cbb4;
  if (iVar4 == 0) goto LAB_0005cb90;
  uVar5 = (uint)(param_2 == 3);
  pcVar7 = (code *)(param_5 - DAT_0005cbb8);
  if (param_5 == DAT_0005cbb8) {
LAB_0005cb4c:
    iVar4 = uVar5 + 0x10;
  }
  else if (param_5 < DAT_0005cbb8) {
    bVar8 = param_5 == 32000;
    iVar4 = DAT_0005cbb8;
    if (!bVar8) {
      iVar4 = param_5 - (DAT_0005cbb8 >> 1);
      bVar8 = iVar4 == 0;
    }
    if (!bVar8) {
      bVar8 = iVar4 == 0xf3c;
    }
    if (!bVar8) {
LAB_0005cb08:
      FUN_00002898(s_ERROR__USBEncoder__Invalid_sampl_0005cbbc,param_5);
      return puVar2;
    }
    iVar4 = uVar5 + 8;
  }
  else {
    if (pcVar7 == (code *)0x1e78) goto LAB_0005cb4c;
    if (pcVar7 != (code *)&LAB_00015888 && pcVar7 != FUN_00019578) goto LAB_0005cb08;
    iVar4 = uVar5 + 0x20;
  }
  (**(code **)(*(int *)puVar1[2] + 0x18))
            ((int *)puVar1[2],param_2,param_3,param_4 * iVar4 + 5,param_4,param_5,param_6);
  iVar4 = (**(code **)(*(int *)puVar1[2] + 0x1c))();
  if (iVar4 != 0) {
    return puVar2;
  }
  pcVar6 = s_ERROR__USBEncoder__Could_not_ini_0005cbe8;
LAB_0005cb90:
  FUN_00002898(pcVar6);
  return puVar2;
}

