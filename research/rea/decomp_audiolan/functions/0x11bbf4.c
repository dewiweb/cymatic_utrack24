// rea decompile_all
// name: FUN_0011bbf4
// address: 0x11bbf4
// body: available
// range: 0x11bbf4-0x11bd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0011bbf4(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x94))
                            (*(int **)(param_1 + 0xc),2,param_3,0,param_1,param_2,param_3,param_4);
  if (piVar3 == (int *)0x0) goto LAB_0011bd44;
  puVar4 = (uint *)(**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x38)) + 0x18))
                             (*(int *)(*piVar3 + -0x38) + (int)piVar3);
  uVar6 = puVar4[3];
  iVar7 = param_2 * 0xc + -10;
  if ((uVar6 == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    uVar1 = *(ushort *)((int)puVar4 + 2);
  }
  else {
    uVar1 = *(ushort *)(uVar6 + iVar7);
  }
  iVar9 = param_2 * 0xc + -0xc;
  if (uVar1 == param_4) {
    if ((uVar6 == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
      uVar8 = *puVar4;
    }
    else {
      uVar8 = *(uint *)(uVar6 + iVar9);
    }
    if ((param_5 & 0xffff) == (uVar8 & 0xffff)) goto LAB_0011bcc4;
    bVar2 = true;
  }
  else {
LAB_0011bcc4:
    bVar2 = false;
  }
  if ((uVar6 == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    *(short *)puVar4 = (short)param_5;
  }
  else {
    *(short *)(uVar6 + iVar9) = (short)param_5;
  }
  if ((puVar4[3] == 0 || param_2 == 0) || ((ushort)puVar4[4] < param_2)) {
    *(short *)((int)puVar4 + 2) = (short)param_4;
  }
  else {
    *(short *)(puVar4[3] + iVar7) = (short)param_4;
  }
  if (bVar2) {
    (**(code **)(*piVar3 + 0x5c))(piVar3,param_2,param_4);
  }
  else {
    (**(code **)(*piVar3 + 0x58))(piVar3,param_2,param_4);
  }
LAB_0011bd44:
  if (param_3 == 0x1000 && (param_5 & 0x80) == 0) {
    piVar5 = *(int **)(*(int *)(param_1 + 0x20) + 0x1a0);
    (**(code **)(*piVar5 + 0x48))(piVar5,param_4);
    FUN_001285fc(*(undefined4 *)(param_1 + 0x20),0xe1,param_4,0);
  }
  return piVar3 != (int *)0x0;
}

