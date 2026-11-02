// rea decompile_all
// name: FUN_00018c30
// address: 0x18c30
// body: available
// range: 0x18c30-0x18e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00018c30(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  lVar2 = KsPinGetLeadingEdgeStreamPointer(*(undefined8 *)(param_1 + 0x38),1);
  do {
    if (lVar2 == 0) {
LAB_00018df6:
      if (*(char *)(param_1 + 0x2e0) != '\0') {
        uVar3 = 0;
      }
      return uVar3;
    }
    if (*(int *)(param_1 + 0x260) == 0) {
      if (*(char *)(param_1 + 0x2e0) != '\0') {
        KsStreamPointerUnlock(lVar2,0);
        goto LAB_00018df6;
      }
      memcpy((void *)(param_1 + 0x25c),*(void **)(param_1 + 0x2d8),0x48);
      *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_1 + 0x2d8) + 0x48;
      if (*(ulonglong *)(param_1 + 0x2c0) <= *(ulonglong *)(param_1 + 0x2d8)) {
        *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2b8);
      }
      if (*(longlong *)(param_1 + 0x2d0) == *(longlong *)(param_1 + 0x2d8)) {
        *(undefined1 *)(param_1 + 0x2e0) = 1;
      }
      *(undefined1 *)(param_1 + 0x2e1) = 0;
    }
    lVar1 = *(longlong *)(lVar2 + 0x10);
    uVar4 = *(uint *)(lVar1 + 0x20);
    if (uVar4 < 8) {
      *(undefined4 *)(lVar1 + 0x24) = 0;
      KsStreamPointerAdvanceOffsetsAndUnlock(lVar2,0,0,1);
    }
    else {
      _Dst = *(void **)(lVar1 + 0x28);
      uVar5 = uVar4 - 8;
      if (uVar5 < *(uint *)(param_1 + 0x260)) {
        memcpy(_Dst,(void *)(param_1 + 0x25c),(ulonglong)uVar5 + 8);
        *(uint *)((longlong)_Dst + 4) = uVar5;
        *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) - uVar5;
        memcpy((void *)(param_1 + 0x264),(void *)((ulonglong)uVar5 + 0x264 + param_1),
               (ulonglong)*(uint *)(param_1 + 0x260));
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x260) + 8;
        memcpy(_Dst,(void *)(param_1 + 0x25c),(ulonglong)uVar4);
        *(undefined4 *)(param_1 + 0x260) = 0;
      }
      uVar5 = *(uint *)(*(longlong *)(lVar2 + 0x10) + 0x20);
      uVar4 = uVar4 + 3 & 0xfffffffc;
      *(undefined4 *)(lVar1 + 0x14) = 1;
      *(undefined4 *)(lVar1 + 0x10) = 1;
      *(undefined4 *)(lVar1 + 0x30) = 0;
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *(uint *)(lVar1 + 0x24) = uVar5;
      *(undefined8 *)(lVar1 + 8) = 0;
      KsStreamPointerAdvanceOffsetsAndUnlock(lVar2,0,uVar5,1);
      uVar3 = 1;
    }
    lVar2 = KsPinGetLeadingEdgeStreamPointer(*(undefined8 *)(param_1 + 0x38));
  } while( true );
}

