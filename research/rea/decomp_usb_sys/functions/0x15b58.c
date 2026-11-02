// rea decompile_all
// name: FUN_00015b58
// address: 0x15b58
// body: available
// range: 0x15b58-0x15c36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015b58(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  plVar1 = (longlong *)(param_1 + 0xd0);
LAB_00015b75:
  do {
    if (lVar4 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
        return;
      }
      lVar4 = *plVar1 - *(longlong *)(param_1 + 0xe0);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar4);
      if (plVar2 == plVar1) {
        return;
      }
      lVar4 = (longlong)plVar2 - *(longlong *)(param_1 + 0xe0);
    }
    if (lVar4 == 0) {
      return;
    }
  } while ((*(char *)(lVar4 + 0x1b15) == '\0') || (*(char *)(lVar4 + 0x1c) == '\0'));
  FUN_00012400(lVar4);
  lVar5 = 0;
  plVar2 = (longlong *)(lVar4 + 0xa0);
LAB_00015bc8:
  if (lVar5 == 0) {
    if ((longlong *)*plVar2 == plVar2) goto LAB_00015c0c;
    lVar5 = *plVar2 - *(longlong *)(lVar4 + 0xb0);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0xb0) + lVar5);
    if (plVar3 == plVar2) goto LAB_00015c0c;
    lVar5 = (longlong)plVar3 - *(longlong *)(lVar4 + 0xb0);
  }
  if (lVar5 == 0) goto LAB_00015c0c;
  if (*(char *)(lVar5 + 0x28) != '\0') {
    *(undefined1 *)(lVar5 + 0x28) = 0;
    IoInvalidateDeviceRelations(*(undefined8 *)(lVar4 + 0x70),0);
  }
  goto LAB_00015bc8;
LAB_00015c0c:
  *(undefined1 *)(lVar4 + 0x1b15) = 0;
  *(undefined4 *)(lVar4 + 0xe8) = 1;
  goto LAB_00015b75;
}

