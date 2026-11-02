// rea decompile_all
// name: FUN_00008c4c
// address: 0x8c4c
// body: available
// range: 0x8c4c-0x8dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00008c4c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_20;
  
  local_20 = param_4;
  local_20 = FUN_00009e3c(param_2);
  if (local_20 != -1) {
    iVar4 = param_1 + 0x118;
    FUN_001a0700(iVar4);
    piVar1 = (int *)FUN_001dbd40(param_1 + 0x15c,&local_20);
    if ((char)piVar1[8] != '\0') {
LAB_00008cac:
      FUN_001a0d18(iVar4);
      return 1;
    }
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      if (piVar2 == param_2) {
        iVar3 = FUN_000075a4(param_1,piVar1);
        if ((iVar3 != 0) && (iVar3 = FUN_000073ec(param_1,piVar1), iVar3 != 0)) goto LAB_00008cac;
      }
      else if (((char)piVar2[8] == '\x03') &&
              (iVar3 = FUN_000072f0(param_1,piVar1,param_2), iVar3 != 0)) {
        iVar3 = (**(code **)*param_2)(param_2,*piVar1,(int)(char)piVar1[0xb]);
        if ((iVar3 == 0) || (iVar3 = (**(code **)(*param_2 + 4))(param_2), iVar3 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        FUN_001a0d18(iVar4);
        return uVar5;
      }
    }
    FUN_001a0d18(iVar4);
  }
  return 0;
}

