// rea decompile_all
// name: FUN_00011b4c
// address: 0x11b4c
// body: available
// range: 0x11b4c-0x11c31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00011b4c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  
  plVar1 = DAT_00029268;
  KeWaitForSingleObject(DAT_00029268 + 3,0,0,0,0);
  iVar2 = (**(code **)(*DAT_00029268 + 0x18))(DAT_00029268,param_1,param_2);
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,0x1bc0,0x5f6e6577);
    if (puVar3 == (ulonglong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      FUN_000264d0(puVar3,0,0x1bc0);
      plVar4 = FUN_00018f34(puVar3);
    }
    if (plVar4 == (longlong *)0x0) {
      iVar2 = -0x3fffff66;
    }
    else {
      iVar2 = FUN_000122a8(plVar4,param_1,param_2);
      if (iVar2 < 0) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  KeReleaseMutex(plVar1 + 3,0);
  return iVar2;
}

