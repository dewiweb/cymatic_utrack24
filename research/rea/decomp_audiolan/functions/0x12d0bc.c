// rea decompile_all
// name: FUN_0012d0bc
// address: 0x12d0bc
// body: available
// range: 0x12d0bc-0x12d1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0012d0bc(int param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r5;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  char *local_20;
  
  local_20 = (char *)*param_2;
  iVar2 = *param_3;
  if (iVar2 != 0) {
    unaff_r5 = DAT_0012d1b4;
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    while( true ) {
      if (*local_20 == -0x80) {
        uVar3 = FUN_00145ab8(local_20,iVar2);
        in_r12 = extraout_r12_00;
      }
      else {
        uVar3 = unaff_r5;
        if (*local_20 == -0x40) {
          uVar3 = FUN_00117ea0();
          in_r12 = extraout_r12;
        }
      }
      iVar5 = 0x10;
      if (uVar3 == unaff_r5) break;
      piVar4 = *(int **)(param_1 + 4);
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        do {
          uVar6 = (uint)*(ushort *)((int)piVar4 + 0xf2);
          if (uVar3 >= uVar6 && uVar3 != uVar6) {
            in_r12 = 1;
          }
          if (uVar3 < uVar6) {
            in_r12 = 0;
          }
          if (uVar3 == uVar6) {
            if (piVar4 == (int *)0x0) goto LAB_0012d17c;
            iVar5 = (**(code **)(*piVar4 + 0xdc))(piVar4,&local_20,param_3);
            in_r12 = extraout_r12_01;
            break;
          }
          puVar1 = (uint *)(piVar4 + in_r12 + 0x3e);
          if ((int *)*puVar1 == (int *)0x0) break;
          if (in_r12 != 0) {
            piVar4 = (int *)(uint)*(byte *)(piVar4 + 0x40);
          }
          uVar6 = (uint)piVar4 & 0x80;
          piVar4 = (int *)*puVar1;
        } while (in_r12 == 0 || uVar6 == 0);
      }
      iVar2 = *param_3;
      if ((iVar2 == 0) || (iVar5 != 0)) break;
    }
  }
LAB_0012d17c:
  *param_2 = local_20;
  return iVar5;
}

