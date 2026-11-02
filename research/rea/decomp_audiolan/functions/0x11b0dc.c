// rea decompile_all
// name: FUN_0011b0dc
// address: 0x11b0dc
// body: available
// range: 0x11b0dc-0x11b2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011b0dc(int param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_28 [8];
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x18))
                    ((int)piVar2 + *(int *)(*piVar2 + -0x38));
  if (param_3 == 0x500) {
    FUN_0010e240(iVar3 + 8,param_4);
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x94))
                            (*(int **)(param_1 + 0xc),4,param_3,0);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar4 = (uint *)(**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x18))
                             (*(int *)(*piVar2 + -0x38) + (int)piVar2);
  iVar3 = param_2 * 0xc + -8;
  if ((puVar4[3] == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    puVar5 = puVar4 + 1;
  }
  else {
    puVar5 = (uint *)(puVar4[3] + iVar3);
  }
  iVar6 = FUN_0015e784(puVar5,param_4);
  iVar7 = param_2 * 0xc + -0xc;
  if (iVar6 == 0) {
    if ((puVar4[3] == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
      uVar9 = *puVar4;
    }
    else {
      uVar9 = *(uint *)(puVar4[3] + iVar7);
    }
    if ((param_5 & 0xffff) != (uVar9 & 0xffff)) {
      bVar1 = true;
      goto LAB_0011b1f8;
    }
  }
  bVar1 = false;
LAB_0011b1f8:
  if ((puVar4[3] == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    *(short *)puVar4 = (short)param_5;
  }
  else {
    *(short *)(puVar4[3] + iVar7) = (short)param_5;
  }
  uVar8 = FUN_0010e728(auStack_28,param_4);
  if ((puVar4[3] == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    puVar4 = puVar4 + 1;
  }
  else {
    puVar4 = (uint *)(puVar4[3] + iVar3);
  }
  FUN_0010e820(puVar4,uVar8);
  FUN_0010e7f4(auStack_28);
  if (bVar1) {
    (**(code **)(*piVar2 + 0x5c))(piVar2,param_2,0);
  }
  else {
    (**(code **)(*piVar2 + 0x58))(piVar2,param_2,0);
  }
  return 1;
}

