// rea decompile_all
// name: FUN_0001b09c
// address: 0x1b09c
// body: available
// range: 0x1b09c-0x1b1c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001b09c(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_88 [16];
  
  uVar8 = 0;
  iVar7 = 0;
  lVar6 = 0;
  plVar1 = (longlong *)(param_2 + 0x60);
LAB_0001b0c9:
  if (lVar6 == 0) {
    if ((longlong *)*plVar1 == plVar1) {
      return uVar8;
    }
    lVar6 = *plVar1 - *(longlong *)(param_2 + 0x70);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x70) + lVar6);
    if (plVar2 == plVar1) {
      return uVar8;
    }
    lVar6 = (longlong)plVar2 - *(longlong *)(param_2 + 0x70);
  }
  if (lVar6 == 0) {
    return uVar8;
  }
  lVar5 = 0;
  plVar2 = (longlong *)(lVar6 + 0x40);
  lVar9 = 0;
LAB_0001b109:
  if (lVar5 == 0) {
    if ((longlong *)*plVar2 == plVar2) goto LAB_0001b149;
    lVar5 = *plVar2 - *(longlong *)(lVar6 + 0x50);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(lVar6 + 0x50) + lVar5);
    if (plVar3 == plVar2) goto LAB_0001b149;
    lVar5 = (longlong)plVar3 - *(longlong *)(lVar6 + 0x50);
  }
  if (lVar5 == 0) goto LAB_0001b149;
  local_88[lVar9] = lVar5 + 0x20;
  if (lVar9 < 0xf) {
    lVar9 = lVar9 + 1;
  }
  goto LAB_0001b109;
LAB_0001b149:
  uVar4 = FUN_0001b298(param_1,*(char *)(lVar6 + 0x11),(uint)*(byte *)(lVar6 + 0x10),
                       (*(byte *)(param_2 + 0x40) & 0x80) == 0x80,iVar7,(longlong)local_88,
                       *(undefined1 *)(lVar6 + 0x12),*(undefined1 *)(lVar6 + 0x13));
  uVar8 = uVar4 & 0xffffffff;
  if ((int)uVar4 < 0) {
    *(undefined1 *)(param_1 + 0x1b14) = 0;
  }
  else {
    iVar7 = iVar7 + (uint)*(byte *)(lVar6 + 0x10);
  }
  goto LAB_0001b0c9;
}

