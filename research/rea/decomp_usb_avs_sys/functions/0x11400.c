// rea decompile_all
// name: FUN_00011400
// address: 0x11400
// body: available
// range: 0x11400-0x1149c inclusive
// range: 0x114a0-0x11580 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011400(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  plVar2 = (longlong *)(param_1 + 0x4000);
  if ((int)param_2 != 1) {
LAB_000114a0:
    if (lVar6 == 0) {
      if ((longlong *)*plVar2 == plVar2) {
        return;
      }
      lVar6 = *plVar2 - *(longlong *)(param_1 + 0x4010);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4010) + lVar6);
      if (plVar1 == plVar2) {
        return;
      }
      lVar6 = (longlong)plVar1 - *(longlong *)(param_1 + 0x4010);
    }
    if (lVar6 == 0) {
      return;
    }
    lVar5 = 0;
    plVar1 = (longlong *)(lVar6 + 0x28);
LAB_000114e0:
    if (lVar5 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_000114a0;
      lVar5 = *plVar1 - *(longlong *)(lVar6 + 0x38);
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar5);
      if (plVar3 == plVar1) goto LAB_000114a0;
      lVar5 = (longlong)plVar3 - *(longlong *)(lVar6 + 0x38);
    }
    if (lVar5 == 0) goto LAB_000114a0;
    if ((*(int *)(lVar5 + 0x40) == 3) && (*(char *)(lVar5 + 0x80) != '\0')) {
      uVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x18) + 0x18) + 0x40))();
      *(undefined8 *)(lVar5 + 0x48) = uVar4;
      plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x18) + 0x18);
      (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(lVar5 + 0x78));
      *(undefined1 *)(lVar5 + 0x80) = 0;
      KeCancelTimer(lVar5 + 0xa0);
      *(undefined1 *)(lVar5 + 0x1b8) = 0;
      KeCancelTimer(lVar5 + 0x128);
    }
    goto LAB_000114e0;
  }
LAB_00011422:
  if (lVar6 == 0) {
    if ((longlong *)*plVar2 == plVar2) {
      return;
    }
    lVar6 = *plVar2 - *(longlong *)(param_1 + 0x4010);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4010) + lVar6);
    if (plVar1 == plVar2) {
      return;
    }
    lVar6 = (longlong)plVar1 - *(longlong *)(param_1 + 0x4010);
  }
  if (lVar6 == 0) {
    return;
  }
  lVar5 = 0;
  plVar1 = (longlong *)(lVar6 + 0x28);
LAB_00011461:
  if (lVar5 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_00011422;
    lVar5 = *plVar1 - *(longlong *)(lVar6 + 0x38);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar5);
    if (plVar3 == plVar1) goto LAB_00011422;
    lVar5 = (longlong)plVar3 - *(longlong *)(lVar6 + 0x38);
  }
  if (lVar5 == 0) goto LAB_00011422;
  if (*(int *)(lVar5 + 0x40) == 3) {
    FUN_000172e0(lVar5,param_2);
  }
  goto LAB_00011461;
}

