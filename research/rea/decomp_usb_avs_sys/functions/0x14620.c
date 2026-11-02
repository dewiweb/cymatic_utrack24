// rea decompile_all
// name: FUN_00014620
// address: 0x14620
// body: available
// range: 0x14620-0x14725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014620(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                char param_5)

{
  int iVar1;
  undefined1 local_58 [8];
  longlong local_50;
  int local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    ZwClose();
    *param_1 = 0;
  }
  local_48 = 0;
  RtlInitUnicodeString(local_58,param_3);
  local_30 = local_58;
  local_40[0] = 0x30;
  local_28 = 0x240;
  local_20 = 0;
  local_18 = 0;
  local_38 = param_2;
  if (param_5 == '\0') {
    iVar1 = ZwOpenKey(param_1,param_4,local_40);
  }
  else {
    iVar1 = ZwCreateKey();
  }
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  if (local_50 != 0) {
    if (local_48 == 1) {
      RtlFreeUnicodeString(local_58);
    }
    else if (local_48 == 2) {
      ExFreePoolWithTag(local_50,0);
    }
  }
  return iVar1;
}

