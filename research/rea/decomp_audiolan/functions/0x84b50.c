// rea decompile_all
// name: FUN_00084b50
// address: 0x84b50
// body: available
// range: 0x84b50-0x84c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00084b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00068bfc(param_1,param_2,param_3);
  bVar1 = false;
  switch(param_3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    bVar1 = true;
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
  }
  FUN_001bbbd0(&uStack_30);
  uVar2 = FUN_0008cf78();
  iVar3 = FUN_0008ce54(uVar2,s_AudioHWService_00084c8c,&uStack_30);
  if (iVar3 == 0) {
    FUN_000028a4(DAT_00084c9c);
    uVar2 = FUN_000a4714(&uStack_30);
  }
  else {
    for (iVar3 = 0; *(int *)(DAT_00084ca0 + iVar3 * 4) != 0; iVar3 = iVar3 + 1) {
      piVar4 = (int *)FUN_001d75e4(&uStack_30);
      piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))
                                (piVar4,*(undefined4 *)(DAT_00084ca0 + iVar3 * 4));
      if (piVar4 != (int *)0x0) {
        if (bVar1) {
          (**(code **)(*piVar4 + 0x14))(piVar4);
        }
        else {
          (**(code **)(*piVar4 + 0x18))(piVar4);
        }
      }
    }
    uVar2 = FUN_000a4714(&uStack_30);
  }
  return CONCAT44(uStack_30,uVar2);
}

