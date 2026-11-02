// rea decompile_all
// name: FUN_000bff84
// address: 0xbff84
// body: available
// range: 0xbff84-0xc00d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000bff84(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  wchar16 *local_238;
  undefined1 auStack_234 [8];
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [512];
  undefined1 auStack_28 [4];
  
  local_238 = u_Take_000c00d4;
  FUN_00002934(auStack_228,0x100,u__ls__ls_000c00f8,u__MultiTrack_000c00e0);
  uVar1 = FUN_00230e4c(auStack_28);
  FUN_00231ef4(auStack_22c,auStack_228,uVar1);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar6 = 0;
  FUN_000952cc(uVar1);
  iVar2 = FUN_0023adb0();
  while( true ) {
    FUN_000952cc(uVar1);
    iVar5 = FUN_0023ad98();
    if (iVar5 == iVar2) break;
    FUN_00070a08(auStack_234,iVar2);
    iVar5 = FUN_0022d19c(iVar2);
    iVar3 = FUN_0022d19c(auStack_22c);
    if ((iVar5 == iVar3 + 4) && (iVar5 = FUN_0022d110(iVar2,auStack_22c,0), iVar5 != -1)) {
      uVar4 = FUN_0022d19c(auStack_22c);
      FUN_0022d1b0(&local_238,iVar2,uVar4,0xffffffff);
      uVar4 = FUN_0022d168(&local_238);
      iVar5 = FUN_00003374(uVar4,0,10);
      if (iVar5 != 0) {
        iVar6 = iVar5;
      }
      FUN_00232190(&local_238);
    }
    FUN_00070a68(auStack_234);
    iVar2 = iVar2 + 8;
  }
  FUN_00232190(auStack_22c);
  return iVar6 + 1;
}

