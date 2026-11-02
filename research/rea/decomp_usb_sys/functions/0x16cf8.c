// rea decompile_all
// name: FUN_00016cf8
// address: 0x16cf8
// body: available
// range: 0x16cf8-0x16da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016cf8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8 [108];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_1e8;
  lVar3 = 0;
  do {
    if (lVar3 == 0) {
      if ((longlong *)*param_1 == param_1) goto LAB_00016d83;
      lVar3 = *param_1 - param_1[2];
    }
    else {
      plVar1 = *(longlong **)(param_1[2] + lVar3);
      if (plVar1 == param_1) {
LAB_00016d83:
        FUN_00026110(local_18 ^ (ulonglong)auStack_1e8);
        return;
      }
      lVar3 = (longlong)plVar1 - param_1[2];
    }
    if (lVar3 == 0) goto LAB_00016d83;
    lVar2 = *(longlong *)(lVar3 + 0xf0);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x98) != 0)) {
      FUN_0001eb88(lVar2,local_1c8);
      (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x20))(*(longlong **)(lVar2 + 0x98),local_1c8);
    }
  } while( true );
}

