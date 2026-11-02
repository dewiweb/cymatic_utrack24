// rea decompile_all
// name: FUN_005c63d0
// address: 0x5c63d0
// body: available
// range: 0x5c63d0-0x5c64a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c63d0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_ECX;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_00637f30();
  if (*(char *)(in_ECX + 8) != '\0') {
    fVar1 = (float)in_ECX[4];
    iVar8 = 0;
    fVar2 = (float)in_ECX[1];
    fVar3 = (float)in_ECX[2];
    fVar4 = (float)in_ECX[3];
    fVar10 = (float)in_ECX[6];
    fVar11 = (float)in_ECX[7];
    fVar5 = (float)in_ECX[5];
    if (0 < param_2) {
      do {
        fVar6 = *(float *)(param_1 + iVar8 * 4);
        fVar9 = fVar6 * fVar2 + fVar10;
        *(float *)(param_1 + iVar8 * 4) = fVar9;
        iVar8 = iVar8 + 1;
        fVar10 = (fVar6 * fVar3 - fVar9 * fVar1) + fVar11;
        fVar11 = fVar6 * fVar4 - fVar9 * fVar5;
      } while (iVar8 < param_2);
    }
    if ((-1e-08 <= fVar10) && (fVar10 <= 1e-08)) {
      fVar10 = 0.0;
    }
    in_ECX[6] = fVar10;
    if ((-1e-08 <= fVar11) && (fVar11 <= 1e-08)) {
      fVar11 = 0.0;
    }
    in_ECX[7] = fVar11;
  }
  LOCK();
  uVar7 = *in_ECX;
  *in_ECX = 0;
  UNLOCK();
  return uVar7;
}

