// rea decompile_all
// name: FUN_006c38b0
// address: 0x6c38b0
// body: available
// range: 0x6c38b0-0x6c395d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c38b0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int in_ECX;
  
  cVar3 = FUN_0069e2c0(param_1);
  if (cVar3 == '\0') {
    FUN_004918d0(param_1);
    cVar3 = FUN_0069e340();
    if (cVar3 != '\0') {
      operator_new(0x30);
      piVar5 = (int *)FUN_004aea70(in_ECX);
      piVar1 = *(int **)(in_ECX + 0x20);
      if ((piVar1 != piVar5) && (*(int **)(in_ECX + 0x20) = piVar5, piVar1 != (int *)0x0)) {
        (**(code **)*piVar1)(1);
      }
      if ((char)piVar5[10] == '\0') {
        FUN_0069e630();
        uVar4 = (**(code **)(*piVar5 + 8))();
        *(undefined1 *)(piVar5 + 10) = uVar4;
      }
      (**(code **)(*piVar5 + 0xc))();
      return;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x20);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      (**(code **)*puVar2)(1);
    }
    FUN_006c3650(0);
  }
  return;
}

