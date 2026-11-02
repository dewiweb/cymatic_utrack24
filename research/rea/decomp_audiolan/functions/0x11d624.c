// rea decompile_all
// name: FUN_0011d624
// address: 0x11d624
// body: available
// range: 0x11d624-0x11d7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0011d624(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,undefined2 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  piVar1 = (int *)FUN_0011be80();
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00142754();
    piVar3 = (int *)FUN_00130ef0(uVar2,2,param_4,0);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x24))(piVar3);
      if ((*(int *)(puVar4 + 6) == 0 || param_3 == 0) || ((ushort)puVar4[8] < param_3)) {
        *puVar4 = param_6;
      }
      else {
        *(undefined2 *)(*(int *)(puVar4 + 6) + param_3 * 0xc + -0xc) = param_6;
      }
      if ((*(int *)(puVar4 + 6) == 0 || param_3 == 0) || ((ushort)puVar4[8] < param_3)) {
        puVar4[1] = (short)param_5;
      }
      else {
        *(short *)(*(int *)(puVar4 + 6) + param_3 * 0xc + -10) = (short)param_5;
      }
      (**(code **)(*piVar3 + 0x70))(piVar3,param_3,param_5);
      if (param_4 == 0x1011) {
        iVar5 = (**(code **)(*piVar1 + 0x24))(piVar1);
        iVar6 = 0;
        if (iVar5 != 0) {
          iVar6 = *(int *)(iVar5 + 8);
        }
        if (iVar5 != 0 && iVar6 != 0) {
          FUN_0010e7e0(auStack_30);
          iVar6 = FUN_0012de68(piVar3[0x1b],param_5,auStack_30,auStack_28);
          if (iVar6 != 0) {
            if (param_5 == 0 || param_5 == 0x8000) {
              (**(code **)(**(int **)(iVar5 + 8) + 0x40))(*(int **)(iVar5 + 8),0);
            }
            else {
              piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x1a0);
              uVar2 = FUN_0015e89c(auStack_30);
              (**(code **)(*piVar1 + 0x58))(piVar1,*(undefined4 *)(iVar5 + 8),uVar2);
            }
          }
          FUN_0010e7f4(auStack_30);
        }
      }
      return 1;
    }
  }
  return 0;
}

