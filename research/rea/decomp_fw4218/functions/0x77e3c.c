// rea decompile_all
// name: FUN_00077e3c
// address: 0x77e3c
// body: available
// range: 0x77e3c-0x77f05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00077e3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = FUN_001c6b14(DAT_00077f0c,DAT_00077f08);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_0013cff0(iVar1,0), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_5 + 0x10))(param_5);
    local_2c = 0x800;
    iVar3 = FUN_001f01c4(0x800,1);
    if (iVar3 != 0) {
      local_28 = iVar3;
      uVar4 = (**(code **)(*param_5 + 0xc))(param_5);
      (**(code **)(*piVar2 + 0x24))(piVar2,uVar4);
      uVar4 = (**(code **)(*param_5 + 0x10))(param_5);
      (**(code **)(*piVar2 + 0x28))(piVar2,uVar4);
      uVar4 = (**(code **)(*param_5 + 0x14))(param_5);
      (**(code **)(*piVar2 + 0x2c))(piVar2,uVar4);
      (**(code **)(*param_5 + 8))(param_5,&local_2c,&local_28);
      for (uVar5 = 0; uVar5 < iVar1 - 2U; uVar5 = uVar5 + 1) {
        (**(code **)(*piVar2 + 0x1c))(piVar2,uVar5,*(undefined1 *)(iVar3 + uVar5 + 2));
      }
      FUN_001eecc8(iVar3);
      iVar1 = FUN_00077f10(local_24,uStack_20,uStack_1c,uStack_18,piVar2);
      if (iVar1 != 0) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
        return 1;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
    }
  }
  return 0;
}

