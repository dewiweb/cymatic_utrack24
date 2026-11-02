// rea decompile_all
// name: FUN_001a302c
// address: 0x1a302c
// body: available
// range: 0x1a302c-0x1a310f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a302c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_24;
  
  *param_2 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0xfffffffe;
  }
  iVar1 = FUN_000034d0();
  iVar1 = iVar1 + 2;
  if ((code *)*DAT_001a3110 == entry) {
    iVar2 = FUN_0019b388(iVar1);
  }
  else {
    iVar2 = (*(code *)*DAT_001a3110)();
  }
  if (iVar2 != 0) {
    *param_2 = iVar2;
    FUN_000028d8(iVar2,&DAT_001a3114,*param_1);
    local_24 = 0;
    iVar3 = FUN_001a4bc4(param_1 + 1,0);
    while (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_001a4bdc(param_1 + 1,local_24);
      if (puVar4[1] == 0) {
        iVar3 = FUN_000034d0(*puVar4);
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = FUN_000034d0(*puVar4);
        iVar5 = FUN_000034d0(puVar4[1]);
        iVar3 = iVar3 + iVar5 + 3;
      }
      iVar1 = iVar1 + iVar3;
      if ((code *)*DAT_001a3118 == entry) {
        iVar2 = FUN_001ab47c(iVar2,iVar1);
      }
      else {
        iVar2 = (*(code *)*DAT_001a3118)(iVar2);
      }
      iVar3 = FUN_000034d0();
      if (puVar4[1] == 0) {
        FUN_000028d8(iVar3 + iVar2,&DAT_001a3124,*puVar4);
      }
      else {
        FUN_000028d8(iVar3 + iVar2,s___s__s_001a311c,*puVar4);
      }
      local_24 = local_24 + 1;
      iVar3 = FUN_001a4bc4(param_1 + 1,local_24);
    }
    *param_2 = iVar2;
    return 0;
  }
  return 0xfffffffc;
}

