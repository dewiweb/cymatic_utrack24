// rea decompile_all
// name: FUN_0007fbac
// address: 0x7fbac
// body: available
// range: 0x7fbac-0x7fd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0007fbac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_001c7218(param_2,DAT_0007fd40,DAT_0007fd3c,0xffffffff);
  if (iVar1 != 0) {
    uVar6 = *(undefined4 *)(*param_4 + 0x14);
    if ((*(int *)param_4[1] == 0) ||
       (iVar2 = FUN_001c7218(*(int *)param_4[1],DAT_0007fd48,DAT_0007fd44,0xffffffff), iVar2 == 0))
    {
      if (*(int *)param_4[1] == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_001c7218(*(int *)param_4[1],DAT_0007fd48,DAT_0007fd50,0xffffffff);
      if (iVar2 == 0) {
        return (int *)0x0;
      }
      if (param_4[2] - param_4[1] >> 2 != 2) {
        return (int *)0x0;
      }
      iVar3 = *(int *)(param_4[1] + 4);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_001c7218(iVar3,DAT_0007fd48,DAT_0007fd50,0xffffffff);
      }
      iVar5 = FUN_001f01c4(0x38,1);
      if (iVar5 == 0) {
        return (int *)0x0;
      }
      piVar4 = (int *)FUN_0011195c(iVar5,iVar1,uVar6);
      iVar1 = DAT_0007fd54;
      *piVar4 = DAT_0007fd54;
      *(undefined2 *)(piVar4 + 0xd) = 0;
      piVar4[0xc] = iVar3;
      piVar4[9] = 0;
      piVar4[10] = 0;
      piVar4[0xb] = iVar2;
      iVar1 = (**(code **)(iVar1 + 0x18))();
    }
    else {
      if (param_4[2] - param_4[1] >> 2 != 1) {
        return (int *)0x0;
      }
      iVar3 = FUN_001f01c4(0x2c,1);
      if (iVar3 == 0) {
        return (int *)0x0;
      }
      piVar4 = (int *)FUN_0011195c(iVar3,iVar1,uVar6);
      iVar1 = DAT_0007fd4c;
      *piVar4 = DAT_0007fd4c;
      piVar4[9] = 0;
      piVar4[10] = iVar2;
      iVar1 = (**(code **)(iVar1 + 0x18))();
    }
    if (iVar1 != 0) {
      return piVar4;
    }
    (**(code **)(*piVar4 + 0x14))(piVar4);
  }
  return (int *)0x0;
}

