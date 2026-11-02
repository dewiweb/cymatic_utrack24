// rea decompile_all
// name: FUN_0012c5f0
// address: 0x12c5f0
// body: available
// range: 0x12c5f0-0x12c6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012c5f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x28))();
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))(*(int **)(param_1 + 4),param_2);
    if (iVar3 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = 0;
      while (iVar1 = iVar2, iVar1 != 0) {
        if (*(int *)(iVar1 + 4) == param_2) {
          if (iVar1 != 0) goto LAB_0012c670;
          break;
        }
        iVar3 = iVar1;
        iVar2 = *(int *)(iVar1 + 0x18);
      }
      puVar4 = (undefined4 *)FUN_0016d7a4(0x20,DAT_0012c6dc);
      uVar5 = DAT_0012c6e0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[6] = 0;
        *puVar4 = uVar5;
        puVar4[1] = param_2;
        *(undefined1 *)(puVar4 + 2) = 0;
      }
      uVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x80))();
      *(undefined8 *)(puVar4 + 4) = uVar6;
      if (iVar3 == 0) {
        *(undefined4 **)(param_1 + 8) = puVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 0x18) = puVar4;
      }
LAB_0012c670:
      uVar5 = 1;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar5;
}

