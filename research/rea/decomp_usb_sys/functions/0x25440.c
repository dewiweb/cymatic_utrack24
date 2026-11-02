// rea decompile_all
// name: FUN_00025440
// address: 0x25440
// body: available
// range: 0x25440-0x25533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00025440(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  KeWaitForSingleObject(param_1 + 0x70,0,0,0,0);
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    iVar2 = FUN_0001f648(*(longlong *)(param_1 + 0x10));
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 0x29) = 1;
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        *(undefined1 *)(param_1 + 0x1d0) = 0;
        if (*(char *)(param_1 + 0x149) == '\0') {
          while (plVar1 = *(longlong **)(param_1 + 0x1b8), plVar1 != (longlong *)(param_1 + 0x1b8))
          {
            *(longlong *)plVar1[1] = *plVar1;
            *(longlong *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (longlong)plVar1;
            *plVar1 = (longlong)plVar1;
            lVar3 = (longlong)plVar1 - *(longlong *)(param_1 + 0x1c8);
            if (lVar3 == 0) break;
            FUN_000257a4(param_1,lVar3);
          }
        }
        else {
          FUN_000253e0(param_1);
          *(undefined1 *)(param_1 + 0x149) = 0;
        }
      }
      if (*(int *)(param_1 + 0x154) != 0) {
        (**(code **)**(undefined8 **)(param_1 + 0x1a8))();
      }
    }
  }
  else {
    iVar2 = -0x3fffffff;
  }
  KeReleaseMutex(param_1 + 0x70,0);
  return iVar2;
}

