// rea decompile_all
// name: FUN_0023afd0
// address: 0x23afd0
// body: available
// range: 0x23afd0-0x23b207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0023afd0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 != param_1) {
    local_28 = param_3;
    local_24 = param_4;
    uVar1 = FUN_0022e20c(param_2);
    uVar2 = FUN_0022e280(param_1);
    if (uVar2 < uVar1) {
      uVar3 = FUN_0022e20c(param_1);
      local_28 = FUN_0020b164(uVar3,param_1);
      local_24 = FUN_0022e20c(param_2);
      piVar4 = (int *)FUN_00247bfc(&local_24,&local_28);
      iVar9 = *piVar4;
      iVar5 = FUN_0022f41c(param_1,iVar9,0);
      uVar3 = FUN_0022e1f4(param_2);
      uVar6 = FUN_0022e234(param_2);
      FUN_0024712c(uVar6,uVar3,iVar5,param_1);
      uVar3 = FUN_0023ad98(param_1);
      uVar6 = FUN_0023adb0(param_1);
      FUN_0023abac(param_1,uVar6,uVar3);
      uVar3 = FUN_0022e280(param_1);
      FUN_0022f3e0(param_1,*param_1,uVar3);
      *param_1 = iVar5;
      iVar5 = FUN_0022e20c(param_2);
      param_1[1] = *param_1 + iVar5 * 8;
      param_1[2] = *param_1 + iVar9 * 8;
    }
    else {
      uVar1 = FUN_0022e20c(param_1);
      uVar2 = FUN_0022e20c(param_2);
      if (uVar1 < uVar2) {
        iVar5 = FUN_0022e20c(param_1);
        uVar3 = FUN_0023adb0(param_1);
        iVar9 = FUN_0022e234(param_2);
        uVar6 = FUN_0022e234(param_2);
        FUN_00247dfc(uVar6,iVar9 + iVar5 * 8,uVar3);
        iVar9 = FUN_0022e20c(param_2);
        param_1[1] = *param_1 + iVar9 * 8;
        iVar9 = FUN_0023adb0(param_1);
        uVar3 = FUN_0022e1f4(param_2);
        iVar8 = FUN_0022e234(param_2);
        FUN_0024712c(iVar8 + iVar5 * 8,uVar3,iVar9 + iVar5 * 8,param_1);
      }
      else {
        uVar3 = FUN_0023adb0(param_1);
        uVar6 = FUN_0022e1f4(param_2);
        uVar7 = FUN_0022e234(param_2);
        uVar3 = FUN_00247dfc(uVar7,uVar6,uVar3);
        uVar6 = FUN_0023ad98(param_1);
        FUN_0023abac(param_1,uVar3,uVar6);
        iVar5 = FUN_0022e20c(param_2);
        iVar5 = *param_1 + iVar5 * 8;
        param_1[1] = iVar5;
        param_1[2] = iVar5;
      }
    }
  }
  return param_1;
}

