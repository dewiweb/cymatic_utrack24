// rea decompile_all
// name: FUN_000d0c18
// address: 0xd0c18
// body: available
// range: 0xd0c18-0xd0d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d0c18(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  cVar1 = *(char *)(param_1 + 0xac);
  if (cVar1 == '\0') {
    FUN_000d0700(param_1);
  }
  else if (cVar1 == '\r') {
    uVar3 = FUN_0011eda0(0xd);
    FUN_001205a0(uVar3,s_USB__Unsupported_File_System_000d0d90);
    uVar3 = FUN_0011eda0();
    FUN_0011fe74(uVar3,s_Format_USB_Drive__000d0db4,s_USB__Unsupported_File_System_000d0d90 + 0x1c,0
                 ,&DAT_000d0db0,0);
    uVar3 = FUN_0011eda0();
    FUN_000a1000(uVar3,0x1b);
    *(undefined1 *)(param_1 + 0x98) = 1;
    FUN_000932c4(uVar2,0x80000002);
  }
  else {
    uVar3 = FUN_0011eda0(cVar1);
    FUN_001205a0(uVar3,s_USB__Error__000d0dc8);
    uVar3 = FUN_0011eda0();
    FUN_0011ff88(uVar3,s_Error_Reading_Drive_000d0dd4,s_USB__Unsupported_File_System_000d0d90 + 0x1c
                );
    uVar3 = FUN_0011eda0();
    FUN_000a1000(uVar3,0x1c);
    FUN_000932c4(uVar2,3);
  }
  FUN_002041e0(auStack_34);
  uVar2 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar2,s_SystemDataService_000d0de8,auStack_34);
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__MixerShellCommand__no_Sys_000d0dfc);
    uVar2 = FUN_000d0510(auStack_34);
  }
  else {
    uVar2 = FUN_002041b0(auStack_28,auStack_34);
    FUN_000f8ee0();
    uVar3 = FUN_000f6910();
    FUN_0006a310(uVar3,uVar2);
    FUN_000d0510(auStack_28);
    uVar2 = FUN_000d0510(auStack_34);
  }
  return uVar2;
}

