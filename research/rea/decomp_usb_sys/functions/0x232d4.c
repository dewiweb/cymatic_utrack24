// rea decompile_all
// name: FUN_000232d4
// address: 0x232d4
// body: available
// range: 0x232d4-0x233aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000232d4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  iVar2 = FUN_000193d8(*(longlong *)(param_1 + 0x20),local_78);
  if (iVar2 < 0) {
    if (local_78[0] != 0) {
      ZwClose();
    }
  }
  else {
    local_68[0] = '\0';
    FUN_00022da8(param_1,local_68);
    lVar1 = local_78[0];
    iVar2 = FUN_00011418(param_2,local_78[0]);
    if (iVar2 < 0) {
      if (lVar1 != 0) {
        ZwClose(lVar1);
      }
    }
    else if (lVar1 != 0) {
      ZwClose(lVar1);
    }
  }
  FUN_00026110(local_18 ^ (ulonglong)auStack_98);
  return;
}

