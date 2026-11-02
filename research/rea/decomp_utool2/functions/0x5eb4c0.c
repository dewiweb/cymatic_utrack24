// rea decompile_all
// name: FUN_005eb4c0
// address: 0x5eb4c0
// body: available
// range: 0x5eb4c0-0x5eb739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eb4c0(float param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float in_XMM2_Da;
  float in_XMM3_Da;
  int local_14;
  
  iVar3 = (int)((float)in_EDX * param_1);
  iVar1 = (int)((float)in_EDX * in_XMM3_Da);
  while( true ) {
    while (in_XMM2_Da <= 0.0) {
      in_XMM2_Da = 0.05;
    }
    if (in_XMM2_Da < 1.0) break;
    in_XMM2_Da = 0.95;
  }
  iVar2 = (int)((float)iVar1 * in_XMM2_Da * 0.5);
  param_1 = (float)(int)((float)(in_EDX - iVar3) * in_XMM2_Da * 0.5);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar5 = iVar4;
      if (in_EDX <= iVar4) break;
      iVar5 = iVar4 + 1;
      dVar6 = ((double)iVar5 * 3.141592653589793) / (double)iVar2;
      FUN_006f7d20();
      *(float *)(in_ECX + iVar4 * 4) = (float)(0.5 - dVar6 * 0.5);
      iVar4 = iVar5;
    } while (iVar5 < iVar2);
  }
  for (; (iVar4 = iVar2, iVar5 < iVar1 - iVar2 && (iVar5 < in_EDX)); iVar5 = iVar5 + 1) {
    *(undefined4 *)(in_ECX + iVar5 * 4) = 0x3f800000;
  }
  for (; (iVar5 < iVar1 && (iVar5 < in_EDX)); iVar5 = iVar5 + 1) {
    dVar6 = ((double)iVar4 * 3.141592653589793) / (double)iVar2;
    FUN_006f7d20();
    *(float *)(in_ECX + iVar5 * 4) = (float)(0.5 - dVar6 * 0.5);
    iVar4 = iVar4 + -1;
  }
  for (; (iVar5 < iVar3 && (iVar5 < in_EDX)); iVar5 = iVar5 + 1) {
    *(undefined4 *)(in_ECX + iVar5 * 4) = 0;
  }
  if (iVar5 < iVar3 + (int)param_1) {
    local_14 = 1;
    do {
      if (in_EDX <= iVar5) break;
      dVar6 = ((double)local_14 * 3.141592653589793) / (double)(int)param_1;
      FUN_006f7d20();
      local_14 = local_14 + 1;
      *(float *)(in_ECX + iVar5 * 4) = (float)(0.5 - dVar6 * 0.5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3 + (int)param_1);
  }
  while( true ) {
    if (in_EDX - (int)param_1 <= iVar5) {
      if (iVar5 < in_EDX) {
        dVar6 = (double)(int)param_1;
        do {
          dVar7 = ((double)(int)param_1 * 3.141592653589793) / dVar6;
          FUN_006f7d20();
          param_1 = (float)((int)param_1 + -1);
          *(float *)(in_ECX + iVar5 * 4) = (float)(0.5 - dVar7 * 0.5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < in_EDX);
      }
      return;
    }
    if (in_EDX <= iVar5) break;
    *(undefined4 *)(in_ECX + iVar5 * 4) = 0x3f800000;
    iVar5 = iVar5 + 1;
  }
  return;
}

