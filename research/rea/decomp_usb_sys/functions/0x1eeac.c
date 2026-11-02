// rea decompile_all
// name: FUN_0001eeac
// address: 0x1eeac
// body: available
// range: 0x1eeac-0x1efc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_0001eeac(undefined8 param_1,int param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar3 = DAT_00029268;
  lVar6 = 0;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  FUN_000264d0(param_3,0,0x104);
  lVar8 = DAT_00029268;
  lVar4 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),param_2);
  if (lVar4 == 0) {
    lVar6 = 0xe0000040;
LAB_0001ef16:
    KeReleaseMutex(lVar3 + 0x18,0);
    return lVar6;
  }
  plVar9 = (longlong *)(lVar8 + 0x120);
  *(undefined4 *)param_3 = 0;
  lVar5 = lVar6;
LAB_0001ef46:
  if (lVar5 == 0) {
    if ((longlong *)*plVar9 == plVar9) goto LAB_0001ef16;
    lVar5 = *plVar9 - *(longlong *)(lVar8 + 0x130);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x130) + lVar5);
    if (plVar1 == plVar9) goto LAB_0001ef16;
    lVar5 = (longlong)plVar1 - *(longlong *)(lVar8 + 0x130);
  }
  if (lVar5 == 0) goto LAB_0001ef16;
  if (*(longlong *)(lVar5 + 0x20) == lVar4) {
    plVar1 = (longlong *)(lVar5 + 0x30);
    lVar7 = lVar6;
LAB_0001ef7e:
    if (lVar7 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_0001ef46;
      lVar7 = *plVar1 - *(longlong *)(lVar5 + 0x40);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + lVar7);
      if (plVar2 == plVar1) goto LAB_0001ef46;
      lVar7 = (longlong)plVar2 - *(longlong *)(lVar5 + 0x40);
    }
    if (lVar7 == 0) goto LAB_0001ef46;
    if ((*(char *)(lVar7 + 0x36) != '\0') && ((uint)*param_3 < 0x40)) {
      *(undefined4 *)((longlong)param_3 + (ulonglong)(uint)*param_3 * 4 + 4) =
           *(undefined4 *)(lVar7 + 0x1c);
      *(int *)param_3 = (int)*param_3 + 1;
    }
    goto LAB_0001ef7e;
  }
  goto LAB_0001ef46;
}

