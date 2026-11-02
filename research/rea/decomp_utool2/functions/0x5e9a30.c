// rea decompile_all
// name: FUN_005e9a30
// address: 0x5e9a30
// body: available
// range: 0x5e9a30-0x5e9b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e9a30(void)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *in_EDX;
  int iVar5;
  
  piVar2 = *(int **)(in_ECX + 0x1c);
  _memset(in_EDX,0,0x30);
  if ((piVar2 + 0x348 != (int *)0x0) && (0 < piVar2[0x34b])) {
    iVar3 = *(int *)(in_ECX + 8);
    iVar5 = *piVar2 >> 1;
    in_EDX[6] = piVar2[1] / *piVar2;
    *in_EDX = 1;
    FUN_006f9790(((double)piVar2[0x348] * (double)iVar5) / (double)iVar3 + 0.5);
    uVar4 = FUN_004e5970();
    in_EDX[3] = uVar4;
    FUN_006f9790(((double)piVar2[0x349] * (double)iVar5) / (double)iVar3 + 0.5);
    uVar4 = FUN_004e5970();
    in_EDX[4] = uVar4;
    FUN_006f9790(((double)piVar2[0x34a] * (double)iVar5) / (double)iVar3 + 0.5);
    uVar4 = FUN_004e5970();
    in_EDX[5] = uVar4;
    *(undefined8 *)(in_EDX + 8) = 0x401c000000000000;
    iVar3 = piVar2[0x34b];
    dVar1 = *(double *)(piVar2 + 0x34c);
    in_EDX[2] = (int)((double)iVar3 * dVar1);
    in_EDX[1] = (int)((double)iVar3 * dVar1);
  }
  return;
}

