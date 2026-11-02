// rea decompile_all
// name: FUN_0001d880
// address: 0x1d880
// body: available
// range: 0x1d880-0x1d91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0001d880(longlong param_1,int param_2,char param_3,undefined1 *param_4,undefined1 *param_5,
                 longlong *param_6)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  plVar4 = (longlong *)(param_1 + 0x28);
  lVar7 = 0;
  iVar5 = 1000000000;
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar4 == plVar4) goto LAB_0001d8ee;
      lVar6 = *plVar4 - *(longlong *)(param_1 + 0x38);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar6);
      if (plVar2 == plVar4) {
LAB_0001d8ee:
        if (lVar7 != 0) {
          uVar1 = *(undefined1 *)(*(longlong *)(lVar7 + 0x20) + 3);
          *param_4 = *(undefined1 *)(*(longlong *)(lVar7 + 0x20) + 2);
          *param_5 = uVar1;
          *param_6 = lVar7;
        }
        return lVar7 != 0;
      }
      lVar6 = (longlong)plVar2 - *(longlong *)(param_1 + 0x38);
    }
    if (lVar6 == 0) goto LAB_0001d8ee;
    if (((((*(byte *)(lVar6 + 0x40) & 0x80) == 0x80) == (bool)param_3) &&
        (iVar3 = *(int *)(lVar6 + 0x18) - param_2, -1 < iVar3)) && (iVar3 < iVar5)) {
      lVar7 = lVar6;
      iVar5 = iVar3;
    }
  } while( true );
}

