// rea decompile_all
// name: FUN_0044daa0
// address: 0x44daa0
// body: available
// range: 0x44daa0-0x44db28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0044daa0(int *param_1)

{
  int *piVar1;
  wint_t wVar2;
  wint_t wVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  
  piVar5 = (int *)*in_ECX;
  piVar1 = piVar5 + in_ECX[2] * 3;
  piVar4 = piVar1;
  do {
    if (piVar5 == piVar1) {
      return (uint)piVar4 & 0xffffff00;
    }
    piVar4 = (int *)param_1[1];
    if (piVar4 == (int *)piVar5[1]) {
      piVar4 = (int *)piVar5[2];
      if ((((int *)param_1[2] == piVar4) || ((int *)param_1[2] == (int *)0x0)) ||
         (piVar4 == (int *)0x0)) {
        piVar4 = (int *)*param_1;
        if (piVar4 == (int *)*piVar5) {
LAB_0044db1e:
          return CONCAT31((int3)((uint)piVar4 >> 8),1);
        }
        if (((int)piVar4 < 0x100) && (*piVar5 < 0x100)) {
          wVar2 = _towlower((wint_t)piVar4);
          wVar3 = _towlower((wint_t)*piVar5);
          piVar4 = (int *)(uint)wVar3;
          if ((int *)(uint)wVar2 == piVar4) goto LAB_0044db1e;
        }
      }
    }
    piVar5 = piVar5 + 3;
  } while( true );
}

