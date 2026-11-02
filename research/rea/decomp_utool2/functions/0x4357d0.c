// rea decompile_all
// name: FUN_004357d0
// address: 0x4357d0
// body: available
// range: 0x4357d0-0x4358d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004357d0(float *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  undefined2 *puVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *in_ECX;
  pfVar3 = (float *)in_ECX[1];
  if ((param_1 == pfVar3) && (4 < iVar1 * 2)) {
    param_1 = param_1 + param_2;
    puVar2 = (undefined2 *)((int)pfVar3 + iVar1 * param_2 * 2);
    while (param_2 = param_2 + -1, -1 < param_2) {
      param_1 = param_1 + -1;
      puVar2 = puVar2 + -iVar1;
      dVar5 = (double)*param_1;
      if (-1.0 <= dVar5) {
        dVar4 = 1.0;
        if (dVar5 <= 1.0) {
          dVar4 = dVar5;
        }
      }
      else {
        dVar4 = -1.0;
      }
      *puVar2 = (short)((ulonglong)(dVar4 * 2147483647.0 + 6755399441055744.0) >> 0x10);
    }
  }
  else {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      do {
        dVar5 = (double)*param_1;
        if (-1.0 <= dVar5) {
          dVar4 = 1.0;
          if (dVar5 <= 1.0) {
            dVar4 = dVar5;
          }
        }
        else {
          dVar4 = -1.0;
        }
        *(short *)pfVar3 = (short)((ulonglong)(dVar4 * 2147483647.0 + 6755399441055744.0) >> 0x10);
        pfVar3 = (float *)((int)pfVar3 + iVar1 * 2);
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (-1 < param_2);
    }
  }
  return;
}

