// rea decompile_all
// name: FUN_000134a0
// address: 0x134a0
// body: available
// range: 0x134a0-0x1353f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000134a0(short *param_1,short *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  short sVar2;
  uint uVar3;
  ulonglong uVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar4;
  
  if (*param_2 == 0) {
    return 0;
  }
  uVar7 = 0;
  uVar1 = uVar7;
  uVar4 = uVar7;
  uVar5 = uVar7;
  while( true ) {
    sVar6 = param_2[uVar1];
    sVar2 = *param_1;
    if ((ushort)(sVar6 - 0x61U) < 0x1a) {
      sVar6 = sVar6 + -0x20;
    }
    if ((ushort)(sVar2 - 0x61U) < 0x1a) {
      sVar2 = sVar2 + -0x20;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    param_1 = param_1 + 1;
    uVar1 = uVar1 + 1;
    if (sVar2 != sVar6) {
      uVar5 = (ulonglong)uVar3;
      uVar1 = uVar7;
    }
    if (param_2[uVar1] == 0) break;
    if (*param_1 == 0) {
      return 0;
    }
  }
  *param_3 = (int)uVar5;
  return 1;
}

