// rea decompile_all
// name: FUN_00016e98
// address: 0x16e98
// body: available
// range: 0x16e98-0x16f68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00016e98(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int unaff_EBX;
  longlong local_res20;
  longlong local_18 [2];
  
  local_res20 = 0;
  iVar1 = FUN_00016dd8(param_1,&local_res20,L"Devices");
  if (-1 < iVar1) {
    local_18[0] = 0;
    iVar1 = FUN_00011418(local_18,local_res20);
    if ((-1 < iVar1) && (iVar1 = FUN_00011474(param_2,local_18[0],param_3 + 0x1ab4), -1 < iVar1)) {
      if (local_18[0] != 0) {
        ZwClose();
      }
      if (local_res20 == 0) {
        return unaff_EBX;
      }
      ZwClose();
      return unaff_EBX;
    }
    if (local_18[0] != 0) {
      ZwClose();
    }
  }
  if (local_res20 != 0) {
    ZwClose();
  }
  return unaff_EBX;
}

