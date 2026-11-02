// rea decompile_all
// name: FUN_000e5a90
// address: 0xe5a90
// body: available
// range: 0xe5a90-0xe5bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000e5a90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [4];
  
  FUN_000aa570();
  uVar1 = FUN_000aa88c();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = FUN_0006d818(uVar2);
  iVar4 = FUN_001b4efc(uVar1);
  uVar5 = 0;
  if (((iVar4 != 0) && (uVar5 = (uint)*DAT_000e5bb4, uVar5 == 0)) && (iVar3 == 1)) {
    uVar6 = FUN_00230e04(auStack_28);
    FUN_00244e94(auStack_40,uVar6);
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_44 = FUN_0006d8f8(uVar2,iVar3);
      if (local_44 != 0) {
        FUN_00244e34(auStack_40,&local_44);
      }
    }
    uVar2 = FUN_00244ec8(auStack_34,auStack_40);
    iVar3 = FUN_0008b578(uVar1,uVar2);
    FUN_00244f90(auStack_34);
    if (iVar3 == 0) {
      *DAT_000e5bb4 = 1;
    }
    uVar5 = FUN_00244f90(auStack_40);
  }
  return uVar5;
}

