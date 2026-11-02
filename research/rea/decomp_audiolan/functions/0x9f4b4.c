// rea decompile_all
// name: FUN_0009f4b4
// address: 0x9f4b4
// body: available
// range: 0x9f4b4-0x9f63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0009f4b4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iStack_30;
  int *piStack_2c;
  int *local_20;
  int iStack_1c;
  
  FUN_00159f54(&iStack_30,param_1[0x4d]);
  piVar3 = (int *)*local_20;
  if (piVar3 != local_20) {
    do {
      iVar1 = FUN_00159c48(param_1[0x4d],piVar3[2]);
      if ((*(char *)(iVar1 + 0x68) != '\0') && (*(int *)(iVar1 + 0x70) == param_3)) {
        if (*(char *)(iVar1 + 0x6a) != '\0') {
          (**(code **)(*param_1 + 0xe8))(param_1,iVar1);
        }
        FUN_000c908c(iVar1 + 0x68);
        FUN_000a16c0(param_1,iVar1,5);
        if (local_20 == (int *)0x0) {
          return;
        }
        piVar3 = (int *)*local_20;
        while (piVar2 = piVar3, piVar2 != local_20) {
          piVar3 = local_20;
          if (piVar2 != local_20) {
            piVar3 = (int *)*piVar2;
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
            iStack_1c = iStack_1c + -1;
            *piVar2 = (int)piStack_2c;
            piStack_2c = piVar2;
          }
        }
        *local_20 = (int)piStack_2c;
        piStack_2c = local_20;
        piVar3 = (int *)iStack_30;
        while (piVar3 != (int *)0x0) {
          iStack_30 = *piVar3;
          FUN_0010fa20(piVar3[2],piVar3[1],0);
          FUN_0010fa20(piVar3,1,0);
          piVar3 = (int *)iStack_30;
        }
        return;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != local_20);
  }
  FUN_000028a4(DAT_0009f63c);
  FUN_001dd150(&iStack_30);
  return;
}

