// rea decompile_all
// name: FUN_0019fb34
// address: 0x19fb34
// body: available
// range: 0x19fb34-0x19fc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019fb34(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar7 = param_1 + 1;
  param_1[1] = 0;
  *param_1 = (int)piVar7;
  iVar4 = DAT_0019fc7c;
  param_1[5] = 0;
  param_1[3] = param_2;
  param_1[4] = iVar4;
  param_1[2] = (int)param_1;
  FUN_0017ae30(param_1 + 5,param_2,1);
  if (param_1[4] == iVar4) {
    iVar4 = param_1[2];
    if (((int *)*param_1 == piVar7) ||
       ((undefined4 *)(*(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x10)) != param_3)) {
      puVar6 = (undefined4 *)((int)param_3 + 0x1fU & 0xfffffff8);
      puVar6[1] = (int)param_3 + (param_4 - (int)puVar6);
      *puVar6 = 0;
      *param_3 = 0;
      param_3[3] = puVar6;
      param_3[1] = 0;
      param_3[2] = puVar6;
      uVar5 = puVar6[1];
      param_3[5] = uVar5;
      param_3[4] = uVar5;
      puVar6 = (undefined4 *)param_1[2];
      *puVar6 = param_3;
      param_3[1] = puVar6;
      *param_3 = piVar7;
      param_1[2] = (int)param_3;
    }
    else {
      puVar6 = *(undefined4 **)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + param_4;
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + param_4;
      if (puVar6 == (undefined4 *)0x0) {
        *param_3 = 0;
        param_3[1] = param_4;
        *(undefined4 **)(iVar4 + 0xc) = param_3;
      }
      else {
        for (puVar1 = (undefined4 *)*puVar6; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          puVar6 = puVar1;
        }
        if ((undefined4 *)(puVar6[1] + (int)puVar6) == param_3) {
          puVar6[1] = puVar6[1] + param_4;
        }
        else {
          *param_3 = 0;
          param_3[1] = param_4;
          *puVar6 = param_3;
        }
      }
    }
  }
  iVar3 = *(int *)(DAT_0019fc80 + 0x34);
  iVar4 = DAT_0019fc80;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar4 = iVar2;
    iVar3 = *(int *)(iVar2 + 0x34);
  }
  *(int **)(iVar4 + 0x34) = param_1;
  param_1[0xd] = 0;
  return 0;
}

