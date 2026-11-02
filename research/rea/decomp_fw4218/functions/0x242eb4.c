// rea decompile_all
// name: FUN_00242eb4
// address: 0x242eb4
// body: available
// range: 0x242eb4-0x2430f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00242eb4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  
  piVar3 = param_1;
  iVar6 = param_2;
  if (param_3 != 0) {
    local_2c = param_3;
    local_28 = param_4;
    iVar1 = FUN_0022ed3c(param_1);
    uVar2 = FUN_0022edb0(param_1);
    if (uVar2 < (uint)(iVar1 + param_3)) {
      uVar4 = FUN_0022ed3c(param_1);
      local_2c = FUN_0020b434(uVar4,param_1);
      local_28 = FUN_0022ed3c(param_1);
      local_28 = local_28 + param_3;
      piVar3 = (int *)FUN_00247bfc(&local_28,&local_2c);
      iVar8 = *piVar3;
      iVar1 = FUN_002307bc(param_1,iVar8,*param_1);
      uVar4 = FUN_00242cf8(param_1,iVar1);
      uVar5 = FUN_0024310c(param_1);
      FUN_002476ac(uVar5,param_2,uVar4,param_1,uVar5);
      iVar6 = FUN_0024310c(param_1);
      FUN_002478ac(iVar1 + (param_2 - iVar6 >> 2) * 4,param_3,param_4,param_1);
      iVar6 = FUN_0024310c(param_1);
      uVar4 = FUN_002430f4(param_1);
      FUN_002476ac(param_2,uVar4,iVar1 + (param_3 + (param_2 - iVar6 >> 2)) * 4,param_1,uVar4);
      iVar7 = FUN_0022ed3c(param_1);
      uVar4 = FUN_002430f4(param_1);
      iVar6 = FUN_0024310c(param_1);
      FUN_00242cc8(param_1,iVar6,uVar4);
      FUN_00230780(param_1,*param_1,param_1[2] - *param_1 >> 2);
      *param_1 = iVar1;
      param_1[1] = iVar1 + iVar7 * 4 + param_3 * 4;
      piVar3 = (int *)(iVar1 + iVar8 * 4);
      param_1[2] = (int)piVar3;
    }
    else {
      uVar2 = FUN_002430f4(param_1);
      param_1[1] = param_1[1] + param_3 * 4;
      if ((uint)(param_2 + param_3 * 4) < uVar2) {
        FUN_002476ac(uVar2 + param_3 * -4,uVar2,uVar2,param_1);
        FUN_00245a50(param_2,uVar2 + param_3 * -4,uVar2);
        piVar3 = (int *)FUN_00248134(param_2,param_2 + param_3 * 4,param_4);
      }
      else {
        FUN_002478ac(uVar2,param_3 - ((int)(uVar2 - param_2) >> 2),param_4,param_1);
        FUN_002476ac(param_2,uVar2,param_2 + param_3 * 4,param_1);
        piVar3 = (int *)FUN_00248134(param_2,uVar2,param_4);
      }
    }
  }
  return CONCAT44(iVar6,piVar3);
}

