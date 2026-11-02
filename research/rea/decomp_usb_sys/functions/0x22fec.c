// rea decompile_all
// name: FUN_00022fec
// address: 0x22fec
// body: available
// range: 0x22fec-0x230da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022fec(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = 0;
  param_2[1] = uVar2;
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
        return;
      }
      lVar4 = *plVar1 - *(longlong *)(param_1 + 0x40);
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar4);
      if (plVar3 == plVar1) {
        return;
      }
      lVar4 = (longlong)plVar3 - *(longlong *)(param_1 + 0x40);
    }
    if (lVar4 == 0) break;
    if ((uint)param_2[2] < 0x10) {
      uVar5 = (ulonglong)(uint)param_2[2];
      param_2[uVar5 * 0xe + 3] = *(undefined4 *)(lVar4 + 0x1c);
      param_2[uVar5 * 0xe + 4] = *(undefined4 *)(lVar4 + 0x18);
      param_2[uVar5 * 0xe + 5] = *(undefined4 *)(lVar4 + 0x48);
      param_2[uVar5 * 0xe + 6] = *(undefined4 *)(lVar4 + 0x50);
      param_2[uVar5 * 0xe + 7] = (uint)*(byte *)(*(longlong *)(lVar4 + 0x28) + 0x79);
      memcpy(param_2 + uVar5 * 0xe + 8,(void *)(lVar4 + 0xa0),0x24);
      param_2[uVar5 * 0xe + 8] = (uint)*(byte *)(lVar4 + 0x34);
      param_2[uVar5 * 0xe + 9] = *(undefined4 *)(lVar4 + 0x30);
      param_2[2] = param_2[2] + 1;
    }
  }
  return;
}

