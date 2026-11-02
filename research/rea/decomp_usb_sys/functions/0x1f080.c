// rea decompile_all
// name: FUN_0001f080
// address: 0x1f080
// body: available
// range: 0x1f080-0x1f1b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong * FUN_0001f080(longlong param_1,int *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  
  lVar8 = DAT_00029268 + 0x18;
  KeWaitForSingleObject(lVar8,0,0,0,0);
  uVar6 = FUN_00024054((longlong *)(DAT_00029268 + 0x120),*param_2);
  if (uVar6 != 0) {
    lVar4 = *(longlong *)(uVar6 + 0x28);
    puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0x48,0x5f6e6577);
    if (puVar7 == (ulonglong *)0x0) {
      puVar7 = (ulonglong *)0x0;
    }
    else {
      FUN_000264d0(puVar7,0,0x48);
      puVar1 = puVar7 + 2;
      puVar7[1] = (ulonglong)puVar7;
      *puVar7 = (ulonglong)puVar7;
      puVar7[3] = (ulonglong)puVar1;
      *puVar1 = (ulonglong)puVar1;
    }
    if (puVar7 != (ulonglong *)0x0) {
      puVar7[4] = uVar6;
      if (((*(char *)(uVar6 + 0x36) == '\0') || (*(int *)(uVar6 + 0x40) <= *(int *)(uVar6 + 0x4c)))
         || ((*(char *)(uVar6 + 0x39) == '\0' && (*(int *)(uVar6 + 0x50) != 0)))) {
        ExFreePoolWithTag(puVar7,0);
        puVar7 = (ulonglong *)0x0;
      }
      else {
        *(int *)(uVar6 + 0x4c) = *(int *)(uVar6 + 0x4c) + 1;
        plVar5 = *(longlong **)(param_1 + 0x18);
        plVar3 = (longlong *)((longlong)puVar7 + *(longlong *)(param_1 + 0x20));
        *plVar3 = *plVar5;
        plVar3[1] = (longlong)plVar5;
        *(longlong **)(*plVar5 + 8) = plVar3;
        *plVar5 = (longlong)plVar3;
        piVar2 = (int *)(lVar4 + 0x28);
        *piVar2 = *piVar2 + 1;
      }
      KeReleaseMutex(lVar8,0);
      return puVar7;
    }
  }
  KeReleaseMutex(lVar8,0);
  return (ulonglong *)0x0;
}

