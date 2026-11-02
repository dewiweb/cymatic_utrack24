// rea decompile_all
// name: FUN_000137e0
// address: 0x137e0
// body: available
// range: 0x137e0-0x138a9 inclusive
// range: 0x138c1-0x138d0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000137e0(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_000138d8(param_1);
  if (param_2 == 0) {
    uVar1 = 0xc000000d;
  }
  else if (param_3 == 0) {
    uVar1 = 0xc000000d;
  }
  else {
    uVar3 = 0;
    lVar2 = IoAllocateMdl(param_2,param_3,0,0,0);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xc000009a;
    }
    else {
      MmProbeAndLockPages(lVar2,0,2);
      lVar2 = *param_1;
      if ((*(byte *)(lVar2 + 10) & 5) == 0) {
        lVar2 = MmMapLockedPagesSpecifyCache(lVar2,0,1,0,uVar3 & 0xffffffff00000000,0x10);
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x18);
      }
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        MmUnlockPages(*param_1);
        IoFreeMdl(*param_1);
        *param_1 = 0;
        uVar1 = 0xc000009a;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

