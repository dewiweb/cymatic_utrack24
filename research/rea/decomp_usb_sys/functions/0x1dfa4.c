// rea decompile_all
// name: FUN_0001dfa4
// address: 0x1dfa4
// body: available
// range: 0x1dfa4-0x1e094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001dfa4(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  FUN_000264d0(param_2,0,0x3e04);
  lVar4 = DAT_00029268;
  lVar1 = *(longlong *)(param_1 + -0x60);
  if (lVar1 != 0) {
    *(undefined4 *)param_2 = 0;
    lVar6 = 0;
    plVar5 = (longlong *)(lVar4 + 0x150);
LAB_0001e00e:
    if (lVar6 == 0) {
      if ((longlong *)*plVar5 == plVar5) goto LAB_0001e06e;
      lVar6 = *plVar5 - *(longlong *)(lVar4 + 0x160);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x160) + lVar6);
      if (plVar2 == plVar5) goto LAB_0001e06e;
      lVar6 = (longlong)plVar2 - *(longlong *)(lVar4 + 0x160);
    }
    if (lVar6 == 0) goto LAB_0001e06e;
    if ((lVar1 == 0) || (lVar1 == *(longlong *)(lVar6 + 0x10))) {
      if (0x7f < (uint)*param_2) goto LAB_0001e06e;
      memcpy((void *)((ulonglong)(uint)*param_2 * 0x7c + 4 + (longlong)param_2),
             (void *)(lVar6 + 0x18),0x7c);
      *(int *)param_2 = (int)*param_2 + 1;
    }
    goto LAB_0001e00e;
  }
LAB_0001e06e:
                    /* WARNING: Could not recover jumptable at 0x0001e08e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(lVar3 + 0x18,0);
  return;
}

