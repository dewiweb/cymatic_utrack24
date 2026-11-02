// rea decompile_all
// name: FUN_00019450
// address: 0x19450
// body: available
// range: 0x19450-0x19543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019450(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint *puVar5;
  
  lVar2 = 0;
  FUN_000264d0(param_2,0,0x338);
  uVar3 = 0;
  plVar4 = (longlong *)(param_1 + 0x1448);
  puVar5 = (uint *)((longlong)param_2 + 0x3c);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0xe0);
  while( true ) {
    if (lVar2 == 0) {
      if ((longlong *)*plVar4 == plVar4) {
        return;
      }
      lVar2 = *plVar4 - plVar4[2];
    }
    else {
      plVar1 = *(longlong **)(plVar4[2] + lVar2);
      if (plVar1 == plVar4) {
        return;
      }
      lVar2 = (longlong)plVar1 - plVar4[2];
    }
    if (lVar2 == 0) break;
    *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
    FUN_000117c0((char *)(param_2 + uVar3 * 6 + 8),(char *)(lVar2 + 0x10),0x28);
    uVar3 = (ulonglong)((int)uVar3 + 1);
    *puVar5 = (uint)*(byte *)(lVar2 + 0x38);
    puVar5 = puVar5 + 0xc;
    if ((*(longlong *)(param_1 + 0x1468) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x1468) + 3) == *(char *)(lVar2 + 0x38))) {
      FUN_000117c0((char *)((longlong)param_2 + 0xc),(char *)(lVar2 + 0x10),0x28);
      *(uint *)(param_2 + 1) = (uint)*(byte *)(lVar2 + 0x38);
    }
  }
  return;
}

