// rea decompile_all
// name: FUN_0001104c
// address: 0x1104c
// body: available
// range: 0x1104c-0x1110c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001104c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_48 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  RtlInitUnicodeString(local_48,param_3);
  local_28 = local_48;
  local_38[0] = 0x30;
  local_20 = 0x240;
  local_18 = 0;
  local_10 = 0;
  if ((param_4 >> 0x10 & 1) == 0) {
    uVar2 = 0x20019;
    if ((param_4 >> 8 & 1) != 0) {
      uVar2 = 0x2001f;
    }
  }
  else {
    uVar2 = 0xf003f;
  }
  local_30 = param_2;
  if ((param_4 & 1) == 0) {
    iVar1 = ZwOpenKey(param_1,uVar2,local_38);
  }
  else {
    iVar1 = ZwCreateKey();
  }
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  return;
}

