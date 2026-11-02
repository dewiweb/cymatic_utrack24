// rea decompile_all
// name: FUN_0023b60c
// address: 0x23b60c
// body: available
// range: 0x23b60c-0x23b89f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0023b60c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_30;
  int local_2c;
  
  piVar8 = param_1;
  iVar6 = param_2;
  if (param_3 != 0) {
    local_30 = param_3;
    local_2c = param_4;
    iVar1 = FUN_0022e2dc(param_1);
    uVar2 = FUN_0022e358(param_1);
    if (uVar2 < (uint)(iVar1 + param_3)) {
      uVar3 = FUN_0022e2dc(param_1);
      local_30 = FUN_0020b194(uVar3,param_1);
      local_2c = FUN_0022e2dc(param_1);
      local_2c = local_2c + param_3;
      piVar4 = (int *)FUN_00247bfc(&local_2c,&local_30);
      iVar9 = *piVar4;
      iVar1 = FUN_0022f4a0(param_1,iVar9,*param_1);
      uVar3 = FUN_0023b600(param_1,iVar1);
      uVar5 = FUN_0023b8b8(param_1);
      FUN_00246e90(uVar5,param_2,uVar3,param_1,piVar8,uVar5);
      iVar6 = FUN_0023b8b8(param_1);
      iVar6 = param_2 - iVar6;
      iVar7 = FUN_00003e14(iVar6,0x1c);
      FUN_0024781c(iVar1 + iVar7 * 0x1c,param_3,param_4,param_1,piVar8,iVar6);
      iVar6 = FUN_0023b8b8(param_1);
      piVar8 = (int *)(param_2 - iVar6);
      iVar6 = FUN_00003e14(piVar8,0x1c);
      uVar3 = FUN_0023b8a0(param_1);
      FUN_00246e90(param_2,uVar3,iVar1 + (iVar6 + param_3) * 0x1c,param_1,piVar8,uVar3);
      iVar7 = FUN_0022e2dc(param_1);
      uVar3 = FUN_0023b8a0(param_1);
      iVar6 = FUN_0023b8b8(param_1);
      FUN_0023b5d0(param_1,iVar6,uVar3);
      uVar3 = FUN_00003e14(param_1[2] - *param_1,0x1c);
      FUN_0022f464(param_1,*param_1,uVar3);
      *param_1 = iVar1;
      param_1[1] = iVar1 + iVar7 * 0x1c + param_3 * 0x1c;
      param_1[2] = iVar1 + iVar9 * 0x1c;
    }
    else {
      uVar2 = FUN_0023b8a0(param_1);
      param_1[1] = param_1[1] + param_3 * 0x1c;
      if ((uint)(param_2 + param_3 * 0x1c) < uVar2) {
        FUN_00246e90(uVar2 + param_3 * -0x1c,uVar2,uVar2,param_1);
        FUN_00245730(param_2,uVar2 + param_3 * -0x1c,uVar2);
        FUN_002480cc(param_2,param_2 + param_3 * 0x1c,param_4);
      }
      else {
        iVar1 = FUN_00003e14(uVar2 - param_2,0x1c);
        FUN_0024781c(uVar2,param_3 - iVar1,param_4,param_1);
        FUN_00246e90(param_2,uVar2,param_2 + param_3 * 0x1c,param_1);
        FUN_002480cc(param_2,uVar2,param_4);
      }
    }
  }
  return CONCAT44(iVar6,piVar8);
}

