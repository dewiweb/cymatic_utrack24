// rea decompile_all
// name: FUN_0002375c
// address: 0x2375c
// body: available
// range: 0x2375c-0x23940 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002375c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)0x0;
LAB_00023776:
  do {
    if (plVar3 == (longlong *)0x0) {
      if ((longlong *)*param_1 == param_1) {
        return;
      }
      plVar3 = (longlong *)(*param_1 - param_1[2]);
    }
    else {
      plVar3 = *(longlong **)(param_1[2] + (longlong)plVar3);
      if (plVar3 == param_1) {
        return;
      }
      plVar3 = (longlong *)((longlong)plVar3 - param_1[2]);
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  } while ((param_2 != 0) && (plVar3[4] != param_2));
  plVar1 = plVar3 + 10;
  while ((longlong *)*plVar1 != plVar1) {
    plVar2 = (longlong *)*plVar1;
    if (plVar2 == plVar1) {
      lVar5 = 0;
    }
    else {
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      lVar5 = (longlong)plVar2 - plVar3[0xc];
    }
    *(int *)(plVar3 + 0xd) = (int)plVar3[0xd] + -1;
    FUN_0002446c(lVar5);
    lVar4 = *(longlong *)(lVar5 + 0x38);
    if (lVar4 != 0) {
      if (*(longlong **)(lVar5 + 0x20) != (longlong *)(lVar5 + 0x20)) {
        plVar2 = (longlong *)(lVar5 + *(longlong *)(lVar4 + 0x98));
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
      }
      *(undefined1 *)(lVar4 + 0x3a) = 1;
    }
  }
  FUN_00023248(plVar3);
  lVar5 = DAT_00029268;
  lVar4 = 0;
  plVar1 = plVar3 + 6;
LAB_00023850:
  if (lVar4 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_000238b7;
    lVar4 = *plVar1 - plVar3[8];
  }
  else {
    plVar2 = *(longlong **)(plVar3[8] + lVar4);
    if (plVar2 == plVar1) goto LAB_000238b7;
    lVar4 = (longlong)plVar2 - plVar3[8];
  }
  if (lVar4 == 0) goto LAB_000238b7;
  while (plVar2 = *(longlong **)(lVar4 + 0x58), plVar2 != (longlong *)(lVar4 + 0x58)) {
    *(longlong *)plVar2[1] = *plVar2;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    if (plVar2 == (longlong *)*(longlong *)(lVar4 + 0x68)) break;
    *(int *)((longlong)plVar3 + 0x6c) = *(int *)((longlong)plVar3 + 0x6c) + -1;
    *(int *)(lVar5 + 0x784) = *(int *)(lVar5 + 0x784) + -1;
  }
  goto LAB_00023850;
LAB_000238b7:
  FUN_00023248(plVar3);
  lVar5 = 0;
LAB_000238c2:
  if (lVar5 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_00023921;
    lVar5 = *plVar1 - plVar3[8];
  }
  else {
    plVar2 = *(longlong **)(plVar3[8] + lVar5);
    if (plVar2 == plVar1) goto LAB_00023921;
    lVar5 = (longlong)plVar2 - plVar3[8];
  }
  if (lVar5 == 0) goto LAB_00023921;
  while (plVar2 = *(longlong **)(lVar5 + 0x70), plVar2 != (longlong *)(lVar5 + 0x70)) {
    *(longlong *)plVar2[1] = *plVar2;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    if (plVar2 == (longlong *)*(longlong *)(lVar5 + 0x80)) break;
    *(int *)(plVar3 + 0xe) = (int)plVar3[0xe] + -1;
  }
  goto LAB_000238c2;
LAB_00023921:
  FUN_00023248(plVar3);
  goto LAB_00023776;
}

