// rea decompile_all
// name: FUN_000bcb6c
// address: 0xbcb6c
// body: available
// range: 0xbcb6c-0xbcc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bcb6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iStack_2c;
  
  iStack_2c = param_4;
  puVar1 = (undefined4 *)FUN_000cbaf0();
  uVar2 = (**(code **)*puVar1)(puVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (param_4 == 0) {
    FUN_000d6dd8(param_1 + 0x60,0,*(undefined4 *)(param_1 + 0x58),param_2,param_3);
    piVar3 = (int *)FUN_000cbaf0();
    (**(code **)(*piVar3 + 4))(piVar3,param_1 + 0x60,0);
    uVar2 = 1;
  }
  else {
    do {
      iVar4 = FUN_0022c84c(param_1 + 4,&iStack_2c,0);
    } while (iVar4 != 0);
    FUN_000d6dd8(param_1 + 0x60,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2,param_3);
    piVar3 = (int *)FUN_000cbaf0();
    iVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_1 + 0x60,param_4,param_4);
    if (iVar4 == 0) {
      uVar2 = 1;
    }
    else if (iVar4 == 1) {
      uVar2 = FUN_001b29dc(param_1 + 0x60);
      FUN_00002898(s_ERROR__Rename_directory_failed_w_000bcc9c,uVar2);
      uVar2 = 0;
    }
    else {
      FUN_00002898(s_ERROR__Create_directory_failed_000bccc4);
      uVar2 = 0;
    }
  }
  return uVar2;
}

