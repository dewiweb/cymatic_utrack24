// rea decompile_all
// name: FUN_0005f9e4
// address: 0x5f9e4
// body: available
// range: 0x5f9e4-0x5fb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0005f9e4(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                undefined1 param_5,undefined1 param_6,int param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int *param_11,undefined1 param_12)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  *param_1 = DAT_0005fb60;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((int)param_1 + 5) = param_3;
  *(undefined1 *)((int)param_1 + 6) = param_4;
  *(undefined1 *)((int)param_1 + 7) = param_5;
  *(undefined1 *)(param_1 + 2) = param_6;
  param_1[6] = 0;
  param_1[4] = param_8;
  param_1[5] = param_9;
  param_1[3] = param_7 + 3U & 0xfffffffc;
  param_1[7] = 0;
  param_1[8] = param_10;
  uVar1 = FUN_000cbaf0();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0xb) = param_12;
  param_1[0xc] = 0xffffffff;
  iVar2 = FUN_001ad814(param_1 + 0xd);
  FUN_001ad784(iVar2,1,1,1,s_Queue_0005fb64);
  *(undefined1 *)(iVar2 + 0x54) = 8;
  piVar5 = DAT_0005fb6c;
  iVar3 = *param_11;
  if (*(int *)(iVar3 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar3 + -4);
    if (0xfffffff1 < uVar7) {
      FUN_00173800(8,&LAB_0005fb70,&LAB_0005fb70,uVar7,0xfffffff1);
    }
    if (uVar7 != 0) {
      piVar5 = (int *)FUN_00173860((uVar7 + 8) * 2,0);
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
      }
      piVar5[1] = uVar7;
      piVar5[2] = uVar7;
      puVar6 = (undefined2 *)((int)piVar5 + uVar7 * 2 + 0xc);
      *piVar5 = 0;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    *(int *)(iVar2 + 0x58) = (int)(piVar5 + 3);
    FUN_000039e0(piVar5 + 3,*param_11,uVar7 << 1);
  }
  else {
    *(int *)(iVar2 + 0x58) = iVar3;
    piVar4 = (int *)(iVar3 + -0xc);
    if (piVar4 != piVar5) {
      *piVar4 = *piVar4 + 1;
    }
  }
  return iVar2 + -0x34;
}

