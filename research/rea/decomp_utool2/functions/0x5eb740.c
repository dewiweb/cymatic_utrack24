// rea decompile_all
// name: FUN_005eb740
// address: 0x5eb740
// body: available
// range: 0x5eb740-0x5eb8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eb740(float param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  double dVar6;
  float in_XMM2_Da;
  float in_XMM3_Da;
  
  iVar3 = (int)((float)in_EDX * param_1);
  iVar1 = (int)((float)in_EDX * in_XMM3_Da);
  while( true ) {
    while (in_XMM2_Da <= 0.0) {
      in_XMM2_Da = 0.05;
    }
    if (in_XMM2_Da < 1.0) break;
    in_XMM2_Da = 0.95;
  }
  iVar4 = 0;
  iVar2 = (int)(in_XMM2_Da * 0.5 * (float)(iVar3 - iVar1));
  if (0 < iVar1) {
    do {
      if (in_EDX <= iVar4) break;
      *(undefined4 *)(in_ECX + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (iVar4 < iVar1 + iVar2) {
    param_1 = 1.4013e-45;
    do {
      if (in_EDX <= iVar4) break;
      dVar6 = ((double)(int)param_1 * 3.141592653589793) / (double)iVar2;
      FUN_006f7d20();
      param_1 = (float)((int)param_1 + 1);
      *(float *)(in_ECX + iVar4 * 4) = (float)(0.5 - dVar6 * 0.5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1 + iVar2);
  }
  for (; (iVar1 = iVar2, iVar4 < iVar3 - iVar2 && (iVar4 < in_EDX)); iVar4 = iVar4 + 1) {
    *(undefined4 *)(in_ECX + iVar4 * 4) = 0x3f800000;
  }
  while( true ) {
    if (iVar3 <= iVar4) {
      if (iVar4 < in_EDX) {
        puVar5 = (undefined4 *)(in_ECX + iVar4 * 4);
        for (iVar1 = in_EDX - iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      return;
    }
    if (in_EDX <= iVar4) break;
    dVar6 = ((double)iVar1 * 3.141592653589793) / (double)iVar2;
    FUN_006f7d20();
    *(float *)(in_ECX + iVar4 * 4) = (float)(0.5 - dVar6 * 0.5);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + -1;
  }
  return;
}

