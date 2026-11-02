// rea decompile_all
// name: FUN_00243748
// address: 0x243748
// body: available
// range: 0x243748-0x243953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00243748(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *piStack_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = 0;
  if (param_4 != 0) {
    piStack_28 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    iVar1 = FUN_0022ee28(param_1);
    iVar2 = FUN_0022edd8(param_1);
    if ((uint)(iVar1 - iVar2) < local_1c) {
      iVar1 = FUN_0022edd8(param_1);
      local_2c = FUN_0022edd8(param_1);
      piVar3 = (int *)FUN_00247bfc(&local_2c,&local_1c);
      iVar2 = *piVar3;
      iVar4 = FUN_00243590(param_1,iVar1 + iVar2);
      puVar5 = (undefined4 *)FUN_00243a7c(&uStack_34,iVar4,0);
      FUN_00243664(&local_48,param_1);
      FUN_00243954(&local_40,param_1,local_48,uStack_44,local_24,local_20,*puVar5,puVar5[1]);
      FUN_00243aec(param_1,local_40,local_3c,local_1c,param_5);
      FUN_0022ee6c(&local_48,&local_40,local_1c);
      FUN_00243654(&local_50,param_1);
      FUN_00243954(&local_58,param_1,local_24,local_20,local_50,uStack_4c,local_48,uStack_44);
      param_1[2] = local_58;
      param_1[3] = iStack_54;
      uVar6 = FUN_00230d80(&local_38,param_1);
      FUN_00230cfc(uVar6,*param_1,param_1[4] - *param_1 >> 2);
      param_1[4] = iVar4 + (iVar1 + iVar2 + 0x1fU >> 5) * 4;
      piVar3 = (int *)FUN_00243a7c(&uStack_34,iVar4,0);
      iVar1 = *piVar3;
      iVar2 = piVar3[1];
      *param_1 = iVar1;
      param_1[1] = iVar2;
    }
    else {
      FUN_0022ee6c(&local_30,param_1 + 2,local_1c);
      FUN_00243654(&local_38,param_1);
      FUN_002435cc(&local_40,param_1,local_24,local_20,local_38,uStack_34,local_30,local_2c);
      FUN_0022ee6c(&local_30,&local_24,local_1c);
      FUN_002439a8(param_1,local_24,local_20,local_30,local_2c,param_5);
      iVar1 = FUN_00243abc(param_1 + 2,local_1c);
    }
  }
  return iVar1;
}

