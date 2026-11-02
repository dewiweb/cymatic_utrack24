// rea decompile_all
// name: FUN_00014620
// address: 0x14620
// body: available
// range: 0x14620-0x146ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014620(void)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  
  lVar1 = DAT_00029268;
  local_res18[1] = 0;
  local_res18[0] = 0;
  iVar2 = FUN_00016dd8(local_res18 + 1,local_res18,L"Devices");
  if (iVar2 < 0) {
    if (local_res18[0] != 0) {
      ZwClose();
    }
  }
  else {
    local_res10[0] = *(undefined4 *)(lVar1 + 0x718);
    FUN_00011568(local_res18,L"RankGenerationCount",local_res10,local_res10[0]);
    *(undefined4 *)(lVar1 + 0x718) = local_res10[0];
    local_res10[0] = *(undefined4 *)(lVar1 + 0x71c);
    FUN_00011568(local_res18,L"RankNextValue",local_res10,*(undefined4 *)(lVar1 + 0x71c));
    *(undefined4 *)(lVar1 + 0x71c) = local_res10[0];
    if (local_res18[0] != 0) {
      ZwClose();
    }
    iVar2 = 0;
  }
  FUN_00016db0(local_res18 + 1);
  return iVar2;
}

