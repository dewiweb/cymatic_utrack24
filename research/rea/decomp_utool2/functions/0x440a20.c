// rea decompile_all
// name: FUN_00440a20
// address: 0x440a20
// body: available
// range: 0x440a20-0x440ad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440a20(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *in_ECX;
  undefined1 *puVar4;
  int in_EDX;
  int iVar5;
  int local_c;
  
  if (0 < in_EDX) {
    iVar1 = param_2 + -1;
    local_c = in_EDX;
    do {
      puVar3 = (undefined1 *)*param_1;
      iVar5 = iVar1;
      puVar4 = in_ECX;
      if (puVar3 == (undefined1 *)0x0) {
        for (; -1 < iVar5; iVar5 = iVar5 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + in_EDX;
        }
      }
      else {
        if ((puVar3 == in_ECX) && (4 < in_EDX)) {
          puVar3 = puVar3 + param_2 * 4;
          puVar4 = in_ECX + in_EDX * param_2;
          if (-1 < iVar1) {
            do {
              puVar2 = puVar3 + -1;
              puVar3 = puVar3 + -4;
              puVar4 = puVar4 + -in_EDX;
              iVar5 = iVar5 + -1;
              *puVar4 = *puVar2;
            } while (-1 < iVar5);
            param_1 = param_1 + 1;
            goto LAB_00440ac5;
          }
        }
        else {
          for (; -1 < iVar5; iVar5 = iVar5 + -1) {
            puVar2 = puVar3 + 3;
            puVar3 = puVar3 + 4;
            *puVar4 = *puVar2;
            puVar4 = puVar4 + in_EDX;
          }
        }
        param_1 = param_1 + 1;
      }
LAB_00440ac5:
      in_ECX = in_ECX + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

