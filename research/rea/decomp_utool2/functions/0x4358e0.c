// rea decompile_all
// name: FUN_004358e0
// address: 0x4358e0
// body: available
// range: 0x4358e0-0x435a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004358e0(float *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  float *pfVar2;
  undefined1 *puVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *in_ECX;
  pfVar2 = (float *)in_ECX[1];
  if ((param_1 == pfVar2) && (4 < iVar1 * 3)) {
    param_1 = param_1 + param_2;
    iVar4 = param_2 + -1;
    if (-1 < iVar4) {
      puVar3 = (undefined1 *)((int)pfVar2 + iVar1 * param_2 * 3 + 2);
      do {
        param_1 = param_1 + -1;
        puVar3 = puVar3 + iVar1 * -3;
        dVar6 = (double)*param_1;
        if (-1.0 <= dVar6) {
          dVar5 = 1.0;
          if (dVar6 <= 1.0) {
            dVar5 = dVar6;
          }
        }
        else {
          dVar5 = -1.0;
        }
        dVar6 = dVar5 * 2147483647.0 + 6755399441055744.0;
        puVar3[-2] = (char)((ulonglong)dVar6 >> 8);
        iVar4 = iVar4 + -1;
        puVar3[-1] = (char)((ulonglong)dVar6 >> 0x10);
        *puVar3 = (char)((ulonglong)dVar6 >> 0x18);
      } while (-1 < iVar4);
    }
  }
  else {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      do {
        dVar6 = (double)*param_1;
        if (-1.0 <= dVar6) {
          dVar5 = 1.0;
          if (dVar6 <= 1.0) {
            dVar5 = dVar6;
          }
        }
        else {
          dVar5 = -1.0;
        }
        dVar6 = dVar5 * 2147483647.0 + 6755399441055744.0;
        *(char *)pfVar2 = (char)((ulonglong)dVar6 >> 8);
        *(char *)((int)pfVar2 + 1) = (char)((ulonglong)dVar6 >> 0x10);
        *(char *)((int)pfVar2 + 2) = (char)((ulonglong)dVar6 >> 0x18);
        pfVar2 = (float *)((int)pfVar2 + iVar1 * 3);
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (-1 < param_2);
    }
  }
  return;
}

