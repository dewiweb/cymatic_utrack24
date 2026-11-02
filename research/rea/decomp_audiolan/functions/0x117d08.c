// rea decompile_all
// name: FUN_00117d08
// address: 0x117d08
// body: available
// range: 0x117d08-0x117e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00117d08(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined1 auStack_48 [36];
  
  FUN_00115d84();
  uVar3 = DAT_00117e3c;
  iVar2 = param_1[0x41];
  uVar1 = *(undefined2 *)((int)param_1 + 0x106);
  if ((short)iVar2 == 2) {
    uVar7 = 1;
  }
  else {
    uVar7 = (undefined2)DAT_00117e40;
  }
  iVar4 = FUN_0010f718(auStack_48);
  FUN_0010f738(iVar4,uVar3);
  *(short *)(iVar4 + 0x10) = (short)iVar2;
  *(undefined2 *)(iVar4 + 0x12) = uVar1;
  *(undefined2 *)(iVar4 + 0x14) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 3;
  *(undefined2 *)(iVar4 + 0x1a) = uVar7;
  *(undefined2 *)(iVar4 + 0x1c) = 0;
  FUN_0010f738(param_1 + 0x43,iVar4);
  *(undefined2 *)(param_1 + 0x47) = *(undefined2 *)(iVar4 + 0x10);
  *(undefined2 *)((int)param_1 + 0x11e) = *(undefined2 *)(iVar4 + 0x12);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar4 + 0x14);
  *(undefined2 *)((int)param_1 + 0x122) = *(undefined2 *)(iVar4 + 0x16);
  *(undefined2 *)(param_1 + 0x49) = *(undefined2 *)(iVar4 + 0x18);
  *(undefined2 *)((int)param_1 + 0x126) = *(undefined2 *)(iVar4 + 0x1a);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar4 + 0x1c);
  *(undefined2 *)((int)param_1 + 0x12a) = *(undefined2 *)(iVar4 + 0x1e);
  FUN_00116344(param_1);
  uVar6 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x4c) <= uVar6) {
      return;
    }
    piVar5 = *(int **)(param_1[0x4b] + uVar6 * 4);
    if (piVar5 == (int *)0x0) break;
    (**(code **)(*piVar5 + 0x10))(piVar5,*(int *)(*param_1 + -0x18) + (int)param_1,4,param_1 + 0x43)
    ;
    uVar6 = uVar6 + 1 & 0xfffeffff;
  }
  return;
}

