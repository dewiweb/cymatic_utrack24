// rea decompile_all
// name: FUN_0001a86c
// address: 0x1a86c
// body: available
// range: 0x1a86c-0x1a926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a922 to 0x2358c FUN_0002358c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a86c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = DAT_00029268;
  plVar6 = (longlong *)(DAT_00029268 + 0x120);
  if ((longlong *)*plVar6 != plVar6) {
    lVar5 = *plVar6 - *(longlong *)(DAT_00029268 + 0x130);
    while (lVar2 = lVar5, lVar2 != 0) {
      if (lVar2 == 0) {
        if ((longlong *)*plVar6 == plVar6) {
LAB_0001a8b9:
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar6 - *(longlong *)(lVar3 + 0x130);
        }
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x130) + lVar2);
        if (plVar1 == plVar6) goto LAB_0001a8b9;
        lVar5 = (longlong)plVar1 - *(longlong *)(lVar3 + 0x130);
      }
      if ((param_1 == 0) || (*(longlong *)(lVar2 + 0x20) == param_1)) {
        plVar1 = (longlong *)(lVar2 + *(longlong *)(lVar3 + 0x130));
        *(longlong *)plVar1[1] = *plVar1;
        *(longlong *)(*plVar1 + 8) = plVar1[1];
        plVar1[1] = (longlong)plVar1;
        *plVar1 = (longlong)plVar1;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
        plVar1 = *(longlong **)(lVar3 + 0x140);
        plVar4 = (longlong *)(lVar2 + *(longlong *)(lVar3 + 0x148));
        *plVar4 = *plVar1;
        plVar4[1] = (longlong)plVar1;
        *(longlong **)(*plVar1 + 8) = plVar4;
        *plVar1 = (longlong)plVar4;
      }
    }
  }
  FUN_0002358c((longlong)plVar6);
  return;
}

