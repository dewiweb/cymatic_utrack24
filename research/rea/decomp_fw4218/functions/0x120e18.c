// rea decompile_all
// name: FUN_00120e18
// address: 0x120e18
// body: available
// range: 0x120e18-0x120f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00120e18(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  int *local_28;
  int iStack_24;
  int local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  if (0x10 < param_3) {
    return 0;
  }
  bVar1 = false;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_001a2920(auStack_30,param_1 + 4);
  piVar3 = (int *)FUN_00120d98(param_1,local_20,local_1c,param_5);
  if (piVar3 == (int *)0x0) {
    iVar4 = FUN_001f01c4(0x30,1);
    if (iVar4 == 0) goto LAB_00120eec;
    piVar3 = (int *)FUN_001a70dc(iVar4,local_20,local_1c,uStack_18,param_5,param_6,param_7,param_8,
                                 param_9,param_10,param_11,param_1);
    bVar1 = true;
    if (piVar3 == (int *)0x0) goto LAB_00120eec;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x7f34) != 0) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x50))
                      (*(int **)(param_1 + 0x30),local_20,local_1c,uStack_18,param_5,param_6,param_7
                       ,param_8,param_9,param_10,param_11,param_13);
    if (iVar4 == 0) {
      if (bVar1) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
LAB_00120eec:
      FUN_001a2938(auStack_30);
      return 0;
    }
    uVar2 = 1;
  }
  *(undefined1 *)((int)piVar3 + 0x1e) = uVar2;
  if (bVar1) {
    iVar4 = local_20 * 0x100 + param_1 + local_1c * 8;
    if (param_5 == 0) {
      *(int **)(iVar4 + 0xb4) = piVar3;
      uVar2 = *(undefined1 *)(iVar4 + 0xb8);
    }
    else {
      if (param_5 != 1) {
        if (param_5 != 2) goto LAB_00120f08;
        *(int **)(iVar4 + 0xb4) = piVar3;
      }
      *(int **)(iVar4 + 0x34) = piVar3;
      uVar2 = *(undefined1 *)(local_20 * 0x100 + param_1 + local_1c * 8 + 0x38);
    }
    FUN_001a6fa4(piVar3,uVar2);
  }
LAB_00120f08:
  local_28 = piVar3;
  FUN_001a709a(piVar3);
  FUN_00079856(param_12,&local_28);
  FUN_00079844(&local_28);
  FUN_001a2938(auStack_30);
  return 1;
}

