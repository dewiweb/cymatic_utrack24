// rea decompile_all
// name: FUN_005eb8e0
// address: 0x5eb8e0
// body: available
// range: 0x5eb8e0-0x5eba00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eb8e0(void)

{
  undefined4 *in_ECX;
  int in_EDX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  double dVar5;
  float in_XMM2_Da;
  float *local_8;
  
  if (0.0 < in_XMM2_Da) {
    if (1.0 <= in_XMM2_Da) {
      FUN_005ec1c0();
      return;
    }
    uVar1 = (uint)(in_XMM2_Da * -0.5 * (float)in_EDX);
    uVar2 = ~uVar1;
    iVar4 = in_EDX;
    puVar3 = in_ECX;
    if (0 < in_EDX) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = 0x3f800000;
        puVar3 = puVar3 + 1;
      }
    }
    if ((uVar2 != 0 && (int)uVar1 < 0) && (iVar4 = 0, (int)uVar1 < 0)) {
      local_8 = (float *)(in_ECX + (in_EDX - uVar2) + -1);
      do {
        dVar5 = ((double)iVar4 * 3.141592653589793) / (double)(int)uVar2;
        FUN_006f7d20();
        in_ECX[iVar4] = (float)(0.5 - dVar5 * 0.5);
        dVar5 = ((double)(int)(iVar4 + uVar2) * 3.141592653589793) / (double)(int)uVar2;
        FUN_006f7d20();
        iVar4 = iVar4 + 1;
        *local_8 = (float)(0.5 - dVar5 * 0.5);
        local_8 = local_8 + 1;
      } while (iVar4 <= (int)uVar2);
    }
  }
  else if (0 < in_EDX) {
    for (; in_EDX != 0; in_EDX = in_EDX + -1) {
      *in_ECX = 0x3f800000;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  return;
}

