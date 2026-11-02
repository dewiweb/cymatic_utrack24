// rea decompile_all
// name: FUN_0002358c
// address: 0x2358c
// body: available
// range: 0x2358c-0x2361c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002358c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if ((longlong *)*plVar1 != plVar1) {
    puVar4 = (undefined8 *)(*plVar1 - *(longlong *)(param_1 + 0x28));
    while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        if ((longlong *)*plVar1 == plVar1) {
LAB_000235ce:
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = (undefined8 *)(*plVar1 - *(longlong *)(param_1 + 0x28));
        }
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)puVar3);
        if (plVar2 == plVar1) goto LAB_000235ce;
        puVar4 = (undefined8 *)((longlong)plVar2 - *(longlong *)(param_1 + 0x28));
      }
      if (*(int *)(puVar3 + 5) == 0) {
        plVar2 = (longlong *)((longlong)puVar3 + *(longlong *)(param_1 + 0x28));
        *(longlong *)plVar2[1] = *plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        plVar2[1] = (longlong)plVar2;
        *plVar2 = (longlong)plVar2;
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return;
}

