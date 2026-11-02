// rea decompile_all
// name: FUN_0001ed48
// address: 0x1ed48
// body: available
// range: 0x1ed48-0x1edf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001ed48(undefined8 param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  FUN_000264d0(param_2,0,0x104);
  plVar4 = (longlong *)(DAT_00029268 + 0xd0);
  FUN_00016bc8(plVar4);
  lVar3 = 0;
  do {
    if (lVar3 == 0) {
      if ((longlong *)*plVar4 == plVar4) goto LAB_0001eddf;
      lVar3 = *plVar4 - plVar4[2];
    }
    else {
      plVar1 = *(longlong **)(plVar4[2] + lVar3);
      if (plVar1 == plVar4) {
LAB_0001eddf:
                    /* WARNING: Could not recover jumptable at 0x0001edef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        KeReleaseMutex(lVar2 + 0x18,0);
        return;
      }
      lVar3 = (longlong)plVar1 - plVar4[2];
    }
    if (lVar3 == 0) goto LAB_0001eddf;
    if ((uint)*param_2 < 0x40) {
      *(undefined4 *)((longlong)param_2 + (ulonglong)(uint)*param_2 * 4 + 4) =
           *(undefined4 *)(lVar3 + 0xe0);
      *(int *)param_2 = (int)*param_2 + 1;
    }
  } while( true );
}

