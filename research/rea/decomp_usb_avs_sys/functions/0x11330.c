// rea decompile_all
// name: FUN_00011330
// address: 0x11330
// body: available
// range: 0x11330-0x113f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00011330(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (ulonglong *)ExAllocatePoolWithTag(0,0x4108,0x42737661);
  if (puVar2 != (ulonglong *)0x0) {
    FUN_0001cf40(puVar2,0,0x4108);
    puVar3 = FUN_00011150(puVar2,param_1);
    if (puVar3 != (undefined8 *)0x0) {
      KsAcquireDevice(param_1);
      iVar1 = KsAddItemToObjectBag(*(undefined8 *)(param_1 + 8),puVar3,FUN_0001a580);
      KsReleaseDevice(param_1);
      if (iVar1 < 0) {
        (**(code **)*puVar3)(puVar3,1);
        return iVar1;
      }
      *(undefined8 **)(param_1 + 0x10) = puVar3;
      return iVar1;
    }
  }
  return -0x3fffff66;
}

