// rea decompile_all
// name: FUN_00085574
// address: 0x85574
// body: available
// range: 0x85574-0x85693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00085574(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)FUN_0006a398(param_1);
  *puVar1 = _DAT_00085694;
  iVar2 = FUN_00087b48(puVar1 + 0x19);
  iVar2 = FUN_000844d8(iVar2 + 0x14);
  uVar3 = FUN_001d9828(auStack_18);
  iVar2 = FUN_001db734(iVar2 + 0x24,auStack_14,uVar3);
  iVar6 = iVar2 + -0x9c;
  FUN_000028a4(s_Instantiating__s_HAL_000856a8,s___uT24_AudioLan_00085696 + 2);
  FUN_001bbbd0(auStack_24);
  uVar3 = FUN_0008cf78();
  iVar4 = FUN_0008ce54(uVar3,s_AudioHWService_000856c0,auStack_24);
  if (iVar4 == 0) {
    FUN_000a4714(auStack_24);
  }
  else {
    piVar5 = (int *)FUN_001d75e4(auStack_24);
    (**(code **)(*piVar5 + 0x1c))(piVar5,iVar6);
    FUN_00086b70(iVar2 + -0x38);
    FUN_00110eec();
    iVar2 = FUN_00084b44(iVar6);
    if (iVar2 == 0) {
      FUN_000028a4(s_ERROR__constructor__prepareSyste_000856d0);
      FUN_000a4714(auStack_24);
    }
    else {
      iVar2 = FUN_00084aa0(iVar6);
      if (iVar2 == 0) {
        FUN_000a4714(auStack_24);
      }
      else {
        FUN_000a4714(auStack_24);
      }
    }
  }
  return iVar6;
}

