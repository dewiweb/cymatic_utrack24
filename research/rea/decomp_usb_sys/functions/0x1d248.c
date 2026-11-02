// rea decompile_all
// name: FUN_0001d248
// address: 0x1d248
// body: available
// range: 0x1d248-0x1d38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001d248(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  while (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)(param_1 + 0x28)) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    lVar3 = (longlong)plVar1 - *(longlong *)(param_1 + 0x38);
    if (lVar3 == 0) break;
    FUN_0001d14c(lVar3);
    FUN_0001d14c(lVar3);
    ExFreePoolWithTag(lVar3);
  }
  while (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)(param_1 + 0x40)) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    if (plVar1 == (longlong *)*(longlong *)(param_1 + 0x50)) break;
    ExFreePoolWithTag();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (longlong *)0x0) {
    while (plVar2 = (longlong *)*plVar1, plVar2 != plVar1) {
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      if (plVar2 == (longlong *)plVar1[2]) break;
      ExFreePoolWithTag();
    }
    ExFreePoolWithTag(plVar1,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    while (plVar2 = (longlong *)*plVar1, plVar2 != plVar1) {
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      if (plVar2 == (longlong *)plVar1[2]) break;
      ExFreePoolWithTag();
    }
    ExFreePoolWithTag(plVar1,0);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

